#include <stdio.h>
#include <stdlib.h>
#include "var.h"

#define SQR(x) ((x) * (x))                     
#define MAX(y, z) ((y) > (z) ? (y) : (z))       
#define MIN(y, z) ((y) < (z) ? (y) : (z))       
#define ABS(x) ((x) < 0 ? -(x) : (x))           
#define PRINTI(w) printf(#w " = %d\n", w)       
#define PRINTR(w) printf(#w " = %f\n", (float)w) 

int main() {
    int x, y, z;
    float w;

    puts("Input integer values for x, y, and z:");
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        puts("Error reading values. Please enter three integers.");
        return 1; 
    }

    if (1 <= z && z < 10) {
        int maxValue = MAX(x + y, x + z);
        w = (float)SQR(maxValue);
        PRINTR(w);
    }
    else {
        int xSquared = SQR(x);
        int absDiff = ABS(y - z) * 5;
        w = (float)MIN(xSquared, absDiff);
        PRINTR(w);
    }

    return 0;
}
