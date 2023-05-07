#include <iostream>
#include <cstring>
using namespace std;

struct String {
    int n;
    char *str;

    String (const char *_str){
        n = strlen(_str);
        str = new char [n];
        for (int i = 0; i < n; i++){
            str[i] = _str[i];
        }
        str[n] = '\0';

    }

    void append(const char *_str){
        int length = strlen(_str);
        cout << length << endl;
        for (int i = 0; i < length; i++){
            str[n + i] = _str[i];
        }
        str[n + length] = '\0';

    }

    ~String (){
        delete []str;
    }

    void print() const {
        cout << str << endl;
    }
};

int main(){
    String str = ("abcde12345");
    str.print();
    String greeting ("Hi");
    greeting.append (" there");
    greeting.print();

    return 0;
}
