#include <stdio.h>
#include <math.h>

#define PI 3.14159265


short sine(int x) {
    double ret, val;
    val = PI / 180;
    ret = sin(x*val);
    printf("The sine of %i is %lf degrees", x, ret);

    return(0);
}

int main() {
    for (int i = 1; i < 44101; i++) {
        /* printf("%i\n", i); */
        sine(i);
        printf("\n");
        sleep(1);
    }
    return 0;
}
