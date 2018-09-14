#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int age;
    float weight;
    char name[100];
    
    printf("enter a name: ");
    scanf("%s", name);
    
    printf("Enter an age: ");
    scanf("%d", &age);
    
    printf("Enter a weight: ");
    scanf("%f", &weight);
    
    printf("the name you entered: %s\n", name);
    printf("the age you entered: %d\n", age);
    printf("the weight you entered: %f\n", weight);
}
