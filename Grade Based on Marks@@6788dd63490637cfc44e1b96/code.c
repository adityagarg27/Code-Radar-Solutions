#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if(num>=90){
        printf("A");
    }
    else if(num>=80 && num<90){
        printf("B");
    }
    else if(num>=70 && <80){
        printf("C");
    }
    else if(num>=60 && <70){
        printf("D");
    }
    else{
        printf("F")
    }
    retutn 0;
}