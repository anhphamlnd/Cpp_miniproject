#include <iostream>
using namespace std;

int main(){
	
	int a[10][10];
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	cout << "cac phan tu lon nhat lan luot la : " ;
	for(int i=0;i<n;i++){
		int max = a[i][0];
		for(int j =0 ; j < m;j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
		}
		cout << max << "\t";
	}
	
	return 0;
}
