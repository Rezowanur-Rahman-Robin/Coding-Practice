#include <iostream>

using namespace std;

int GCD(int m, int n)
{
    int r;
    while ((r = m % n) != 0)
    {
        m = n;
        n = r;
    }
    return n;
}

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    while (true)
    {
        n -= GCD(a, n);
        if (n == 0)
        {
            cout << 0 << endl;
            break;
        }
        n -= GCD(b, n);
        if (n == 0)
        {
            cout << 1 << endl;
            break;
        }
    }
    return 0;
}
