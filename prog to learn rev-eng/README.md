# Learn Reverse Eng
## 1. Konsep Dasar dan Binary Executeable
Reverse Engineering adalah proses menganalisis suatu sistem, perangkat lunak, atau perangkat keras untuk memahami cara kerjanya tanpa memiliki akses ke dokumentasi atau kode sumber aslinya.  

Tujuan dari reverse engineering dapat beragam, seperti menemukan kerentanan keamanan, memahami algoritma suatu program, melakukan kompatibilitas dengan sistem lain, atau bahkan untuk keperluan forensik digital.

### Berkenalan dengan IDA
<img src="img/1/02.png" width=300>
<br>
<img src="img/1/01.png" width=300>
<br>

> Address dalam IDA menunjukkan lokasi memori di mana suatu instruksi atau data ditempatkan saat program dijalankan.

> Section dalam IDA merujuk pada bagian-bagian terpisah dalam sebuah file biner atau executable. Setiap section memiliki fungsi tertentu dalam eksekusi program.

#### Beberapa Section yang umum ditemukan:
.init -> Entry Point yang dieksekusi sebelum fungsi main.  
.text -> Berisi kode mesin (instruction) dari program.  
.data -> Berisi variabel yang dapat diubah selama runtime (variable global yang diinisialisasi juga masuknya kesini).  
.bss -> Berisi variabel yang belum diinisialisasi.  
.rodata -> Berisi data hanya-baca, seperti string yang tidak boleh diubah.  
.plt (Procedure Linkage Table) & .got (Global Offset Table) -> Digunakan dalam mekanisme dynamic linking pada ELF.  
.fini -> Fungsi yang dieksekusi setelah semuanya selesai (finish).

#### Praktik Program 1
```c
#include <stdio.h>

int p = 100;
int testing = 0;

int jumlah(int a, int b){
    int c = a + b;
    return c;
}

int main(int argc, char **argv){
    printf("Hello World\n");
    int x,y,z;
    x = 20;
    y = 16;
    z = jumlah(x, y);
    printf("%d\n", z);

    testing = 1337;
    printf("%d\n", testing);
    return 0;
}
```

> Note: Jika Variable Local saat di decompile akan lenyap dan akan terganti, sedangkan Variable Global akan tetap aman.

<img src="img/1/03.png" width=300>
<br>

### Apa Itu Stripped?
Stripped merujuk pada file biner (executables) yang telah dihapus simbol-simbol debugging dan informasi simbolik seperti nama fungsi, variabel, dan informasi lain yang bisa membantu dalam analisis kode.

```sh 
# decompile dulu
strip namaProgram
file namaProgram
# pastikan ada kata "stripped"
```

Jika dilihat dari IDA, Nama functionnya langsung hilang:  
<img src="img/1/04.png" width=300>
<br>

Cara Mengetahui fungsi ```main```:  
<img src="img/1/05.png" width=300>
<br>

### Perbedaan Program Normal dengan Stripped
<img src="img/1/06.png" width=300>
<br>

## 2. Static Analysis - 1

[*Program rev1*](compile/reverse1)  
[*Source code*](reversing1.c)    
Penyelesaian -> Check Function ``check_pin``

[*Program rev2*](compile/reverse2)  
[*Source code*](reversing2.c)  
Penyelesaian -> Decompile saja

> Note: Program rev2 ini, diganti dari yang awalnya pointer, ``char *key`` yang pasti sudah kelihatan di addressnya menjadi ``char key[]`` variable stack, yang harus di decompile dulu untuk menyelesaikannya.