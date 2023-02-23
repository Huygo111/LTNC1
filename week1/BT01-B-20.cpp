#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    bool b = true;
    int x, y, z;
    cin >> x >> y >> z;
    if (x < y & y < z){
        b = true;
    }
    else if (z < y & y < z){
        b = true;
    }
    else b = false;
    cout << boolalpha << b;


    return 0;
}
