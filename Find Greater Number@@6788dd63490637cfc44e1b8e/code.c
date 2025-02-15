#include <stdio.h>
int main(){
    int num1 num2;
    printf("Enter two numbers: ");
    sacanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("The greater number is: %d\n", num1);
    }
    else if(num1<num2){
        printf("The greater number is: %d\n", num2);
    }
    else{
        printf("Both numbers are equal: %d\n", num1);
    }
    return 0;
}