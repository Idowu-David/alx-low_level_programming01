#include "main.h"

int **alloc_grid(int width, int height)
{
    int **array, index, i;


    for (index = 0; index < height; index++)
    {
        array[index] = malloc(sizeof(int *) * width);
        for (i = 0; i < width; i++)
        {
            //array[index][i] = malloc(sizeof(int));
            array[index][i] = 0;
        }
    }
    return (array);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}