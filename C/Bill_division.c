#include<stdio.h>

int main(){
    int i,j, n,k,b;
    
    scanf("%d %d",&n, &k);
    
    int bill[n];
    
    for(i=0;i<n;i++){
        scanf("%d", &bill[i]);
       
        }
        
        scanf("%d",&b);
        
        int temp_total=0, temp_actual=0;
        for(i=0; i<n; i++){
            temp_total += bill[i];
        }
        
            temp_actual = temp_total- bill[k];
        temp_actual /= 2;
        
        if(temp_actual==b){
            printf("Bon Appetit");
            
        } 
        else{
            printf("%d",(b- temp_actual));
        }
    
        return 0;
        
}
