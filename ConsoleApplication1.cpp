// Ryzhenko V.R.
// task 1
// 09.10.2022
#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A;
	C = A % 10;
	C *= 10;
	B = A / 10;
	cout << C <<"+" << B << "=" << C+B;
}