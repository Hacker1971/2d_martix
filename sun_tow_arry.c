#include <stdio.h>
#define COLS 3
#define ROWS 3
void read_mat(int mat[][COLS], int rows, int cols);
void print_mat(int mat[][COLS], int rows, int cols);
void add_mat(int a[][COLS], int b[][COLS], int c[][COLS], int rows, int cols);
int main()
{
    int a[ROWS][COLS], b[ROWS][COLS], c[ROWS][COLS];
    printf("enter a martix value:\n ");
    read_mat(a, ROWS, COLS);
    printf("enter b martix value:\n ");
    read_mat(b, ROWS, COLS);
    add_mat(a, b, c, ROWS, COLS);
    printf("Rezult of sum martix :\n");

    print_mat(c, ROWS, COLS);
    return 0;
}

void read_mat(int mat[][COLS], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void print_mat(int mat[][COLS], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
void add_mat(int a[][COLS], int b[][COLS], int c[][COLS], int rows, int cols)
{
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}