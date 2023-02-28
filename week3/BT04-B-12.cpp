/** Eratosthen
*/

#include <iostream>
#include <cmath>
using namespace std;

int main ( ){
	int N;
	cin >> N;
	bool *a = new bool [N+1];

	// Coi tất cả các số từ 0 đến N là số nguyên tố
	for (int i=0; i<=N; i++){
		a[i] = true;
	}

	// Loại 0 và 1
	a[0] = false;
	a[1] = false;
	for (int i=2; i<= sqrt(N); i++){
        // Nếu i là số nguyên tố
		if (a[i]){
		    // Duyệt tất cả các bội số của i và cho nó không còn là số nguyên tố
			for (int j= i*i; j <= N ; j += i){
				a[j]= false;
			}
		}
	}

	for (int i=0; i<=N; i++){
		if (a[i] == true) cout << i << " ";
	}
	return 0;
}
