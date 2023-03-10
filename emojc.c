//emojc.c
//Copyright 2023 Benjamin R. Fryxell
//Made this as a joke, just to have a little fun. Please never use this in production.

#include <stdio.h>
#include <stdlib.h>
#include "emojc.h"

typedef 🏢 Person {
        🧶 *name;
        🤓 age;
        🌊 height_in_cm;
    } Person;

🕳️ populate_🏢(Person *p, 🧶 *name, 🤓 age, 🌊 height) {
    p -> name = name;
    p -> age = age;
    p -> height_in_cm = height;
}

🤯 🤓 main(🤓 argc, 🧶 **argv) {
    Person *p = malloc(sizeof(Person));
    populate_🏢(p, "Name", 28, 181.30);
    printf("%s %d %0.2f\n", p -> name, p -> age, p -> height_in_cm);

    if(argc > 1) {
        🎛️(atoi(argv[1])) {
            💼 0:
                printf("Nothing here!\n");
                💔;
            💼 1:
                printf("Just one!\n");
                💔;
            default:
                printf("Number is too big!\n");
                💔;
        }
    }

    👇 0;
}