#include <stdio.h>

int main(){
    for(int num = 2; num <= 10; num += 2){
        printf("angka yang genap: %d\n", num);
    }

    int angka = 1;
    while (angka <= 10)
    {
        printf("angka yang ganjil: %d\n", angka);
        angka+=2;
    }
    return 0;
}