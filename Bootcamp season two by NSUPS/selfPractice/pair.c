#include <stdio.h>

//function prototype
int read_location(double *x, double *y);

struct coordinates {
    double x;
    double y;
};


int main ()
{
    int choice;
    struct coordinates table[19];
    read_location;

    //loop menu as long as valid option is chosen
    do
    {
        printf("Please choose one of the following actions:\n");
        printf("1.) Quit\n");
        printf("2.) Sort by x:\n");
        printf("3.) Sort by y:\n");
        printf("4.) Sort by distance:\n");
        printf(":");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                return 0;
            case 2:
                //sort by x
                break;
            case 3:
                //sort by y
                break;
            case 4:
                //sort by distance between two points
                break;
            }
    } while (choice <=4);

    return 0;
}



int read_location(double *x, double *y)
{
    printf("Enter x:\n");
    scanf("%lf", &x);
    printf("Enter y:\n");
    scanf("%lf", &x);
}
