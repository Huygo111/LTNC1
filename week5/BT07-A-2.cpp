#include <iostream>
using namespace std;

int f(int a[]){
    int b ;
    b = sizeof(a);
    return b;
}

int main (){
    int A[80];
    cout << sizeof(A) << endl;
    cout << f(A);

    return 0;
}
