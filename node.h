

typedef enum garbageType {residualWaste, cardboardPaper, plasticMetal} garbageType;

typedef struct undergroundContainer {
    garbageType id;
    int literCapacity = 0;
    int maxLiters;
    //clogged 0 = not clogged. clogged 1 = clogged.
    int clogged = 0;
} undergroundContainer;