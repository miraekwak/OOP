#include <iostream>

class GlobalLogger
{
	int log_value;
public:
	GlobalLogger(int v = 0)
	{
		log_value = v;
	}
	int get_log_data()
	{
		return log_value;
	}
	void set_log_data(int v)
	{
		log_value = v;
	}
};

// Default initialization
GlobalLogger* global_Logger_ptr = 0;
//globallogger 객체를 관리하는 함수가 여러개인것은 비효율적
void Logger_User_A(void)
{
	if (!global_Logger_ptr)
	{
		global_Logger_ptr = new GlobalLogger;
	}
	global_Logger_ptr->set_log_data(1);
	std::cout << "Logger_User_A:log_data_is" << global_Logger_ptr->get_log_data() << '\n';
}

void Logger_User_B(void)
{
	if (!global_Logger_ptr)
	{
		global_Logger_ptr = new GlobalLogger;
	}
	global_Logger_ptr->set_log_data(2);
	std::cout << "Logger_User_B:log_data_is" << global_Logger_ptr->get_log_data() << '\n';
}

int main()
{
	if (!global_Logger_ptr)
	{
		global_Logger_ptr = new GlobalLogger;
	}
	std::cout << "main:log_data is" << global_Logger_ptr->get_log_data() << "\n";
	Logger_User_A();
	Logger_User_B();
	// loggerA, B는 새로 객체를 생성하지 않지만 만약 생성전에 logger포인터를 0으로 초기화해주면
	// 새로 객체가 중복되어서 생성된다.
	// logger value를 관리하는 객체는 하나만 있어도 충분하기 때문에 하나의 객체만 생성하여 그 객체가 관리하는 것이 싱글톤패턴
	//global_Logger_ptr =0 을 해주면 3번의 객체를 생성함.
}