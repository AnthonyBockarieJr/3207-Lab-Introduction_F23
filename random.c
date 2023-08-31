// random.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character between 'A' and 'Z'
char randchar() {
    return 'A' + rand() % 26;
}
