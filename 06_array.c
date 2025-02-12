#include <stdio.h>

int main(){
    char name[] = "rakha love semi";
    int lucky_num[4] = {25,26,35,36}; //max 4 elemen in array
    lucky_num[2] = 72 - 3; //overwrite
    printf("%c\n", name[3]); //h
    printf("%d", lucky_num[2]); //69
    return 0;
}