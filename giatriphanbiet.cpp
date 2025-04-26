#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> n;
    if (n < 0) {
        cout << "Khong hop le" << endl;
        return 1;
    }
    set<int> giatri;
    int so;
    cout << "Nhap cac phan tu: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> so;
       giatri.insert(so);
    }
    cout << "So luong gia tri phan biet trong mang: " <<giatri.size() << endl;
    return 0;
}
