#include<stdio.h>
#include<limits.h>
int main(){
      int arr[5];
      //loop caliye input nite hobe
      for(int i=0;i<5;i++){
        //assign value to arr index
        scanf("%d",&arr[i]);
      }
      //loop caliye arr er value print korte hobe
      for(int i=0; i<5;i++){
        printf("arr[%d] - %d\n",i,arr[i]);
      }
    return 0;
}