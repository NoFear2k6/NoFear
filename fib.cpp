#include <iostream>
using namespace std;
int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main() {
    int n;
    cout << "Nhap vao so n : ";
    cin >> n;   
    if (n <= 0 || n > 30) {
        cout << "Gia tri n khong hop le" << endl;
        return 1;
    }
     {
    cout << "Day tu F(1) den F(" << n << "): ";
    for (int i = 1; i <= n; ++i) {
        cout << fib(i) << " ";
    }
    cout << endl;  
    return 0;
}
}

