#include <stdio.h>

int main(){
    float num1, num2;
    char operator;

    printf("Enter operator, num1 and num2: ");
    // some basic input
    scanf("%c %f %f", &operator, &num1, &num2);

    printf("Success!\n");

    float final;
    if (operator == '/' && num2 == 0 ){
        printf("GO to school, you can't divide by zero!\n");
        return 1;
    }

    switch (operator){
        case '+':
            final = num1 + num2;
            break;
        case '-':
            final = num1 - num2;
            break;
        case '*':
            final = num1 * num2;
            break;
        case '/':
            final = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("%0.2f %c %0.2f = %0.2f \n", num1, operator, num2, final);

    return 0;
}