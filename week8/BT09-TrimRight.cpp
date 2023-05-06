#include <iostream>
using namespace std;

int _strlen(const char a[]){
    int n = 0;
    while (a[n] != '\0'){
        n += 1;
    }
    return n;
}

char *trim_right(const char a[]){
    char *s = new char;
    int n = _strlen(a);
    for (int i = 0; i < n; i++){
        s[i] = a[i];
    }
    s[n] = '\0';

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' '){
            s[i] = '\0';
            break;
        }
    }

    return s;
}

int main(){
    const char *ch = "abcdef    ";
    cout << _strlen(ch) << endl;
    cout << trim_right(ch) << endl;
    cout << _strlen(trim_right(ch));

    return 0;
}
