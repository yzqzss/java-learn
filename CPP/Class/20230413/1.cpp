#include <stdio.h>
int q(int x)
{
    int y = 1;
    static int z = 1;
    z += z + y++;
    return x + z;
}

int main()
{
    printf("%d\n", q(1));
    printf("%d\n", q(2));
    printf("%d\n", q(3));
}