#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y && y == z) cout << true;
    else cout << "false";
	return 0;
}
