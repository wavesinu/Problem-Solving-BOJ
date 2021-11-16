#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;

    for (int i = 0; i < count; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int k = count - i; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}