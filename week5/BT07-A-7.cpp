#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    char *str1 = new char;
    char *str2 = new char;

    cin >> str1 >> str2;
    cout << str1 << endl << str2 << endl;

    int result;
    result = strcmp(str1, str2);
    cout << result << endl;
    // < 0: s1 ngan hon s2
    // > 0: s1 dai hon s2
    // = 0: s1 = s2;
    if (result > 0)
    {
        cout << 0;
        return 0;
    }
    else if (result == 0)
    {
        int n = strlen(str1);
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            if (str1[i] == str2[i]) continue;
            else
            {
                cout << 0;
                return 0;
            }
        }
        cout << 1;
    }
    else if (result < 0)
    {
        int n = strlen(str1);
        int differ_length = strlen(str2) - strlen(str1);
        cout << n << endl << differ_length << endl;
        int dem = 0;
        for (int i = 0; i < differ_length + 1; i++){
            int kt = 0;
            for (int j = i; j < n + i; j++){
                if (str1[j-i] != str2[j]) break;
                else kt += 1;
            }
            if (kt == n) dem += 1;
        }
        cout << dem << endl;
    }

    return 0;
}
