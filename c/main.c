#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define RIFF     "RIFF"
#define WAVE     "WAVE"
#define FMT      "fmt "
#define DATA      "data"

void write_header(FILE* fp) {
    fwrite(RIFF, 1, strlen(RIFF), fp);

    int thingy = 0xae;
    fwrite(&thingy, 1, 1, fp);
    int thingy2 = 0x58;
    fwrite(&thingy2, 1, 1, fp);
    int thingy3 = 0x01;
    fwrite(&thingy3, 1, 1, fp);
    int thingy4 = 0x00;
    fwrite(&thingy4, 1, 1, fp);
    /* fwrite("size", 1, strlen("size"), fp); */

    fwrite(WAVE, 1, strlen(WAVE), fp);
    fwrite(FMT, 1, strlen(FMT), fp);

    int Subchunk1Size = 16;
    fwrite(&Subchunk1Size, 4, 1, fp);

    int AudioFormat = 1;
    fwrite(&AudioFormat, 2, 1, fp);

    int NumChannels = 1;
    fwrite(&NumChannels, 2, 1, fp);

    int SampleRate = 44100;
    fwrite(&SampleRate, 4, 1, fp);

    int ByteRate = 88200;
    fwrite(&ByteRate, 4, 1, fp);

    int BlockAlign = 2;
    fwrite(&BlockAlign, 2, 1, fp);

    int BitsPerSample = 16;
    fwrite(&BitsPerSample, 2, 1, fp);

    fwrite(DATA, 1, strlen(DATA), fp);

    int thing = 0x8a;
    fwrite(&thing, 1, 1, fp);
    int thing2 = 0x58;
    fwrite(&thing2, 1, 1, fp);
    int thing3 = 0x01;
    fwrite(&thing3, 1, 1, fp);
    int thing4 = 0x00;
    fwrite(&thing4, 1, 1, fp);
    /* fwrite("size", 1, strlen("size"), fp); */
}

int main () {
    FILE *fp = fopen( "out.wav" , "wb" );
    write_header(fp);

    for (int i=1; i<100000;i++) {
        int derp = rand();
        fwrite(&derp, 2, 1, fp);
    }

    fclose(fp);

    return(0);
}
