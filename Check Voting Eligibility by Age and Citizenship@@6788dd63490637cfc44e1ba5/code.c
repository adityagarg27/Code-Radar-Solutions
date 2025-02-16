#include <stdio.h>
int main(){
    int age, citizenstatus;
    scanf("%d %d", &age, &citizenstatus);
    if(age>=18 && citizenstatus==1){
        printf("Eligible");
    }
    else if(age>18 && citizenstatus==0){
        printf("Not Eligible");
    }
    return 0;
}