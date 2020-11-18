#include <iostream>
using namespace std;

template <typename T>
void fun(const T& x) {
	static int count = 0;
	cout << "x= " << x << " count = " << count << endl;
	++count;
	return;
}

int main() {
	fun<int>(1);
	cout << endl;
	fun<int>(2);
	cout << endl;
	fun<double>(1.1);
	cout << endl;
	fun<double>(2.1);
	cout << endl;
	return 0;
}