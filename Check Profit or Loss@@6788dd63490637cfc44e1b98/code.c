#include <stdio.h>
int main(){
    int costprice, sellingprice;
    scanf("%d %d", &costprice, &sellingprice);
    if(costprice>sellingprice){
        printf("Loss");
    }
    else if(costprice<sellingprice){
        printf("Profit");
    }
    else{
        printf("No Profit No Loss");
    }

    return 0;
}