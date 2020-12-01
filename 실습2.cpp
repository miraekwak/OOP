#include <iostream>
#include <string>
template<typename T>
auto sum(T x) {
	return x;
}
template<typename T, typename...Args>
auto sum(T x, Args... args) {
	return x + sum(args...);
}

int main() {
	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	getchar();
}

// sum 호출시 2개인자를 받는 sum이 호출되다가 
// 마지막엔 1개의 인자만 남는다.
// 한개의 인자가 남을 때 2개인자 sum을 사용할 수 없으니 
// 따로 T 타입의 매개변수를 받는 함수를 정의해야한다.
