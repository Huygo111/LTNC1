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

void _print(Point a){
    cout << "(" << a.x << "," << a.y << ")";
}

int main(){
    Point a(3.5, 4);
    a.print();
    cout << endl;
    _print(a);
    return 0;
}
