//emojc.c
//Copyright 2023 Benjamin R. Fryxell
//Made this as a joke, just to have a little fun. Please never use this in production.

#include <stdio.h>
#include <stdlib.h>
#include "emojc.h"

typedef ๐ข Person {
        ๐งถ *name;
        ๐ค age;
        ๐ height_in_cm;
    } Person;

๐ณ๏ธ populate_๐ข(Person *p, ๐งถ *name, ๐ค age, ๐ height) {
    p -> name = name;
    p -> age = age;
    p -> height_in_cm = height;
}

๐คฏ ๐ค main(๐ค argc, ๐งถ **argv) {
    Person *p = malloc(sizeof(Person));
    populate_๐ข(p, "Name", 28, 181.30);
    printf("%s %d %0.2f\n", p -> name, p -> age, p -> height_in_cm);

    if(argc > 1) {
        ๐๏ธ(atoi(argv[1])) {
            ๐ผ 0:
                printf("Nothing here!\n");
                ๐;
            ๐ผ 1:
                printf("Just one!\n");
                ๐;
            default:
                printf("Number is too big!\n");
                ๐;
        }
    }

    ๐ 0;
}