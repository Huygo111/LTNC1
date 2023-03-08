#include <iostream>
#include <ctime>

using namespace std;

void printf_map (char a[10][10], int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

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

void create_game_map(char a[10][10], int m, int n, int k){

    // Sinh map
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = '.';
        }
    }

    // Sinh ngau nhien bom
    for (int i = 0; i < k; i++){
        a[rand() % m][rand() % n] = '*';
    }
//    printf_map(a, m, n);

    // Chuyen cac diem ko phai bom thanh so bom xunh quanh
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == '*') continue;
            int dem = 0;
            if (a[i-1][j-1] == '*') dem += 1;
            if (a[i][j-1] == '*') dem += 1;
            if (a[i+1][j-1] == '*') dem += 1;
            if (a[i-1][j] == '*') dem += 1;
            if (a[i+1][j] == '*') dem += 1;
            if (a[i-1][j+1] == '*') dem += 1;
            if (a[i][j+1] == '*') dem += 1;
            if (a[i+1][j+1] == '*') dem += 1;
            a[i][j] = int_to_char(dem);
        }
    }
//    printf_map(a, m, n);
}

void trang_thai_game(char a[10][10], char b[10][10], int x, int y, int m, int n){
    b[y - 1][x - 1] = a[y - 1][x - 1];
    printf_map(b, m, n);
}

int main(){
    cout << "Nhap kich thuoc map va so luong bom; m, n, k < 10" << endl;
    srand(time(0));
    // Nhap kich thuoc map va so luong bom, m, n, k < 10
    int m, n, k;
    cin >> m >> n >> k;
    char a[10][10];
    create_game_map(a, m, n, k);

    // Sinh mang cho trang thai game
    char b[10][10];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n ; j++){
            b[i][j] = 'o';
        }
    }

    int num_of_guesses = 0;
    while (true){
        if (num_of_guesses == m*n-k){
            cout << "You are win !" << endl;
            break;
        }

        // Nhap toa do x, y;
        int x, y;
        cin >> x >> y;
        if (a[y - 1][x - 1] == '*'){
            cout << "You are dead !" << endl;
            printf_map(a, m, n);
            break;
        }
        else if (a[y - 1][x - 1] != '*'){
            trang_thai_game(a, b, x, y, m, n);
        }
        num_of_guesses += 1;
    }


    return 0;
}
