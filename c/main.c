#include <stdio.h>

#define RIFF     0x5249464600
#define WAVE     0x5741564500
#define FMT      0x666d742000

int header() {
    return RIFF;
}

int main() {

    long thing = header();

    printf("%d\n", header());
    printf("%x", header());
    printf("%s",  &thing);
    return 0;
}
