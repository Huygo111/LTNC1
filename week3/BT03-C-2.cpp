#include <iostream>
#include <string>
using namespace std;

int main (){
    string s;
    cin >> s;
    int n;
    n=s.length();
    for (int i = 0; i < n/2; i++){
        if (s[i] == s[n-1-i]) continue;
        else{
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}

