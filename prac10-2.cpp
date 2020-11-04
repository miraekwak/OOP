
class Base
{
public:
	void func_1() {};
protected:
	void func_2() {};
private:
	int x_;
};

class Derived : public Base
{
public:
	void func_3() {
		func_1();
		func_2();
	}
};

int main() {
	Derived d;
	d.func_3();
	//protected로 상속을 받으면 Base함수들은 Derived클래스에서밖에 사용 못함
	// public 상속으로 바꿔주어야 객체에 대해 사용가능
	d.func_1();
}