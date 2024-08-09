#include<stdio.h>

int main(){
    int i, A=0, B=0;

    
    int a[3], b[3];
    
        
    for(i=0; i<3;i++){
       scanf("%d", &a[i]);
    }
    
        for(i=0; i<3;i++){
       scanf("%d", &b[i]);
    }   
    for(i=0; i<3; i++){
        if(a[i]>b[i]){
        A++;
        }
        else if(b[i]>a[i]){
            B++;
        }
    }
    printf("%d %d", A, B);
    return 0;
}
