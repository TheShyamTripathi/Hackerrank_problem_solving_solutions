#include<stdio.h>

int main(){
    int n, i;
    
    // printf("please enter the size of array: ");
    scanf("%d",&n);
    
   long long int ar[n];
    //  printf("please enter the input for your array seprated by space: ");
        
    for(i=0; i<n;i++){
       scanf("%lld", &ar[i]);
    }
    
    // printf("The sum of array elements are: ");
    
    long long int sum=0;
    
    for(i=0; i<n; i++){
        sum += ar[i];
    }
    printf("%lld", sum);
    return 0;
}
