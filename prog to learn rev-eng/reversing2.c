#include <stdio.h>
#include <string.h>

#define N 16

int main(int agrc, char **argv){
    char pass[100];
    char key[] = "696e695f666c3467";
    printf("masukkan password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = 0;

    int i;
    int correct = 1;
    for (i = 0; i < N; i++){
        if (key[i] != pass[i]) correct = 0;
    }
    if (correct && strlen(pass) == N)
    printf("password benar!\n");
    else
    printf("password salah!\n");
}