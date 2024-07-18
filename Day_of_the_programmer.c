#include<stdio.h>

int main(){
    
    int y;
    
    scanf("%d",&y);
    
    if (y>1918){
        
        if(y%4==0 && y%100!=0 || y%400==0){
            printf("12.09.%d",y);
        }
        
        else{
            printf("13.09.%4d",y);
        }
    }
    
        if (y<1918){
        
        if(y%4==0){
            printf("12.09.%d",y);
        }
        
        else{
            printf("13.09.%4d",y);
        }
    }
    
    
    if (y== 1918){
        int total_day_count = 256;
        int rem_day= 256- 13;
        printf("26.09.%4d",y);
    }
    
    return 0;
    
}
