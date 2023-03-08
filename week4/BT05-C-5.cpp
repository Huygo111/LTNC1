#include <iostream>
#include <cmath>
using namespace std;

bool prime_check(int a){
    for (int i = 2; i <= sqrt(a); i++){
        if (a%i == 0) return false;
    }

    return true;
}

int main(){
    int n;
    cin >> n;
    for (int i = 2; i < n; i++){
        if (prime_check(i) == true) cout << i << " ";
    }

    return 0;
}
