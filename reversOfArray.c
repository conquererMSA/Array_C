#include<stdio.h>
#include<limits.h>
int main(){
    int lenOfArray;
    scanf("%d",&lenOfArray);
    int arr[lenOfArray];
    //loop caliye arr er index e value assign korte hobe
    for(int i=0; i<lenOfArray;i++){
        scanf("%d",&arr[i]);
    }
    //loop caliye arr er index theke reversly value print korte hobe
    for(int i=lenOfArray-1; i>=0;i--){
        printf("arr[%d] - %d\n",i,arr[i]);
    }
    return 0;
}