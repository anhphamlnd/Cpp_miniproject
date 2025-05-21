 // Tao mang so nguyen duong co n phan tu (toi da 10 phan tu). Nhap vao 1 so nguyen duong x va them x vao cuoi mang vua tao
 #include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x;
	cout << "nhap x  : " ;
	cin >> x;
	int a[n];
	cout << "nhap mang : " ;
	for (int i = 0; i < n; i++){
		cin >> a[i] ;
	}
	a[n] = x;
	n++;
	
	cout << "mang sau khi them : " ;
	for (int i = 0; i < n; i++){
		cout <<  a[i] << "\t";
	}
	

return 0;
}
	
    

