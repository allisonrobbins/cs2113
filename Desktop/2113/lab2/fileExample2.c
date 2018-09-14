#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_CHARS_PER_LINE 100

int main ()
{
    int lineNumber;
    char inputLine [MAX_CHARS_PER_LINE + 1];
    char ch;
    int cursorPosition;
    FILE *dataFile;
    
    dataFile = fopen ("fileExample.c", "r");
    lineNumber = 0;
    cursorPosition = 0;
    
    ch = fgetc (dataFile);
    
    while (ch != EOF) {
        
        if (ch != '\n') {
            
            if (cursorPosition >= MAX_CHARS_PER_LINE) {
                printf ("Input line size exceeded - exiting program\n");
                exit (0);
            }
            inputLine[cursorPosition] = ch;
            cursorPosition ++;
            
        }
        else {
            
            inputLine[cursorPosition] = '\0';
            
            lineNumber ++;
            printf ("Line %4d: %s\n", lineNumber, inputLine);
            
            cursorPosition = 0;
            
        }
        
        ch = fgetc (dataFile);
        
    }
    fclose (dataFile);
    
}
