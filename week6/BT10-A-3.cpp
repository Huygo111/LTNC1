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

    Point mid_point(Point b){
        Point mid(0,0);
        mid.x = (x + b.x)/2;
        mid.y = (y + b.y)/2;
        return mid;
    }

};

Point mid_point(const Point a, const Point b){
        Point mid(0,0);
        mid.x = (a.x + b.x)/2;
        mid.y = (a.y + b.y)/2;
        return mid;
}

int main(){
    Point a(4, 4);
    Point b(6, 8);
    cout << mid_point(a,b).x << " " << mid_point(a,b).y << endl;
    cout << a.mid_point(b).x << " " << a.mid_point(b).y;
    return 0;
}
