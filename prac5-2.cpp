#include <iostream>
using namespace std;

int i;

class A
{
public:
	~A() {//소멸자 객체 소멸될때 4가지 조건 만족할때 호출
		i = 10;
	}
};

int &foo() {
	i = 3;//전역변수 세팅
	A ob;//클래스 객체
	return i;
}

int main()
{
	cout << foo() << endl;
	return 0;
}