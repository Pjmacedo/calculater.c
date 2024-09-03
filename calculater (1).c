#include <stdio.h>


void sum();
void sub();
void mult();
void div();
void menu();

int main() {
    menu();
    return 0;
}

void sum() {
    int n, m;
    printf("Type first number:");
    scanf("%d", &n);
    printf("Type second number:");
    scanf("%d", &m);
    printf("The answer is:%d\n\n", n+m);
}
void sub() {
    int n, m;
    printf("Type first number:");
    scanf("%d", &n);
    printf("Type second number:");
    scanf("%d", &m);
    printf("The answer is:%d\n\n", n-m);
}
void mult() {
    int n, m;
    printf("Type first number:");
    scanf("%d", &n);
    printf("Type second number:");
    scanf("%d", &m);
    printf("The answer is:%d\n\n", n*m);
}
void div() {
    float n, m;
    printf("Type first number:");
    scanf("%f", &n);
    printf("Type second number:");
    scanf("%f", &m);
    printf("The answer is:%.2f\n\n", n/m);
}
void menu() {
    int option;
    do {
        printf("===MENU===\n1.Sum\n2.Subtration\n3.Multiple\n4.Division\n5.Close program\nOPTION:");
        scanf("%d", &option);

        switch(option) {
        case 1:
            sum();
            break;
        case 2:
            sub();
            break;
        case 3:
            mult();
            break;
        case 4:
            div();
            break;
        case 5:
            printf("The program is closed\n");
            break;
        default:
            printf("invalid option\n\n");
        }
    } while (option  != 5);
}