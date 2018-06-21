#include <iostream>
#include <string>

class A {
private:
	int a = 3;

public:
	A(int a) { a += a; }


	A operator+(const A &o) {
		return A(a + o.a);
	}

	int getA() { return a; };
};

int main()
{
	A a1(4);
	A a2(7);
	A a3 = a1 + a2;
	std::cout << a3.getA();
	return 0;
}