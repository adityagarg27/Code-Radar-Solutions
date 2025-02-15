#include <stdio.h>
int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1==num2 && num2==num3 && num3==num1){
        printf("Equilateral");
    }
    else if(num1==num2 && num3){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}