#include <stdio.h>
#include <string.h>

char key[] = "\xda\xe0\xfb\xfc\xeb\xca\xfc\xfa\xec\xeb\xf0\xed\xe0\xd0\xc9\xdb";
int n = 16;

void decode_key(){
    int i;
    for (i = 0; i < n; i++){
        key[i] = key[i] ^ 0x99;
    }
}

int main (int argc, char **argv){
    char pass[100];
    printf("masukkan password: ");
    scanf("%s", pass);
    decode_key();

    if (strcmp(pass, key) == 0){
        puts("benar\n");
    }
    else {
        puts("salah!\n");
    }
    return 0;
}