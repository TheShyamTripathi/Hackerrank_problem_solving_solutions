#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i,j;
    
    // printf("please enter the size of array: ");
    scanf("%d",&n);
    
    int ar[n][n];
    //  printf("please enter the input for your array seprated by space: ");
        
    for(i=0; i<n;i++){
        for(j=0; j<n; j++)
       scanf("%d", &ar[i][j]);
    }
    
    // printf("The sum of array elements are: ");
    
    int sumA=0, sumB=0 ;
    
    for(i=0;i<n; i++){
        sumA += ar[i][i];
    }
    
    for(i=0; i<n; i++){
        sumB += ar[i][n-i-1];
    }
    printf("%d", abs(sumA-sumB));

    return 0;
}
