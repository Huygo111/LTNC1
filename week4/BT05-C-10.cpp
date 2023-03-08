#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main (){
    int N;
    cin >> N;
    srand(time(0));

    int *a = new int [N];
    for (int i = 0; i < N; i++){
        a[i] = rand() % 50;
    }

    for (int i = 0; i < N; i++){
        cout << a[i] << " ";
    }

    for (int i = 0; i < N - 2; i++){
        for (int j = i + 1; j < N - 1; j++){
            for (int k = j + 1; k < N; k++){
                if( (a[i]+a[j]+a[k]) % 25 == 0){
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }


    return 0;
}

