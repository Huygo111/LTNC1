#include <iostream>
using namespace std;

int main (){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N-1-i; j++){
            cout << " ";
        }
        cout << "*";
        for (int k = 0; k < i; k++){
            cout << "**";
        }
        for (int g = 0; g < N-1-i; g++){
            cout << " ";
        }
        cout << endl;


    }



    return 0;
}
