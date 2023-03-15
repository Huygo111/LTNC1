#include <iostream>
using namespace std;

count_even(int* a, int n){
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0) dem += 1;
    }

    return dem;
}

int main(){
    int n = 8;
    int *p = new int [8]{1, 2, 3, 4, 7, 11, 14, 16};
    cout << count_even(p, n);

    delete[] p;
    return 0;
}
