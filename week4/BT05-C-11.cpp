#include <iostream>
using namespace std;

string _thap_phan_to_nhi_phan(int n){
    string s = "";
    int thuong;
    int du;
    while (true){
        du = n%2;
        if (du == 1) s ='1' + s;
        else if (du == 0) s = '0' + s;
        if (n/2 == 0) break;
        n /= 2;
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    cout << _thap_phan_to_nhi_phan(n);

    return 0;
}
