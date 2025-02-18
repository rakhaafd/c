#include <stdio.h>

int pin_benar = 6971;

int cek_pin(int pin){
    if(pin == pin_benar){
        return 1;
    }
    return 0;
}

int main(int argc, char **argv){
    int pin;
    printf("masukkan pin yang benar: ");
    scanf("%d\n", &pin);
    if (cek_pin(pin)){
        puts("pin benar\n");
    }
    else {
        puts("pin salah\n");
    }
    return 0;
}