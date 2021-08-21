#include <iostream>
using namespace std;

int main()
{
    int cs;
    cin >> cs;

    int n1, n2;
    for (int i = 0; i < cs; i++){
        cin >> n1 >> n2;
        for (int j = 0; j < cs; j++){
            cout << "Case #" << j+1 << ": " << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        }
    }
    return 0;
}