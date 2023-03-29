#include <iostream>
#include <cstring>
using namespace std;

int _strlen(char a[]){
    int n = 0;
    while (a[n] != '\0'){
        n++;
    }
    return n;
}

void _reverse(char a[]){
    int n = strlen(a);
    for (int i = 0; i < n/2; i++){
        swap(a[i],a[n-1-i]);
    }
}

int main(){
    char *a = new char[15];
    cin >> a;
    int n = _strlen(a);
    cout << n << endl;

    int m = strlen(a);
    cout << m << endl;
    _reverse(a);
    cout << a;


    return 0;
}
