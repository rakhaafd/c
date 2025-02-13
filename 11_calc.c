#include <stdio.h>

float calc (char opr, float num1, float num2){
    float result;
    switch (opr) {
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        result = num1 / num2;
        break;
        default:
        printf("tidak sesuai\n");
        break;
    }
    return result;
}

int main(){
    char opr;
    float num1;
    float num2;
    printf("masukkan operasi: ");
    scanf("%c", &opr);
    printf("masukkan angka pertama: ");
    scanf("%f", &num1);
    printf("masukkan angka kedua: ");
    scanf("%f", &num2);
    printf("%f", calc(opr, num1, num2));
    return 0;
}