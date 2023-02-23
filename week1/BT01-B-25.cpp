#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int a[5];
    for (int i = 0; i < 5; i++){
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }

    cout << a[2];

    return 0;
}
