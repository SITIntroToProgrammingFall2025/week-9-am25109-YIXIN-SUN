#include <stdio.h>
#include <math.h>

int main()
{
    int input[3];
    int basic[5][3] = {
        {0, 0, 0},
        {255, 0, 0},
        {0, 255, 0},
        {0, 0, 255},
        {255, 255, 255}
    };
    char names[5][10] = {
        "Black",
        "Red",
        "Green",
        "Blue",
        "White"
    };

    printf("Enter R,G,B\n");
    scanf("%d%d%d", &input[0], &input[1], &input[2]);

    double minDist = 1e12;
    int minIndex = 0;

    for(int i = 0; i < 5; i++)
    {
        double dr = input[0] - basic[i][0];
        double dg = input[1] - basic[i][1];
        double db = input[2] - basic[i][2];
        double dist = sqrt(dr*dr + dg*dg + db*db);

        if(dist < minDist)
        {
            minDist = dist;
            minIndex = i;
        }
    }

    printf("The nearest color is %s\n", names[minIndex]);

    return 0;
}


