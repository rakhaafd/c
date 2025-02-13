#include <stdio.h>

int main(){
    int num;
    printf("masukkan angka: ");
    scanf("%d", &num);
    do {
        printf("%d kuadrat = %d\n", num, num*num);
        num ++;
    }
    while (num <= 30);
    return 0;
}