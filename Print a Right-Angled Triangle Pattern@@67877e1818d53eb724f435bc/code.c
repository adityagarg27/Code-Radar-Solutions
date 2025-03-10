#include <stdio.h>
int main(){
    int p;
    scanf("%d", &p);
    for(int i = 1; i <= p;i++){
        for(int j = 1; j <= p;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}