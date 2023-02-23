#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    cout << (a + b + abs(a - b))/2;

    return 0;
}
