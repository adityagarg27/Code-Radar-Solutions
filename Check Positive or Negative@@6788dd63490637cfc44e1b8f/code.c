#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num>0){
        printf("The number is positive: %d\n", num);
    }
    else if(num<0){
        printf("The number is negative: %d\n", num);
    }
    else(num == 0){
        printf("The number shows nothing: %d\n");
    }
    return 0;

}

