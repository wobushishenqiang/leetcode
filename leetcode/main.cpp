#include<iostream>
#include<vector>

using namespace std;
 class  A {

public:
	A() {};
	~A() {};
	virtual void G() {}
	int a;

	

	
};

class B : A {
	virtual void X() {}
};

struct C {

};

struct D :public A {

};
int main()
{
	A *a = new A;
	B *b=new B;
	

	return 0;
}