#include <stdio.h>
int main()
{
    // get value from user
    int a, b;
    scanf("%d %d\n", &a, &b);

    if (a % b == 0)
    {
        printf("Yes");
    }
    else if (b % a == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}