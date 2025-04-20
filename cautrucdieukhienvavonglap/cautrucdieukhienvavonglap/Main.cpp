//Bài 1: Viết chương trình giải phương trình bậc nhất một ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím
//#include <iostream>
//int main() {
//	char c;
//	while (true) {
//		float a, b;
//		
//		std::cout << " nhap vao a va b : "  ;
//		std::cin >> a >> b;
//		float x;
//		if (std::cin.fail()) {
//			std::cin.clear();
//			std::cin.ignore(1000, '\n');
//			std::cout << "Nhap sai! Vui long chi nhap so thuc.\n";
//			continue;
//		}
//		if (a == 0 && b == 0) {
//			std::cout << "phuong trinh co vo so nghiem" << std::endl;
//		}
//		else if (a == 0 && b !=0 ) {
//			std::cout << " vo nghiem " << std::endl;
//		}
//		else {
//			x = -b / a;
//
//			std::cout << " nghiem cua phuong trinh la : " << x << std::endl;
//		}
//		std::cout << "ban co muon tiep tuc chuong trinh khong" << std::endl;
//		std::cin >> c;
//		if (c == 'n' || c == 'N') {
//			std::cout << "ket thuc ";
//			break;
//		}
//		
//	}
//	return 0;
//}
// bai 2: In các số cho đến khi gặp so 42
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//int main() {
//	freopen("input.txt", "r", stdin);
//	int num;
//	while (true) {
//		cin >> num;
//		if (num == 42) {
//			break;
//		}
//		else
//			cout << num << endl;
//	}
//	return 0;
// bai 3: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//int main() {
//	freopen("input.txt", "r", stdin);
//		int n;
//		int test_case, T;
//		
//		cin >> T;
//		for (test_case = 1; test_case <= T; test_case++) {
//			int sum = 0;
//			cin >> n;
//			for (int i = 1; i <= n; i++) {
//				if (i % 2 == 1) {
//					sum += i;
//				}
//
//
//
//			}
//			cout << "tong la :" << sum << endl;
//		}
//		return 0;
//	
//}

//bai4 : Viết chương trình nhập nhiệt độ F từ bàn phím rồi tính và hiển thị nhiệt độ đó ở độ C
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//int main() {
//	freopen("input.txt", "r", stdin);
//	int testcase, T;
//	cin >> T;
//	for (testcase = 1;testcase <= T;testcase++) {
//		float degC, degF;
//		cin >> degF;
//		cout << "degC = " << (degF - 32) / 1.8 << endl;
//	}
//	
//	return 0;
//}
// Bài 5: Viết chương trình nhập vào một số n từ bàn phím.Hãy kiểm tra xem n có phải số nguyên tố hay không.
//#include <iostream> 
//#include< math.h>
//using namespace std;
//int main() {
//	while (true) {
//		int n;
//		cout << "nhap n : ";
//		cin >> n;
//
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore(1000, '\n');
//			cout << "nhap sai de nghi nhap lai ";
//			continue;
//	}
//
//		bool is_nt = true;
//
//		//for (int i = 2; i <= n -1 ;i++)
//		for (int i =2 ; i <=sqrt(n); i++){
//			if (n % i == 0) {
//				is_nt = false;
//				break;
//			}
//		}
//		if (is_nt)
//			cout << n << " la so nguyen to " << endl;
//		else
//			cout << n << " khong phai so nguyen to" << endl;
//	}
//}
//Bài 6: Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.
#include <iostream> 
using namespace std;
int main() {
	while (true) {
		int n;
		cout << "nhap n : ";
		cin >> n;
		int sum = 0;
		while (n > 0) {
			sum += (n % 10);
			n /= 10;

		}

		cout << "ket qua la : " << sum << endl;
	}
	return 0;
}

