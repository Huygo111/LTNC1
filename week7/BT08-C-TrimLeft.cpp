#include <iostream>
using namespace std;

int _strlen(char a[]){
    int n = 0;
    while (a[n] != '\0'){
        n += 1;
    }
    return n;
}

void trim_left(char a[]){
    int dem = 0;
    int n = _strlen(a);
    for (int i = 0; i < n; i++){
        if (a[i] == ' ') dem += 1;
        else break;
    }

    for (int i = 0; i < n - dem; i++){
        a[i] = a[dem + i];
    }
    a[n - dem] = '\0';
}

int main(){
    char *ch = new char [20];
    gets(ch);
    cout << _strlen(ch) << endl << ch << endl;
    trim_left(ch);
    cout << ch;
    return 0;
}

