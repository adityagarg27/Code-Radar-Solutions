#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - 1; j++){
            printf(" ");
        }
        for(int j = 1; j <= n; j++){
            printf("* ");
        }
        for(int i = n - 1; i >= 1; i--){
            for(int j = 1; j <= n - 1; j++){
                printf(" ");
            }
            for(int j = 1; j <= n; j++){
                printf("* ");
            }
            printf("\n");
        }
    }return 0;
}