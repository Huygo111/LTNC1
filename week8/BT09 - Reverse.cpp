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

char *reverse(const char a[]){
    int length_ = _strlen(a);
    cout << length_ << endl;
    char *s = new char ;
    int i = 0;
    while(i < length_){
        s[i] = a[i];
        i += 1;
    }
    s[i+1] = '\0';

    for (int i = 0; i < length_/2; i++){
        swap(s[i], s[length_ - 1 - i]);
    }

    return s;
}

int main(){
    char const *s = "abcdef123456";
    cout << reverse (s);

    return 0;
}
