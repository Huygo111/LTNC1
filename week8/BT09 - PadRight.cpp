#include <iostream>
using namespace std;

int _strlen(const char a[]){
    int n = 0;
    while(true){
        if (a[n] != '\0'){
            n += 1;
        }
        else break;
    }
    return n;
}

char *pad_right(const char a[], int n){
    char *s = new char;
    int len = _strlen(a);

    int i = 0;
    while (i < len){
        s[i] = a[i];
        i++;
    }
    s[i + 1] = '\0';

    if (len >= n) return s;
    else {
        for (int j = len; j < n; j++){
            s[j] = '_';
        }
        s[n] = '\0';
        return s;
    }

}

int main (){
    const char *s = "abcdef";
    cout << s << endl;
    cout << pad_right(s, 10);

    return 0;
}
