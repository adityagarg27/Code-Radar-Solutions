#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = n; i <= n; i++){
        for(char ch = 'A'; ch <= n; ch++){
            printf("%c",ch);
        }printf("\n");
    }return 0;
}