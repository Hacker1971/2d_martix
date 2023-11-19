#include <stdio.h>
#include <windows.h>
#define ROWS 3
#define COLS 3
void read_mat(int mat[ROWS][COLS], int rows, int cols);
void print_mat(int mat[ROWS][COLS], int rows, int cols);
void miltipal_mat(int a[][COLS], int b[][COLS], int c[][COLS], int rows, int cols);
int main()
{
    system("color 0b");
    int a[ROWS][COLS];
    int b[ROWS][COLS];
    int c[ROWS][COLS];
    printf("Enter the 1st martix : \n");
    read_mat(a, ROWS, COLS);
    printf("Enter the 2nd martix : \n");
    read_mat(b, ROWS, COLS);
    printf("Rezult of martix : \n");
    miltipal_mat(a, b, c, ROWS, COLS);

    return 0;
}

void read_mat(int mat[ROWS][COLS], int rows, int cols)
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
void print_mat(int mat[ROWS][COLS], int rows, int cols)
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
void miltipal_mat(int a[][COLS], int b[][COLS], int c[][COLS], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    print_mat(c, rows, cols);
}