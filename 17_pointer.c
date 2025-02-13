#include <stdio.h>

int main(){
    int angka = 5;
    int *alamat_angka = &angka;
    printf("alamat dari var angka adalah %p\n", alamat_angka);
    printf("value dari alamat angka %d\n", *alamat_angka);
    *alamat_angka = 6;
    printf("value sekarang dari alamat angka adalah %d\n", *alamat_angka);
    printf("alamat dari int angka adalah %p\n", &angka);
    return 0;
}