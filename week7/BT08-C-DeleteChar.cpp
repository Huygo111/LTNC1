#include <iostream>
using namespace std;

int _strlen(char a[]){
    int n = 0;
    while(true){
        if (a[n] != '\0'){
            n += 1;
        }
        else break;
    }
    return n;
}

void delete_char(char a[], char c)
{
    int n = _strlen(a);
    cout << n << endl;
    for (int i = 0; i < n; i++){
        if (a[i] == c){
            n -= 1;
            for (int j = i; j < n; j++){
                a[j] = a[j+1];
            }
            a[n] = '\0';
            i -= 1;
        }
    }
}

int main(){
    char *ch = new char [20];
    cin >> ch;
    cout << ch;
    cout << endl << _strlen(ch);

    char c;
    cin >> c;
    delete_char(ch, c);
    cout << ch;

    return 0;
}
