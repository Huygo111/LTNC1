#include <iostream>
using namespace std;

void draw(int M, int N){
    for (int i = 0; i < M; i++){
        cout << " ";
    }

    for (int i = 0; i < N; i++){
        cout << "*";
    }

}

int main(){

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        draw(n-1-i,1+2*i);
        cout << endl;
    }


    return 0;
}
