#include<stdio.h>

void findmaxheight(int ar[],int n, int *max_heightcount){
    
    int max_value= ar[0];
    for(int i=0; i<n; i++){
        if(ar[i]>max_value){
            max_value=ar[i];
        }
        
    }
    
    *max_heightcount=0;
    // int max_value = ar[n-1];
    for(int i=0; i<n; i++){
        if(ar[i]==max_value){
            (*max_heightcount)++;
        }
    }
}

int main(){
    
    int i,n;
    int max_heightcount;
    
    scanf("%d", &n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    
    findmaxheight(ar, n, &max_heightcount);
    printf("%d", max_heightcount);
    
    return 0;
}
