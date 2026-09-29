//program to test what can be left blank in definition of multidimensional arrays
#include <stdio.h>

int main() {
    // Example 1: Left blank in first dimension
    int arr1[][3] = {{1, 2, 3}, {4, 5, 6}};
    
    // Example 2: Left blank in second dimension
    int arr2[2][] = {{1, 2, 3}, {4, 5, 6}};
    
    // Example 3: Left blank in both dimensions
    int arr3[][3] = {{1, 2, 3}, {4, 5, 6}};

    // Exampple 4: First two left blank, last dimension specified
    int arr4[][][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    // Example 5: Last left blank, first two specified
    int arr5[2][2][] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    
    return 0;
}

//as per outputs, only the first dimension can be left blank, the rest must be specified.