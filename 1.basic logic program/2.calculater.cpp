#include <stdio.h>
int main()
{
    int number1, number2, addition, subtraction, multiply;
    float divide,modulo;

    printf("Enter Number 1\n");
    scanf("%d", &number1);
    printf("Enter Number 2\n");
    scanf("%d", &number2);
    addition       = number1 + number2 ;
    subtraction = number1 - number2;
    multiply = number1 * number2;
    modulo = number1 % number2;
    divide     = number1 / (float)number2; 
    printf("Addition = %d\n",addition);
    printf("Subtraction = %d\n",subtraction);
    printf("Multiplication = %d\n",multiply);
    printf("Division = %.2f\n",divide);
    printf("reminder is = %2f\n",modulo);
    

    return 0;
}
