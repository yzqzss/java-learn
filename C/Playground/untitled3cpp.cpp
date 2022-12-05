#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main()
{
    
    int l, t, tl;
    double f, l1;
    scanf("%d%d", &l, &t);
    tl = t / 3;
    if (l <= 2)
    {
        l1 = 6;
    }
    else if (l > 2 && l <= 10)
    {
        l1 = 6 + (l - 2) * 1.8;
    }
    else if (l > 10)
    {
        l1 = 6 + 8 * 1.8 + (l - 10) * 2.7;
    }
    f = l1 + tl;
    printf("%.100lf\n", f);
    
    cout << fixed << setprecision(100) << f;
    
    return 0;
}
