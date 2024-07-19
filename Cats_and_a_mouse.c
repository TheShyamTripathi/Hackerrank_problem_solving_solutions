#include <stdio.h>
#include <stdlib.h> // Include the standard library for the abs function

char* myfunction(int x, int y, int z) {
    int a = abs(x - z); 
    int b = abs(y - z); 
    
    if (a == b) {
        return "Mouse C";
    } else if (a > b) {
        return "Cat B";
    } else {
        return "Cat A";
    }
}

int main() {
    int i, q, x, y, z;
    scanf("%d", &q);
    for (i = 0; i < q; i++) {
        scanf("%d %d %d", &x, &y, &z);
        printf("%s\n", myfunction(x, y, z));
    }
    return 0;
}
