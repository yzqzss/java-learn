#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i = 8, j = 10, m, n;
    // origin
    // m = ++i + j++;
    // n = ++i + ++j + m;
    // modified
    m = i++ + j++;
    n = i++ + j++ + m;
    cout << i << " " << j << " " << m << " " << n << endl;
}
// output: 10 12 19 41
// output: 10 12 18 38