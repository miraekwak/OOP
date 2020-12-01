#include <iostream> 
template <typename T, int num = 5>
T add_num(T t)
{
	return t + num;
}

int main()
{
	int x = 3;
	std::cout << "x : " << add_num<int,2>(x) << std::endl;
	// add_num의 type에 int와 2로 정의하여 default값인 5가 아닌 num을 2로 한다.
}

