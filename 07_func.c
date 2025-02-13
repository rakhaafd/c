#include <stdio.h>

int tambah(int num1, int num2){
    return num1 + num2;
}

int kurang(int num1, int num2){
    return num1 - num2;
}

int kali(int num1, int num2){
    return num1 * num2;
}
 
float bagi(int num1, int num2){
    return num1 / num2;
}

void banner() { 
    printf("Welcome to Simple Calculator!\n");
    printf("===============================\n");
}
//void is a method that cant return
// void can call repeated

void say_hello(){
    char name[]= "rakha";
    printf("hallo, i'm %s\n", name);
}

int main(){
    int num1, num2;
    char opr;
    say_hello();
    banner();
    printf("input your first number: ");
    scanf("%d", &num1);
    printf("input your second number: ");
    scanf("%d", &num2);
    printf("input your operation(+, -, *, /): ");
    scanf(" %c", &opr);
    if (opr == '+')
    {
        printf("hasil dari %d %c %d adalah %d", num1, opr, num2, tambah(num1, num2)); 
    }
    
    else if (opr == '-')
    {
        printf("hasil dari %d %c %d adalah %d\n", num1, opr, num2, kurang(num1, num2));
    }

    else if (opr == '*') {
        printf("hasil dari %d %c %d adalah %d\n", num1, opr, num2, kali(num1, num2));
    }

    else if (opr == '/'){
        printf("hasil dari %d %c %d adalah %d\n", num1, opr, num2, bagi(num1, num2));
    }
    
    else{
        printf("operator not valid");
    }
    return 0;
}