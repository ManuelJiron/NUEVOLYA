#define MAX_STR 60   // Maximo de string
#define MAX_REG 1000 // maximo de registro

typedef struct PERSON
{
    char cif[MAX_STR];
    char name[MAX_STR];
    char lastName[MAX_STR];
    int year;
};

PERSON people[MAX_REG];
int position = 0;