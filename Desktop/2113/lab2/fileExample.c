#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    
    int age;
    float weight;
    char name[100];
    char cont='y';
    FILE *dataFile;
    dataFile = fopen("patients.txt", "w");
    while(cont != 'n')
    {
        printf("Enter a name, age, and weight: ");
        scanf("%s %d %f", name, &age, &weight);
        fprintf (dataFile, "name = %s\n age = %d\n weight = %f\n", name, age, weight);
        printf("Do you want to continue entering data? y or n");
        scanf(" %c", &cont);
    }
    
    printf("end of program\n");
    fclose(dataFile);
}
