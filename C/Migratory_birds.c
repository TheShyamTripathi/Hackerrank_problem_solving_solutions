#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    int maxcount = 0;
    int itemID = 0;

    // Read the number of elements in the array
    scanf("%d", &n);
    int arr[n];

    // Read the elements into the array
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Allocate memory for the frequency array
    // Assuming the elements are non-negative and within a reasonable range
    // You can adjust the size of the hash table according to the input constraints
    int max_val = 100000; // Example: Adjust according to the expected range of array elements
    int *freq = (int *)calloc(max_val + 1, sizeof(int));

    // Count the frequency of each element
    for(i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    // Find the element with the maximum frequency
    for(i = 0; i < n; i++){
        if(freq[arr[i]] > maxcount){
            maxcount = freq[arr[i]];
            itemID = arr[i];
        }
        else if(freq[arr[i]] == maxcount && arr[i] < itemID){
            itemID = arr[i];
        }
    }


    printf("%d", itemID);

    // Free the allocated memory
    free(freq);

    return 0;
}
