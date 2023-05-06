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

void delete_element(char a[], int stt, int n){
    for (int i = stt; i < n; i++){
        a[i] = a[i+1];
    }
    a[n - 1] = '\0';
}

char *delete_char(const char a[], char c){
    char *s = new char;
    int n = _strlen(a);
    int i = 0;
    while(i < n){
        s[i] = a[i];
        i++;
    }

    s[i+1] = '\0';
    for (int i = 0; i < n; i++){
        if (s[i] == c){
            delete_element(s, i, n);
            n -= 1;
            i -= 1;
        }
    }

    return s;
}

int main (){
    const char *s = "abcdaaabcdscdaac";
    cout << s << endl;
    cout << delete_char(s, 'a');

    return 0;
}
