#include <stdio.h>

struct garage
{
    char *engine;
    char *type;
    char grade;
    int speed;
    float mileage;
};
void ftypedef();
void pointertostructure();
int main(int argc, char const *argv[])
{
    int car_count;

    printf("type the number of cars");
    scanf("%d", &car_count);

    struct garage car[car_count];
    for (int i = 0; i < car_count; i++)
    {
        gets(car[i].engine);
        gets(car[i].type);
        scanf("\n%c", &car[i+1].grade);
        scanf("\n%d", &car[i+1].speed);
        scanf("\n%f", &car[i+1].mileage);
    }
    for (int i = 0; i > car_count; i++)
    {
        puts(car[i].engine);
        puts(car[i].type);
        printf("\n%c", car[i+1].grade);
        printf("\n%d", car[i+1].speed);
        printf("\n%f", car[i+1].mileage);
    }
    return 0;
}

void ftypedef() {
    typedef struct motorbike
    {
        char *engine;
        char *type;
        char grade;
        int speed;
        float mileage;
    } bike;
    // bike =====> struct motorbike
    // typedef int integer; ===  int ===================> integer
    bike b1;
}

void pointertostructure() {
    typedef struct abc
    {
        int x;
        int y;
    } abc ;
    abc a = {0,1};
    abc *ptr = &a; // ptr is pointer to some variable of type struct abc
    printf("%d,%d,%d,%d", (*ptr).x,(*&a).x,ptr->x,ptr->y);
}