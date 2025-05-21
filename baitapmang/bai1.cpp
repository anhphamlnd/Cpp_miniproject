// in ra 1 mang du lieu
#include <iostream> {

using namespace std;

int main() {
	int n;
	cout << "nhap so phan tu cua mang :" ;
	cin >> n;
	int a[n];
	
	for(int i=0;i <= n -1; i++){
		cout << "a[" << i << "] = "  ;
		cin >> a[i];
	}
	cout << "OUTPUT :" << endl;
	for (int i =0 ; i<=n -1;i++){
		
		cout << a[i] << "\t" ;
	}
	return 0;
}
 






















