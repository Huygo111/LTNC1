#include <iostream>

using namespace std;

int _strlen(char a[]){
    int n = 0;
    while (a[n] != '\0'){
        n += 1;
    }
    return n;
}

bool is_palindrome(char a[]){
    int n = _strlen(a);
    for (int i = 0; i < n; i++){
        if(a[i] != a[n-i-1]) return false;
    }
    return true;
}

int main(){
    char *ch = new char[20];
    cin >> ch;
    cout << _strlen(ch);
    cout << boolalpha << is_palindrome(ch);


    return 0;
}
