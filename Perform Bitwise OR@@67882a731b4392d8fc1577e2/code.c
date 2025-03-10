#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


int result = num1 | num2;
printf("Result of %d | %d = %d", num1, num2, result);

return 0;
    

}