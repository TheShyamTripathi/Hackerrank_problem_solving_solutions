#include<stdio.h>

int main(){
    int i,n;
    
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++){
        
        scanf("%d", &ar[i]);
        
    }
    
    float a=0, b=0, c=0;
    for (i=0;i<n;i++){
        if(ar[i]>0){
        a++;}
        else if(ar[i]<0){
        b++; }
        
        else {        c++;
        }
    }
    
    printf("%f\n", a/n);
    printf("%f\n", b/n);
    printf("%f", c/n);    
    return 0;
}
