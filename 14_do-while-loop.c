#include <stdio.h>

char secret(){
printf("GGWP_ACCESS_SECRET!!!");
}

int main(){
    int num;
    do {
        printf("masukkan angka: ");
        scanf("%d", &num);
        if (num != 5){
            printf("coba lagi teman\n");
        }
    }
    while (num != 5);
    secret();
    return 0;
}