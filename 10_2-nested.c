#include <stdio.h>
#include <string.h>

int main(){
    char chr;
    printf("masukkan karakter unik (#, @, $): ");
    scanf("%s", &chr);
    switch (chr) {
    case '#':
        printf("anda memasukkan pagar");
        break;
    case '$':
        printf("anda memasukkan dolar");
        break;
    case '@':
        printf("anda memasukkan akeong");
        break;
    default:
        printf("input tidak sesuai");
    }
    return 0;
}