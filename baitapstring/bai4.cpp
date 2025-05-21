//Viet chuong trinh nhap vao 1 chuoi gom cac ky tu a -> z, A -> Z va co the chua khoang trang. Hay chuan hoa chuoi do

#include <iostream> 
#include<string> 

using namespace std;

int main() {
	
	string str;
	getline(cin,str);
	int i =0 ;
	while(i < str.length()){
		
		if(str[i]==' ' && str[i+1] == ' ')
		{
			
			str.erase(i,1);
		}
		else
			{
			i++;
			}
		
		
		
	}
	
	for(int i=0; i <str.length(); i++) {
		
		if(str[i] >= 'A' && str[i] <= 'Z'){
			
		str[i] = tolower(str[i]);
		}
	}
	if(str[0] != ' '){
		str[0] = toupper(str[0]);
	}
	for(int i =0; i < str.length(); i++){
		
		if(str[i] == ' ' && str[i+1] != ' '){
			
			str[i+1] = toupper(str[i+1]);
		}
	}
	
	
	cout << "chuoi sau xu ly :  " << str;
}
