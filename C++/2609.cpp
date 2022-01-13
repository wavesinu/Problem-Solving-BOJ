#include <iostream>
using namespace std;

int getGCD(int n1, int n2)
{
    int tmp, N;

    if (n1 < n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }

    while (n2 != 0)
    {
        N = n1 % n2;
        n1 = n2;
        n2 = N;
    }
    return n1;
}

int main()
{
    int a, b;
    cin >> a >> b;
}
