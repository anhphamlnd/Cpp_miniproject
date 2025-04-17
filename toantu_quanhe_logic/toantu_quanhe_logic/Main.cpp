/*
#include <iostream>
int main()
{
	std::cout << "Hello World";
	return 0;
}
*/
//#include <iostream>
//int main(){
//	int a = 3 , b = 4;
//	bool c = a > b;
//	bool d = a < b;
//	bool f = a >= b;
//	bool g = a <= b;
//	bool h = a == b;
//	bool i = a != b;
//
//
//	std::cout << "c = " << c << std::endl;
//	std::cout << "d = " << d << std::endl;
//	std::cout << "f = " << f << std::endl;
//	std::cout << "g = " << g << std::endl;
//	std::cout << "h = " << h << std::endl;
//	std::cout << "i = " << i << std::endl;
//	return 0;
//}

// bai 1
//#include <iostream>
//int main() {
//	int a, b;
//	std::cin >> a >> b ;
//	std::cout << "tong la " << a + b << std::endl;
//	std::cout << "hieu la " << a - b << std::endl;
//	printf("Tong cua 2 so la %d ", a + b);
//
//}

//bai2

//#include <iostream>
//int main() {
//	char a;
//	std::cin >> a;
//	std::cout << char(a - 32);
//}

//bai3
//#include <iostream>
//int main() {
//	int a, b;
//	std::cin >> a >> b;
//	int c = a;
//	a = b;
//	b = c;
//	std::cout << "gia tri cua a la " << a << std::endl;
//	std::cout << "gia tri cua b la " << b << std::endl;
//
//
//}

//bai4
#include <iostream>
#include <math.h>
int main() {
	int a, b;
	std::cin >> a >> b;
	int c = ((a + b) - abs(a - b)) / 2;
	std::cout << c;
	
}