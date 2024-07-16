#include <stdio.h>
#include <stdlib.h>

void findmaxmin(unsigned int ar[5], int n, unsigned int *maxsum,unsigned int *minsum) {
    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    // Calculate minimum sum (sum of the first four elements)
    *minsum = 0;
    for (int i = 0; i < n - 1; i++) {
        *minsum += ar[i];
    }

    // Calculate maximum sum (sum of the last four elements)
    *maxsum = 0;
    for (int i = 1; i < n; i++) {
        *maxsum += ar[i];
    }
}

int main() {
    unsigned int ar[5];
    unsigned int maxsum, minsum;

    // printf("Enter 5 integers: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%u", &ar[i]);
    }

    findmaxmin(ar, 5, &maxsum, &minsum);
    // Print the results
    printf("%u %u", minsum, maxsum);

    return 0;
}
