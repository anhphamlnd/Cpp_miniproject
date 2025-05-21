// Viet chuong trinh nhap vao 1 chuoi gom cac ky tu a -> z, A -> Z va co the chua khoang trang. Hay viet hoa cac chu cai o dau moi tu, cac chu cai con lai de o dang viet thuong.

#include <iostream> 
#include <string> 
using namespace std;

int main() {
	
	string str;
	getline(cin,str);
	for(int i =0; i < str.length(); i++) {
		
//		if(str[i] >=65 && str[i] <=90 ){
//			str[i]+=32;
//		}
		str[i] = tolower(str[i]);
	}
	if(str[0] != ' '){
	
	//	str[0]= str[0]- 32;
	str[0] = toupper(str[0]);
}
	for(int i =0 ;i < str.length(); i++) {
		
		if(str[i] == ' ' && str[i+1] != ' ') {
			//str[i+1]-=32;

		str[i+1] = toupper(str[i+1]);
}
	}
	

	cout << " chuoi sau xu ly : " << str;
	
	
	return 0;
}
