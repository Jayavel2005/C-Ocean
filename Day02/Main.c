#include <stdio.h>
#define siUnitOfFeet 0.3048

void main()
{
    // Feat to Metre
    // float feet, meters;
    // printf("Enter the Feet: ");
    // scanf("%f", &feet);
    // meters = siUnitOfFeet * feet;
    // printf("%.2f feet = %f meters", feet, meters);

    // unsigned int integer;
    // printf("Enter the Ineteger: ");
    // scanf("%d", &integer);
    // char character = integer; // This line implicity converts the integer to character
    // printf("%c", character);

    // for (char character = 'A'; character <= 'Z'; character++)
    // {
    //     printf("%c = %d\n", character, character);
    // }

    // bmi calculation
    // formula is w/m^2
    float weight , meter, bmi;
    printf("Enter the weight: ");
    scanf("%f", &weight);
    printf("Enter the meters: ");
    scanf("%f", &meter);
    meter = meter / 100;
    bmi = weight / (meter * meter);
    printf("%.2f", bmi);
    
}