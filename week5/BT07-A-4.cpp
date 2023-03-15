#include <iostream>
using namespace std;

int BinarySearch(int *a, int *n, int *x){
    int left, right, mid;
    left = 0;
    right = *n - 1;
    do{
        mid = (left + right)/2;
        if (a[mid] == *x) return mid;
        else if (a[mid] < *x) left = mid + 1;
        else if (a[mid] > *x) right = mid - 1;
    } while (left <= right);

    return -1; // Khong tim thay x
}


int main (){
    int *a = new int[6]{1, 2, 3, 4, 5, 6};
//    cout << BinarySearch(a, 6, 4);
    int n = 6, x = 4;
    int *p1 = &n, *p2 = &x;
    cout << BinarySearch(a, p1, p2);

    return 0;
}
