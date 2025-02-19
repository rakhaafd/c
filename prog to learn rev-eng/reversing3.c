#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char key[] = "NPDLJOHKBZ";
    char pass[100];
    int n = strlen(key);

    printf("masukkan password: ");
    scanf("%s", pass);

    int i;
    int v = 1;
    for (i = 0; i < n; i++){
        if (pass[i] + 1 != key[i]) v = 0;
    }

    if (v && strlen(pass) == n) {
        puts("Benar!\n");
    }
    else {
        puts("Salah\n");
    }
    return 0;
}