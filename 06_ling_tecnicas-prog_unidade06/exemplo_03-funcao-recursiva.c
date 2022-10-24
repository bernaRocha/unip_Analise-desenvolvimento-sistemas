#include <stdio.h>

int multiplica(int x, int y) {
    if(y == 1) {
        return (x);
    }else {
        return(x + multiplica(x, y - 1));
    }
}

void main() {
    printf("\n %d X %d = %d", 2, 5, multiplica(2, 5));
    printf("\n\n");
}