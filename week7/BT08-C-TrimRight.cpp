#include <iostream>
using namespace std;

int _strlen(char a[]){
    int n = 0;
    while (a[n] != '\0'){
        n += 1;
    }
    return n;
}

void trim_right(char a[]){
    int n = _strlen(a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ' '){
            a[i] = '\0';
            break;
        }
    }
}

int main(){
    char *ch = new char [20];
    gets(ch);
    cout << ch << endl << _strlen(ch) << endl;
    trim_right(ch);
    cout << _strlen(ch) << endl << ch;

    return 0;
}
