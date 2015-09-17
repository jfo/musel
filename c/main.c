#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define RIFF     "RIFF"
#define WAVE     "WAVE"
#define FMT      "fmt "
#define DATA      "data"
#define SAMPLE_RATE     44100

#define PI 3.14159265

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

    int SampleRate = SAMPLE_RATE;
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
    int thing4 = 0xa0;
    fwrite(&thing4, 1, 1, fp);
    /* fwrite("size", 1, strlen("size"), fp); */
}

short signed int sine(int sample_num, double freq) {
    /* printf("sample_num: %i\nfreq: %f\n", sample_num, freq); */
    /* printf("sample_value: %f\n", (float)sin(1)); */

    /* printf("sizeof short signed int: %lu\n", sizeof(short signed int)); */
    /* printf("sizeof float: %lu\n", sizeof(float)); */
    /* printf("sizeof double: %lu\n", sizeof(double)); */

    /* printf("%04x\n", (short signed int)(sin(((sample_num * 2 * PI) / SAMPLE_RATE) * freq) * 32767)); */

    return (short signed int)(sin(((sample_num * 2 * PI) / SAMPLE_RATE) * freq) * 32767);
}

int main () {
    FILE *fp = fopen( "out.wav" , "wb" );
    write_header(fp);

    /* for (int i=1; i<10;i++) { */
    /*     sine(i, 440.0); */
    /* } */


    /* for (int i=1; i<100000;i++) { */
    /*     int derp = rand(); */
    /*     fwrite(&derp, 2, 1, fp); */
    /* } */

    for (int i=1; i<10000;i++) {
        signed short int derp = sine(i, 440.0);
        fwrite(&derp, 2, 1, fp);
    }
    for (int i=1; i<10000;i++) {
        signed short int derp = sine(i, 466.16);
        fwrite(&derp, 2, 1, fp);
    }
    fclose(fp);

    return(0);
}
