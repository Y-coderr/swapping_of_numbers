#include <iostream>
using namespace std;
class A {
	
	int temp, a, b;

public:

	
	A(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	friend void swap(A&);
};


void swap(A& s1)
{
	cout << "\nBefore Swapping: " << s1.a << " " << s1.b;

	s1.temp = s1.a;
	s1.a = s1.b;
	s1.b = s1.temp;
	cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
int main()
{
	A s(4, 6);
	swap(s);
	return 0;
}
