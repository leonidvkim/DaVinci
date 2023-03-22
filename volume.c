// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (input_file == NULL)
    {
        printf("Could not open file %s.\n", argv[1]);
        return 1;
    }

    FILE *output_file = fopen(argv[2], "w");
    if (output_file == NULL)
    {
        printf("Could not open file %s.\n", argv[2]);
        return 1;
    }

    float factor = atof(argv[3]);

    // Copy header from input file to output file
    uint8_t header[HEADER_SIZE];
    fread(header, HEADER_SIZE, 1, input_file);
    fwrite(header, HEADER_SIZE, 1, output_file);

    // Read samples from input file and write updated data to output file
    int16_t sample;
    while (fread(&sample, sizeof(sample), 1, input_file))
    {
        sample *= factor;
        fwrite(&sample, sizeof(sample), 1, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
