#include <iostream>
using namespace std;
int main() {
	
	int n,x;
	
	int a[20];
	
	cin >> n;
	for(int i = 0; i < n; i++){
		
		cin >> a[i];
	}
	
	cout << "nhap x : " ;
	cin >> x;
	
	a[n] = x;
	n++;
	
	for(int i = 0; i < n; i++){
		
		cout << a [i] << "\t";
	}
	
	return 0;
}
