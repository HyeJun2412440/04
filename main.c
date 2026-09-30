#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Input two integers: ");
    scanf("%i %i", &num1, &num2);

    printf("result is %i\n", num1 + num2);
    printf("result is %i\n", num1 - num2);
    printf("result is %i\n", num1 * num2);
    printf("result is %i\n", num1 / num2);
    printf("result is %i\n", num1 % num2);

    return 0;
}