#include <iostream>

using namespace std;

bool check_num(int n1){
    int n3; n3 = n1;
    int n2 = 0;
    while(n1 != 0){
        int tmp;
        tmp = n1%10;
        n2 = n2*10 + tmp;
        n1 /= 10;
    }
    if (n3 == n2) return true;
    else return false;
}

int main(){
    int T;
    cin >> T;
    while (T > 0){
        int dem = 0;
        int A, B;
        cin >> A >> B;
        for (int i = A; i <= B; i++){
            if (check_num(i)) dem += 1;
            else continue;
        }
        cout << dem << endl;
        T -= 1;
    }





    return 0;
}
