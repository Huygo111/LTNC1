#include <iostream>
using namespace std;

int UCLN(int a, int b){
    int x, y;
    if (a > b){
        x = a;
        y = b;
    }
    else {
        x = b;
        y = a;
    }

    while (y != 0){
        int r;
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
    int a, b;
    cin >> a >> b;
    if (UCLN(a, b) == 1) cout << "Yes";
    else cout << "No";

    return 0;
}
