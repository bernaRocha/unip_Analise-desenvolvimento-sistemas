#include <stdio.h>
#include <string.h>

void main() {
    printf("%d \n", strcmp ("A", "A"));
    printf("%d \n", strcmp ("A", "B"));
    printf("%d \n", strcmp ("B", "A"));
    printf("%d \n", strcmp ("C", "A"));
}

// 0 
// -1 
// 1 
// 1 