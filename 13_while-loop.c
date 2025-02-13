#include <stdio.h>

int main(){
    int num;
    printf("masukkan angka: ");
    scanf("%d", &num);
    while (num <= 100)
    {
        printf("perulangan yang ke-%d\n", num);
        num++;
    }
    return 0;
}