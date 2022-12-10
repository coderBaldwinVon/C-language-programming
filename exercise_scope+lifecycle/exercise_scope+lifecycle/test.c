#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int z = a / b;
    int y = a % b;
    printf("%d %d\n", z, y);
    return 0;
}

int main() 
{
    int M = 0;
    scanf("%d", &M);
    if (M % 5 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


int main() {

    int x = 0;
    int y = 0;
    scanf("%d", &x);
    if (x < 0)
    {
        y = 1;
    }
    if (x == 0)
    {
        y = 0;
    }
    if (x > 0)
    {
        y = -1;
    }
    printf("%d\n", y);

    return 0;

}