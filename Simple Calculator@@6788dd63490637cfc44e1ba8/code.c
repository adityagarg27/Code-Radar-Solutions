#include <stdio.h>
int main(){
    int b,d;
    char c;
    scanf("%d %d", &b, &d);
    scanf("%d", &c);
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
        printf("%d\n",b/d);
    }
    else{
        printf("error");
    }
    return 0;
}