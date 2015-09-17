#include <stdio.h>
#include <math.h>

#define PI 3.14159265


float sine(int x) {
    return(sin(1/x * PI) );
}

int main() {
    for (int i = 0; i < 10000; i++) {
        /* printf("%i\n", i); */
        printf("%f\n", sine(i));
    }
    return 0;
}
