#include <iostream>
using namespace std;
int main() {
	/*1
	int a;
	bool r;
	cin >> a;
	r = a > 0;
	cout << boolalpha << r;*/

	/*2
	int a;
	bool r;
	cin >> a;
	r = a % 2 != 0;
	cout << boolalpha << r;*/

	/*3
	int a;
	bool r;
	cin >> a;
	r = a % 2 == 0;
	cout << boolalpha << r;*/

	/*4
	int a,b;
	cin >> a >> b;
	bool r;
	r = a > 2 && b<=3;
	cout << boolalpha << r;*/

	/*5
	int a, b;
	cin >> a >> b;
	bool r;
	r = a >= 0 || b < -2;
	cout << boolalpha << r;*/

	/*6
	int a, b, c;
	cin >> a >> b>>c;
	bool r;
	r = a < b && b < c;
	cout << boolalpha << r;*/

	/*7
	int a, b, c;
	cin >> a >> b >> c;
	bool r;
	r = (a<b && b<c) || (c < b && b < a);
	cout << boolalpha << r;*/

	/*8
	int a, b;
	cin >> a >> b;
	bool r;
	r = a % 2 != 0 && b % 2 != 0;
	cout << boolalpha << r;*/

	/*9
	int a, b;
	cin >> a >> b;
	bool r;
	r = a % 2 != 0 || b % 2 != 0;
	cout << boolalpha << r;*/

	/*10
	int a, b;
	cin >> a >> b;
	bool r;
	r = (a % 2 != 0 && b % 2 == 0) || (a % 2 == 0 && b % 2 != 0);
	cout << boolalpha << r;*/

	/*11
	int a, b;
	cin >> a >> b;
	bool r;
	r = (a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0);
	cout << boolalpha << r;*/

	/*12
	int a, b, c;
	cin >> a >> b >> c;
	bool r;
	r = a>0 && b>0 && c>0;
	cout << boolalpha << r;*/

	/*13
	int a, b, c;
	cin >> a >> b >> c;
	bool r;
	r = a > 0 || b > 0 || c > 0;
	cout << boolalpha << r;*/

	/*14
	int a, b, c;
	cin >> a >> b >> c;
	bool r;
	r = (a>0 && b<0 && c<0) || (a < 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0);
	cout << boolalpha << r;*/

	/*15
	int a, b, c;
	cin >> a >> b >> c;
	bool r;
	r = (a > 0 && b > 0 && c < 0) || (a < 0 && b > 0 && c > 0) || (a > 0 && b < 0 && c > 0);
	cout << boolalpha << r;*/
	
	/*16
	int a;
	bool r;
	cin >> a;
	r = a % 2 == 0 && a>9 && a<100;
	cout << boolalpha << r;*/

	/*17
	int a;
	bool r;
	cin >> a;
	r = a % 2 != 0 && a>99 && a<1000;
	cout << boolalpha << r;*/

	/*18
	int a, b, c;
	cin >> a >> b >> c;
	bool r;
	r = a == b || b == c || a == c;
	cout << boolalpha << r;*/

	/*19
	int a, b, c;
	cin >> a >> b >> c;
	bool r;
	r = a == -b || b == -a || a == -c || c == -a || b == -c || c == -b;
	cout << boolalpha << r;*/

	int a;
	cin >> a;
	bool r;
	int a1 = a/100;
	int a2 = (a % 100)/10;
	int a3 = a % 10;
	r = a1 != a2 || a2 != a3 || a1 != a3;
	cout << boolalpha << r;

	return 0;
}
