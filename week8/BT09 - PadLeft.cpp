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

char *pad_left(const char a[], int n){
    char *s = new char;
    int len = _strlen(a);
    if (len >= n){
        int i = 0;
        while(i < len){
            s[i] = a[i];
            i += 1;
        }
        s[i+1] = '\0';
        return s;
    }

    else {

        for (int j = 0; j < n - len; j++){
            s[j] = '_';
        }
        s[n-len] = '\0';

        int i = n-len;
        while (i < len + (n-len)){
            s[i] = a[i - (n-len)];
            i++;
        }
        s[i] = '\0';

        return s;
    }
}

int main(){
    const char *s = "abcdef";
    cout << s << endl;
    cout << pad_left(s, 10);


    return 0;
}
