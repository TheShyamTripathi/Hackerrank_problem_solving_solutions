#include<stdio.h>

int main(){
    
    int i,steps;
  
  scanf("%d", &steps);
    char path[steps];

  for(i=0; i<steps; i++){
      scanf(" %c",&path[i]);
  }
  int valleycount=0, altitude=0;
  for(i=0;i<steps;i++){
      if(path[i]=='U'){
          altitude++;
      
      if(altitude==0){
          valleycount++;
      } }
      else if(path[i]=='D'){
          altitude--;
      }
      
      
  }
  
  printf("%d",valleycount);
  return 0;
}
