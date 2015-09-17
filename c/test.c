#include <stdio.h>

int main () {
    int thing[] = {72,101,60,'\0'};
    printf("%s", (char*) &thing);
}

