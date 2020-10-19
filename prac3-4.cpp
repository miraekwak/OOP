#include <iostream>

#define MAXSTACKSIZE 1000//스택최대크기

class Stack {
	int top;
public:
	int a[MAXSTACKSIZE]; //stack

	Stack() {//stack의 꼭대기값 초기화
		top = -1;
	}
	bool push(int x);
	int pop();
};

bool Stack::push(int x) {
	if (top >= (MAXSTACKSIZE - 1)) {
		std::cout << "오류: 스택이 넘쳤습니다." << std::endl;
		return true;
	}
	else {
		//stack데이터 넣기
		a[++top] = x;
		std::cout << x << "이 스택에 들어갔습니다." << std::endl;
		return true;
	}
}

int Stack::pop() {
	if (top < 0) {
		std::cout << "오류 : 스택이 비었습니다." << std::endl;
		return 0;
	}
	else {
		//스택 데이터 빼기
		int x = a[top];
		top--;
		return x;
	}
}

int main() {
	class Stack s;
	s.push(7);
	s.push(88);
	s.push(999);
	std::cout << s.pop() << "을 스택에서 꺼냈습니다." << std::endl;
	std::cout << s.pop() << "을 스택에서 꺼냈습니다." << std::endl;
	std::cout << s.pop() << "을 스택에서 꺼냈습니다." << std::endl;
	
	system("pause");

	return 0;
}