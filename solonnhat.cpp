#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> n;
int arr[n];
    cout << "Nhap vao cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max = 0;
    for (int i = 0; i < n; ++i) {
    	if (arr[i] % 3 ==0)
    	cout<< arr[i]<<" ";
    }
}
 
