#include <stdio.h>
int main(){
    int costprice, sellingprice;
    scanf("%d %d", &costprice, &sellingprice);
    if(costprice==0 && sellingprice==0){
        printf("No Profit No Loss");
    }
    else if(costprice>sellingprice){
        printf("Loss");
    }
    else if(costprice<sellingprice){
        printf("Profit");
    }
    return 0;
}