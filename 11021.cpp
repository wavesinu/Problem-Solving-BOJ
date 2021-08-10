#include <iostream>

using namespace std;
int main(){
    int a, b, cs;
    cin >> cs;
    for (int i = 0; i < cs; i++){
        cin >> a >> b;
        cout << "Case #" << i+1 << ": ";
        cout << a + b << endl;
    }
    return 0;
}