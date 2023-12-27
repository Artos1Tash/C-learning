#include <stdio.h>

int main(){
    double num1, num2;
    char operator;

    printf("Enter operator, num1 and num2: ");
    // some basic input
    scanf("%c %lf %lf", &operator, &num1, &num2);

    printf("Success!\n");
    printf("%lf %c %lf", num1, operator, num2);
    return 0;
}

