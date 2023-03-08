#include <iostream>
#include <cmath>
using namespace std;

int _round1(double n){
    int tmp = n;
    if (n - tmp >= 0.5) return ceil(n);
    else return floor(n);
}

int _round2(double n){
    int tmp = n;
    if (n - tmp >= 0.5) return tmp + 1;
    else return tmp;
}

int main(){
    double n;
    cin >> n;
    cout << _round1(n) << endl
         << _round2(n);
    return 0;
}
