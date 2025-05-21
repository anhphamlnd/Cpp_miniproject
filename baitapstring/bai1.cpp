//Viet chuong trinh nhap vao 1 chuoi gom cac ky tu tu a -> z va co the chua khoang trang. Hay loai bo cac khoang trang o dau va cuoi chuoi. xoa dau.
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string str ;
	cout << " nhap chuoi : " ;
	getline(cin,str);
	// xoa khoang trang dau chuoi
	while(str[0]== ' ') 
		str.erase(0,1);
		
	// xoa khoang trang cuoi chuoi
	while(str[str.length() - 1] == ' '){
		str.erase(str.length()-1,1);
	}	
	cout << "ket qua : "  << str ;
	{
}

	
}
