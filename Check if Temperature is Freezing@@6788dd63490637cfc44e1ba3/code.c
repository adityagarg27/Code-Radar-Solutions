#include <stdio.h>
int main(){
    int i;
    scanf("%d", &i);
    if(i<=0){
        printf("Freezing");
    }
    else if(i>0){
        printf("Above Freezing");
    }
    return 0;
}