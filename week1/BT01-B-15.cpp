#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;


int main(){
    string f0 = "a"; cout << f0 << endl;
    string f1 = "b"; cout << f1 << endl;
    string f = "";
    f = f1 + f0;
    cout << f << endl;
    for (int i = 4; i <= 10; i++){
        f0 = f1;
        f1 = f;
        f = f1 + f0;
        cout << f << endl;
    }



    return 0;
}
