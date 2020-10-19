class Animal {
public:
	Animal(int numberOfLeg) {
		this->numberOfLeg = numberOfLeg;
	}
private:
	int numberOfLeg;
};
int main() {
	Animal a(4);//생성자 추가 시 default생성자 없어서 오류 발생
	return 0;
}