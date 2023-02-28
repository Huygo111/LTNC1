#include <iostream>
#include <cmath>
using namespace std;

int main ( ){
	int N; cin >> N;
	int *height = new int [N*2];
	// i chẵn là chiều cao nam; i lẻ chiều cao nữ
	for (int i = 0; i < N*2; i++){
        cin >> height[i];
	}


	// Sắp xếp chiều cao nam
	for (int i = 0; i < N*2 - 1; i += 2){
        for (int j = i + 2; j < N*2 - 1; j += 2){
            if (height[i] > height[j]) swap(height[i], height[j]);
        }
	}
	// Sắp xếp chiều cao nữ
	for (int i = 1; i < N*2; i += 2){
        for (int j = i + 2; j < N*2; j += 2){
            if (height[i] > height[j]) swap(height[i], height[j]);
        }
	}

    // So sánh chiều cao nam và nữ
	for (int i = 0; i < N*2; i += 2){
        if(height[i] > height[i+1]){
            continue;
        }
        else {
            cout << "No";
            return 0;
        }
	}
	cout << "Yes";

	return 0;
}
