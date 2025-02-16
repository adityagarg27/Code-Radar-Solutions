#include <stdio.h>
int main(){
    int d,i;
    scanf("%d", &d);
    if(d>1){
        for(i=2;i<d;i++){
            if(d%1==0){
                printf("Not Prime");
                return 0;
            }
        }
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}