#include <iostream>
using namespace std;

struct Point{
    double x;
    double y;
    Point(double _x, double _y){
        x = _x;
        y = _y;
    }
    void print(){
        cout << "(" << x << "," << y << ")";
    }

};

int main(){
    Point a(3, 8);
    cout << &a.x << " " << &a.y << endl;
    cout << &a;

    return 0;
}
