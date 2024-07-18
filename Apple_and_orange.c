#include<stdio.h>

int main(){
    
    int s,t,a,b,m,n,i;
        // INPUT FOR SAM'S HOUSE LOCATION
        scanf("%d %d", &s, &t);
        // iput for apple and orange location
        scanf("%d %d",&a, &b);
        // input for number of apple;
        scanf("%d %d", &m, &n);
        
        int apple[m], orange[n];
        
        for(i=0; i<m; i++){
            scanf("%d",&apple[i]);
        }
        
        for(i=0; i<n; i++){
            scanf("%d",&orange[i]);
        }
        int app=0, or=0;
        for(i=0;i<m;i++){
            if((a+apple[i])>=s &&(a+apple[i])<=t ){
                app++;
            }
        } 
        
        for(i=0;i<n;i++){
            if((b+orange[i])>=s && (b+orange[i])<=t ){
                or++;
            }
        }
        
        printf("%d\n",app);
        printf("%d",or);
}
