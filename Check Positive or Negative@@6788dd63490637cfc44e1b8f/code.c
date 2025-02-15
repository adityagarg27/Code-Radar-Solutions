#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    printf("Enter a number: ");
    if(num>0){
        printf("The number is positive: %d\n", num);
    }
    else if(num<0){
        printf("The number is negative: %d\n", num);
    }
    else{
        printf("The number is zero: %d\n");
    }
    return 0;

}

