#include <stdio.h>
int main(){
    int b,t;
    char c;
    scanf("%d %d", &b, &t);
    scanf(" %c", &c);
    if( c=='+'){
        printf("%d\n",b+t);
    }
    else if( c=='-'){
        printf("%d\n",b-t);
    }
    else if( c=='*'){
        printf("%d\n",b*t);
    }
    else if( c=='/'){
        if(t==0){
            printf("error");
        }
        else{
            printf("%d",b/t);
        }
    }
    return 0;
}