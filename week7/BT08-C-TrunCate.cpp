#include <iostream>

using namespace std;

int _strlen(char a[]){
    int n = 0;
    while (a[n] != '\0'){
        n += 1;
    }
    return n;
}


void truncate(char a[], int n){
    a[n] = '\0';
}

int main(){
    char *ch = new char[20];
    cin >> ch;
    cout << _strlen(ch);
    int n;
    cin >> n;
    truncate(ch, n);
    cout << _strlen(ch) << endl;
    cout << ch;


    return 0;
}
