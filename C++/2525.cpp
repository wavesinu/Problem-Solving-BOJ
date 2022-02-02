#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;

    int CT;
    cin >> CT;

    H += CT / 60;
    M += CT % 60;

    if (M >= 60)
    {
        H++;
        M -= 60;
    }
    if (H >= 24)
        H -= 24;

    printf("%d %d\n", H, M);
}