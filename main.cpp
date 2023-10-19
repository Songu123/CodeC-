#include <iostream>
using namespace std;
bool soNguyenTo(int n, int i = 2){
    if (n <= 2)
        return (n == 2);
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    return soNguyenTo(n, i + 1);
}
int inSoNguyenTo(int n, int i = 2){
    if(i <= n){
        if(soNguyenTo(i)){
            cout << i << " ";
        }
        return inSoNguyenTo(n, i + 1);
    }

}
int main() {
    cout << "Nhập N: ";
    int n;
    cin >> n;
    cout << "Các số nguyên tố từ 2 đến " << n <<" là: ";
    inSoNguyenTo(n);
    return 0;
}
