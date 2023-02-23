#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sqrt(1.0*(x1-x2)*(x1-x2) + 1.0*(y1-y2)*(y1-y2));
	return 0;
}
