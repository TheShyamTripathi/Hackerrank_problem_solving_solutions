#include<stdio.h>

int main(){
    int i, n;
    
    scanf("%d", &n);
    int grades[n];
    for(i=0; i<n; i++){
        scanf("%d",&grades[i]);
    }
    
    for(i=0; i<n; i++){
        
        if(grades[i]>=38){
        if(grades[i]%5==0){
            printf("%d\n", grades[i]);
        } else if((grades[i]+1)%5==0){
            printf("%d\n",grades[i]+1);
        }
        else if((grades[i]+2)%5==0){
            printf("%d\n",grades[i]+2);
        } else
        printf("%d\n",grades[i]);
        
        }else
        printf("%d\n",grades[i]);
    }
    
    return 0;
}
