#include<stdio.h>

int main(){
    
    int i,j,n;
    
    scanf("%d", &n);
    
    int ar[n];
    for(i=0; i<n;i++){
        scanf("%d",&ar[i]);
    }
    int z=0, temp, tempId=0;
    
     for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (ar[j] > ar[j + 1]) {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
       int temp_sum = 0;
    for (i = 0; i < n; ) {
        int count = 1;
        while (i + 1 < n && ar[i] == ar[i + 1]) {
            count++;
            i++;
        }
        temp_sum += count / 2;
        i++;
    }
    
    printf("%d",temp_sum);
    
}
