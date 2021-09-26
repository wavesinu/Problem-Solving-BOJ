#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;

    for (int i = 0; i < count; i++){
        for (int j = 1; j < count - i; j++){
            cout << " ";
        }
        for (int j = 0; j < 2 * (i+1)-1; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
