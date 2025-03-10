#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

printf("Numbers using Bitwise OR: (%d | 0) = %d and (%d | 0) = %d", num1, num1 | 0, num2, num2 |0);

return 0;
    

}