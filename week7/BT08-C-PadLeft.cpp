#include <iostream>

using namespace std;

int _strlen(char a[]){
    int n = 0;
    while (a[n] != '\0'){
        n += 1;
    }
    return n;
}

void pad_left(char a[], int n){
    int m = _strlen(a);
    for (int i = 0; i < m; i++){
        a[n-m+i] = a[i];
    }
    for (int i = 0; i < n-m; i++){
        a[i] = '_';
    }
    a[n] = '\0';
}

int main(){
    char *ch = new char[20];
    cin >> ch;
    cout << _strlen(ch);
    int n;
    cin >> n;
    pad_left(ch, n);
    cout << _strlen(ch) << endl;
    cout << ch;


    return 0;
}
