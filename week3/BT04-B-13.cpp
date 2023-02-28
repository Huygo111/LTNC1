#include <iostream>
using namespace std;

int main (){
    int T; cin >> T;
    while(T>0){
        int n; cin >> n;
        int *a = new int [n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        for (int i = 0; i < n; i++){
            int tong1 = 0;
            for (int j = 0; j < i; j++){
                tong1 += a[j];
            }

            int tong2 = 0;
            for (int j = i+1; j < n; j++){
                tong2 += a[j];
            }

            if (tong1 == tong2){
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";

        delete[] a;
        T -= 1;
    }


    return 0;
}
