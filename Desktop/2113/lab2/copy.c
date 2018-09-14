#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main (int argc, char **argv)
{
    char ch;
    int i=1;
    FILE *sourceFile;
    sourceFile = fopen(argv[1], "r");
    FILE *destFile;
    destFile = fopen(argv[2], "w");
    printf ("Copying from %s to %s ... \n", argv[1], argv[2]);
    ch = getc(sourceFile);
    while(ch != EOF)
    {
        putc(ch,destFile);
        ch = getc(sourceFile);
    }
    
    printf("...done\n");
}

