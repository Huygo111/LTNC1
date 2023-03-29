#include <iostream>
using namespace std;

int _strlen(char a[]){
    int n = 0;
    while(true){
        if (a[n] != '\0'){
            n += 1;
        }
        else break;
    }
    return n;
}

void pad_right(char a[], int n){
    int m = _strlen(a);
    for (int i = m ; i < n ; i++){
        a[i] = '_';
    }
    a[n] = '\0';
}


int main(){
    char *ch = new char [10];
    cin >> ch;
    cout << _strlen(ch) << endl;
    int n;
    cin >> n;
    pad_right(ch,n);
    cout << ch;

    return 0;
}
