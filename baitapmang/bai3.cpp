////Tao mang so nguyen duong co n phan tu (toi da 10 phan tu). Nhap vao 1 so nguyen duong x (0 <= x <= 9) va so nguyen duong y. Them y vao vi tri x cua mang.
//
//#include <iostream> 
//using namespace std;
//
//int main() {
//	
//	int a[20];
//	
//	int n,x;
//	
//	cout << "nhap n : " ;
//	cin >> n;
//	
//	cout << "nhap mang : ";
//	for (int i =0; i < n; i++) {
//		
//		cin >> a[i];
//	}
//	
//	cout << "nhap x : ";
//	cin >> x ;
//	
//	for(int i = x ; i <n ; i++){
//		
//		a[i]=  a[i+1];
//	}
//	
//	n --;
//	
//	for (int i =0; i <n ; i++){
//		
//		cout << a[i] << "\t" ;
//	}
//	return 0;
//}
#include <iostream>
using namespace std;

int main() {
    int a[10]; // M?ng t?i da 10 ph?n t?
    int n, x;

    // Nh?p s? ph?n t?
    cout << "Nhap so luong phan tu (toi da 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "So luong phan tu khong hop le!" << endl;
        return 1;
    }

    // Nh?p m?ng
    cout << "Nhap " << n << " so nguyen duong: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= 0) {
            cout << "Chi nhap so nguyen duong!" << endl;
            return 1;
        }
    }

    // Nh?p v? trí c?n xóa
    cout << "Nhap vi tri x (0 <= x < " << n << "): ";
    cin >> x;

    if (x < 0 || x >= n) {
        cout << "Vi tri x khong hop le!" << endl;
        return 1;
    }

    // D?ch các ph?n t? sang trái d? xóa ph?n t? t?i v? trí x
    for (int i = x; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--; // Gi?m s? lu?ng ph?n t?

    // In m?ng sau khi xóa
    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

