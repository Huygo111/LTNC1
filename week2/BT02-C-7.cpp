#include <iostream>

using namespace std;

int main (){
    int a, b;
    while (true){
        cin >> a;
        if (a < 0) {
            cout << a;
            break;
        }
        if (a != b){
            cout << a;
        }
        b = a;
    }

    return 0;
}
