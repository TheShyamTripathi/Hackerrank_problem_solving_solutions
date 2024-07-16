#include<stdio.h>

int main(){
    int n, i;
    
    // printf("please enter the size of array: ");
    scanf("%d",&n);
    
    int ar[n];
    //  printf("please enter the input for your array seprated by space: ");
        
    for(i=0; i<n;i++){
       scanf("%d", &ar[i]);
    }
    
    // printf("The sum of array elements are: ");
    
    int sum=0;
    
    for(i=0; i<n; i++){
        sum += ar[i];
    }
    printf("%d", sum);
    return 0;
}
