#include<stdio.h>
#include<limits.h>
int main(){
      int lenOfArray;
      scanf("%d",&lenOfArray);
      int arr[lenOfArray];
      int total=0;
      //loop caliye array er value nite hobe
      for(int i=0;i<lenOfArray;i++){
        scanf("%d",&arr[i]);
      }
      //loop caliye add and print korte hobe
      for(int i=lenOfArray-1;i>=0;i--){
        total=total+arr[i];
      }
     printf("%d",total);
    return 0;
}