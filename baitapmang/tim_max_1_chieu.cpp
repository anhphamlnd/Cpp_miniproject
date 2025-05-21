// Bài 2: Vi?t chuong trình nh?p vào s? nguyên duong n (0 < n <= 10). T?o m?ng 1 chi?u có n ph?n t? là s? nguyên và in ra màn hình ph?n t? có giá tr? l?n nh?t

#include <iostream>
using namespace std;

int main() {
	
	int a[10], n;
	
	cin >> n;
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int max = a[0];
	for(int i =1 ; i < n ; i++){
		if(a[i] > max){
		max = a[i];
		}
	}
	cout << "max : " << max;
	return 0;
}
