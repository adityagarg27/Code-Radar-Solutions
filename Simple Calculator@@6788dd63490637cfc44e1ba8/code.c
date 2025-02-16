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
        if( c!='0'){

    
    
        printf("%d\n",b/d);
        }
    
    else{
        printf("error\n");
    }
    }
    else{
        printf("error\n");
    }
    return 0;
}