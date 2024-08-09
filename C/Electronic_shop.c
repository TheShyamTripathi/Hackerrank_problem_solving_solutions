#include<stdio.h>

int main(){
    int i,j,b,n,m;
    scanf(" %d %d %d\n", &b, &n ,&m);
    
    int keyboard[n], drives[m];
    
    for(i=0; i<n ; i++){
        scanf("%d", &keyboard[i]);
        
    }
    
    for(i=0; i<m ; i++){
        scanf("%d", &drives[i]);  
    }
    
        int max_count=-1;
    for(i=0;i<n;i++){
        for(j=0; j<m; j++){
            int cost = keyboard[i]+drives[j];
            if (cost<=b && cost> max_count){
                max_count = cost;
            }
                
            }
        }
    printf("%d", max_count);
    
    return 0;
}
