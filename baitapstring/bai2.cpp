 //Viet chuong trinh nhap vao 1 chuoi gom cac ky tu a -> z va co the chua khoang trang. Hay loai bo cac khoang trang thua o giua cac tu.
 
 #include <iostream>
 #include <string>
 
 using namespace std;
 
 int main() {
 	
 	string str;
 	
 	cout << "nhap chuoi : " << endl;
 	
 	getline(cin,str);
//int i =0;
// 	while(i < str.length()) 
//	 {
// 		if(str[i]==' ' && str[i+1] == ' '){
// 			str.erase(i,1);
//		 }
//		else
//		{
//			i++;
//		}
//	 }
//	 
//	 cout << "chuoi sau khi xu ly : " << str;
// 	
// }
for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ' && str[i+1] == ' ') {
        str.erase(i, 1);
        i--;
    }
}
	 cout << "chuoi sau khi xu ly : " << str;
 	
 }
