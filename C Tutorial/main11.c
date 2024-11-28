#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;
    while(i <= 5) {
        printf("%d\n",i);
        i++;
    }

    int j = 1;
    for (j=1; j<=5; j++) {
        printf("%d\n",j);
    }
    return 0;
}
