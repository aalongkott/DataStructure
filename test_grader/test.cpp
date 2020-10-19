#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        if (a == b)
        {
            cout << "a and b are the same node"
                 << "\n";
        }
        else if (a < b)
        {

            while (a < b)
            {
                b = (b - 1) / 2;
            }
            if (a == b)
            {
                cout << "a is an ancestor of b"
                     << "\n";
            }
            else
            {
                cout << "a and b are not related"
                     << "\n";
            }
        }
        else
        {
            while (a > b)
            {
                a = (a - 1) / 2;
            }
            if (a == b)
            {
                cout << "b is an ancestor of a"
                     << "\n";
            }
            else
            {
                cout << "a and b are not related"
                     << "\n";
            }
        }
    }
}