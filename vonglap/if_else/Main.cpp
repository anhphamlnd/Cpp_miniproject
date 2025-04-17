//#include <iostream>
//
//int main() {
//	int day;
//	std::cin >> day;
//	switch (day) {
//	case 2:
//		std::cout << " thu 2 ";
//		break;
//	case 3:
//		std::cout << " thu 3 ";
//		break;
//	case 4:
//		std::cout << " thu 4 ";
//		break;
//	case 5:
//		std::cout << " thu 5 ";
//		break;
//	case 6:
//		std::cout << " thu 6 ";
//		break;
//	case 7:
//		std::cout << " thu 7 ";
//		break;
//	case 8:
//		std::cout << " chu nhat ";
//		break;
//	default:
//		std::cout << " khong xac dinh ";
//	}
//}
// bai 1 
//#include <iostream>
//
//int main()
//{
//    char lua_chon;
//    int a, b;
//
//    std::cin >> lua_chon;
//    std::cin >> a >> b;
//    switch (lua_chon) {
//    case'+' :
//        std::cout << "Ket qua: " << a + b;
//        break;
//    case '-':
//        std::cout << "Ket qua: " << a - b;
//        break;
//    case '*':
//        std::cout << "Ket qua: " << a * b;
//        break;
//    case '/':
//        std::cout << "Ket qua: " << a / b;
//        break;
//    default:
//        std::cout << "Lua chon khong hop le";
//
//
//        // Viết code ở đây
//    }
//
//        return 0;
//}
//bai2
//#include <iostream>
//
//int main()
//{
//    int month;
//
//    std::cin >> month;
//
//    // Viết code ở đây
//    switch(month) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            std::cout << "Thang " << month << " co 31 ngay";
//            break;
//        case 2:
//            std::cout << "Thang " << month << " co 28 ngay";
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            std::cout << "Thang " << month << " co 30 ngay";
//            break;
//        default:
//            std::cout << " Thang khong hop le";
//    }
//
//    return 0;
//}
// bai3
//#include <iostream>
//
//int main()
//{
//    int year, month;
//
//    std::cin >> year >> month;
//
//    switch (month) {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:
//        std::cout << "Thang " << month << " nam " << year << " co 31 ngay";
//        break;
//    case 2:
//        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//            std::cout << "Thang " << month << " nam " << year << " co 29 ngay";
//        }
//        else {
//            std::cout << "Thang " << month << " nam " << year << " co 28 ngay";
//        }
//        break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:
//        std::cout << "Thang " << month << " nam " << year << " co 30 ngay";
//        break;
//    default:
//        std::cout << " Thang khong hop le";
//    }
//
//    return 0;
//}
// bai4
//#include <iostream>
//
//int main()
//{
//    int a, b, c;
//
//    std::cin >> a >> b >> c;
//
//    int max = (a > b && a > c) ? a : ((b>c) ? b : c);
//
//    std::cout << max;
//
//    return 0;
//}
//bai5
//#include <iostream>
//int main() {
//	int a = 21;
//	do {
//		std::cout << a << std::endl;
//		a += 2;
//	} while (a <= 15);
//	return 0;
//}
//bai6:Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1 + 2 + 3 + ... + n.
//#include <iostream>
//int main() {
//	int n;
//	int S = 0;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++) {
//		S = S + i;
//	}
//	std::cout << S;
//	return 0;
//}
//Bài 2: Nhập 1 số nguyên dương n.In ra màn hình giá trị của S = 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + ... + n ^ 2.
//#include <iostream>
//#include <math.h>
//int main() {
//	int n;
//	int S = 0;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++) {
//		// S = S + i*i;
//		S += pow(i, 2);
//	}
//	std::cout << S;
//	return 0;
//}
//Bài 3: Nhập 1 số nguyên dương n. In ra màn hình giai thừa n!.
//#include <iostream>
//
//int main() {
//	int n;
//	int S = 1;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++) {
//		S = S * i;
//	}
//	std::cout << S;
//}
//Bài 4: Nhập vào 1 số nguyên dương n.In ra màn hình các số chia hết cho 5 từ 1 đến n.

//#include <iostream>
//int main() {
//
//	int n;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++) {
//		if (i % 5 == 0) {
//			std::cout << i << std::endl;
//		}
//	}
//}
//#include <iostream>
//
//int main() {
//    int lua_chon;
//    do {
//        std::cout << "\n===== MENU =====\n";
//        std::cout << "1. Cong 2 so\n";
//        std::cout << "2. Tru 2 so\n";
//        std::cout << "3. Thoat\n";
//        std::cout << "Nhap lua chon cua ban: ";
//        std::cin >> lua_chon;
//
//        if (lua_chon == 1) {
//            int a, b;
//            std::cout << "Nhap 2 so: ";
//            std::cin >> a >> b;
//            std::cout << "Tong = " << a + b << "\n";
//        }
//        else if (lua_chon == 2) {
//            int a, b;
//            std::cout << "Nhap 2 so: ";
//            std::cin >> a >> b;
//            std::cout << "Hieu = " << a - b << "\n";
//        }
//        else if (lua_chon == 3) {
//            std::cout << "Tam biet!\n";
//        }
//        else {
//            std::cout << "Lua chon khong hop le!\n";
//        }
//
//    } while (lua_chon != 3); // Chỉ thoát khi chọn 3
//
//    return 0;
//}
//#include <iostream>
//
//int main() {
//    int lua_chon;
//
//    std::cout << "\n===== MENU =====\n";
//    std::cout << "1. Cong 2 so\n";
//    std::cout << "2. Tru 2 so\n";
//    std::cout << "3. Thoat\n";
//    std::cout << "Nhap lua chon cua ban: ";
//    std::cin >> lua_chon;
//
//    while (lua_chon != 3) {
//        if (lua_chon == 1) {
//            int a, b;
//            std::cout << "Nhap 2 so: ";
//            std::cin >> a >> b;
//            std::cout << "Tong = " << a + b << "\n";
//        }
//        else if (lua_chon == 2) {
//            int a, b;
//            std::cout << "Nhap 2 so: ";
//            std::cin >> a >> b;
//            std::cout << "Hieu = " << a - b << "\n";
//        }
//        else {
//            std::cout << "Lua chon khong hop le!\n";
//        }
//
//        // In lại menu trong mỗi lần lặp
//        std::cout << "\n===== MENU =====\n";
//        std::cout << "1. Cong 2 so\n";
//        std::cout << "2. Tru 2 so\n";
//        std::cout << "3. Thoat\n";
//        std::cout << "Nhap lua chon cua ban: ";
//        std::cin >> lua_chon;
//    }
//
//    std::cout << "Tam biet!";
//    return 0;
//}

