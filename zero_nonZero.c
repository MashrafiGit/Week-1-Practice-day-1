#include <stdio.h>
int main()
{
    // get value from user
    int num;
    scanf("%d\n", &num);

    // check zero or non and print
    if (num == 0)
    {
        printf("Zero");
    }
    else
    {
        printf("Non Zero");
    }

    return 0;
}