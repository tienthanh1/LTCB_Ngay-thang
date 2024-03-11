#include <iostream>
using namespace std;
int main() {
	int thang;
	cout << "nhap vao thang trong nam: ";
	cin >> thang;
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "thang ngay co 31 ngay,thang\n:";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "thang ngay co 30 ngay\n";
		break;
	case 2:
		cout << "thang 2 co 28 hoac 29 ngay";
		break;
	default:
		cout << "khong co thang nay trong nam";
		break;
		return 0;
	}
			

}
