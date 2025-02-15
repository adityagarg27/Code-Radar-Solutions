#include <stdio.h>
int main(){
    int num1,i;
    scanf("%d", &num1);
    if(num>i){
        for(i=2;i<num1;i++){
            if(num1%i==0){
                printf("Not Prime");
            }
        }
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}