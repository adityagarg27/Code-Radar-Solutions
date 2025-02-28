#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter Two Numbers: ")
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("True");
    }
    else if("num1<num2"){
        printf("False");
    }
    return 0;
}