#include <stdio.h>
int main(){
    int b,d;
    char c;
    scanf("%d %d", &b, &d);
    scanf(" %c", &c);
    if( c=='+'){
        printf("%d\n",b+d);
    }
    else if( c=='-'){
        printf("%d\n",b-d);
    }
    else if( c=='*'){
        printf("%d\n",b*d);
    }
    else if( c=='/'){
        if(d==0){
            printf("error");
        }
        else{
            printf("%d"a/b);
        }
    }
    return 0;
}