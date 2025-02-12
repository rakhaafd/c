#include <stdio.h>

int main(){
    int num1;
    int num2;
    printf("input your first number: ");
    scanf("%d", &num1);
    printf("input your second number: ");
    scanf("%d", &num2);

    // result
    int result = num1 + num2;
    printf("result from %d + %d: %d", num1, num2, result);
    return 0;
}