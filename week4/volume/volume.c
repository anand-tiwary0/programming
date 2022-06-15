// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "a");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    uint8_t *buffer = malloc(44* sizeof(uint8_t));
    int w=fread(buffer,sizeof(uint8_t),HEADER_SIZE,input);
    printf("%i\n",w);
    fwrite(buffer,sizeof(uint8_t),HEADER_SIZE,output);

    // TODO: Read samples from input file and write updated data to output file
    char ch;
    int t=0,q;
    while((ch=fgetc(input))!=EOF)
    {
        t++;
    }
    printf("%i\n",t);
    q=(t-14)/2;
    printf("%i\n",q);
    int16_t *sam =malloc(sizeof(int16_t)*q);
    fread(sam,sizeof(int16_t),q,input);
    for(int k =0, k<q, k++)
    {
        *(sam+k)=2*(*(sam+k));
    }
    fwrite(sam,sizeof(int16_t),q,output);

    // Close files
    fclose(input);
    fclose(output);
    free(sam);
    free(buffer);
}
