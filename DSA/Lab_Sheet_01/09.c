#include <stdio.h>

typedef struct person
{
    int age;
    float weight;
} Person;

int main()
{
    Person person1;
    Person *personPtr;

    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("\nDisplaying:\n");
    printf("Age    : %d\n", personPtr->age);
    printf("Weight : %.2f\n", personPtr->weight);

    return 0;
}
