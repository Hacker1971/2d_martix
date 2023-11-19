#include <stdio.h>
#include<windows.h>

int febo(int n)
{
    int a = 0;
    int b = 1;
    int c;
    if (n == 0)
    {
        return a;
    }
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    system("color 0a");

    int n;
    printf("number:");

    scanf("%d", &n);
    printf("%d", febo(n));

    return 0;
}