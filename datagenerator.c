#include <stdlib.h>
#include <stdio.h>

typedef enum garbageType {residualWaste, cardboardPaper, plasticMetal} garbageType;

typedef struct data {
    garbageType id;
    int literCapacity;
    int maxLiters;
    /* prop 0 = ingen prop. prop 1 = prop. */
    int prop; 
} data;

data generateData(void);

int main(void) {


    return EXIT_SUCCESS;
}

data generateData(void) {
     
}
