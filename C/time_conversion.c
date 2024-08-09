#include<stdio.h>
#include<string.h>

int main(){
    
    char time_str[11];
    char ampm[3];
    int hours, min, sec;
    
    scanf("%10s",time_str);
    
    sscanf(time_str, "%d:%d:%d%2s",&hours, &min, &sec,&ampm);
    
    if(strcmp(ampm,"AM")==0){
        if (hours==12){
            hours=0;
        }
        printf("%02d:%02d:%02d",hours,min, sec);
    }
    else if(strcmp(ampm, "PM")==0){
        if(hours!=12){
       hours += 12;
    }
    printf("%02d:%02d:%02d",hours,min, sec);
    }
    return 0;
}
