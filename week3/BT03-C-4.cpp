#include <iostream>

using namespace std;

char int_to_char(int a){
    if (a == 0) return '0';
    else if (a == 1) return '1';
    else if (a == 2) return '2';
    else if (a == 3) return '3';
    else if (a == 4) return '4';
    else if (a == 5) return '5';
    else if (a == 6) return '6';
    else if (a == 7) return '7';
    else if (a == 8) return '8';
    else if (a == 9) return '9';
}

int main (){

    int m, n;
    cin >> m >> n;
    char s[10][10];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> s[i][j];
        }
    }
    cout << s[10][10];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (s[i][j] == '*') continue;
            int dem = 0;
            if (s[i-1][j-1] == '*') dem += 1;
            if (s[i][j-1] == '*') dem += 1;
            if (s[i+1][j-1] == '*') dem += 1;
            if (s[i-1][j] == '*') dem += 1;
            if (s[i+1][j] == '*') dem += 1;
            if (s[i-1][j+1] == '*') dem += 1;
            if (s[i][j+1] == '*') dem += 1;
            if (s[i+1][j+1] == '*') dem += 1;
            s[i][j] = int_to_char(dem);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << s[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}
