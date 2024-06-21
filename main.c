#include <stdio.h>

typedef struct Person {
    char name[40];
    int age;
}Person;

int main(){

    Person persona;
    Person *personptr = &persona;

    personptr->age = 10;
    sprintf(personptr->name, "Zenin");

    printf("Name: %s\n", personptr->name);
    printf("Age: %d\n", personptr->age);


    return 0;  
}
