//Bài 1: Vi?t chuong trình nh?p vào 2 s? nguyên duong n và m (0 < n <= 10, 0 < m <= 10). T?o m?ng 2 chi?u ch?a các s? nguyên có n hàng và m c?t. Tính và in ra màn hình t?ng các ph?n t? có trong m?ng.
#include <iostream>

using namespace std;

int main() {
	int a[10][10];
	int sum = 0;
	int n,m;
	cin >> n >> m;
	
	for(int i =0; i < n; i++){
		for(int j=0;j <m; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i =0; i < n; i++){
		for(int j=0;j <m; j++){
			sum += a[i][j];
		}
	}
	cout << "tong : " <<  sum;
	return 0;
}
