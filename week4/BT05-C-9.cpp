#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main (){
    int N;
    cin >> N;
    srand(time(0));
    cout << rand() % N  << " ";


    return 0;
}
