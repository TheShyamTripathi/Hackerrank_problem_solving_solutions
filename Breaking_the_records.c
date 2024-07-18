#include<stdio.h>

int main(){
    
    int i,n, a=0, b=0;
    
    scanf("%d",&n);
    int score[n];
    for(i=0; i<n; i++){
        scanf("%d",&score[i]);    
    }
    int min=score[0]; 
    int max=score[0]; 
    for(i=0; i<n;i++){
        if(min>score[i]){
            min = score[i];
            a++;
        }
        if(max<score[i]){
            max= score[i];
            b++;
        }
    }
    
    printf("%d %d",b ,a);
    
    return 0;
}
