#include <iostream>
using namespace std;

struct Point{
    double x;
    double y;
    Point(double _x, double _y){
        x = _x;
        y = _y;
    }

};

void print1(Point &a){
    cout << &a;
}

void print2(Point a){
    cout << &a;
}

int main(){
    Point a(3,5);
    print1(a);
    cout << endl;
    print2(a);
    return 0;
}
