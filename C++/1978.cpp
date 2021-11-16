#include <iostream>
#include <vector>
#include <array>
using namespace std;

bool GetPrime(int n)
{
    if (n == 2)
        return true;
    if (n <= 1)
        return false;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> prime;
    int T;
    int x;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> x;
        prime.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < prime.size(); i++)
    {
        if (prime[i] <= 1)
            continue;
        if (prime[i] == 2)
            cnt++;
        if (prime[i] % 2 == 0)
            continue;
        if (prime[i] % i == 0)
            c
    }
}