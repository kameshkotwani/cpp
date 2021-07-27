#include<iostream>

using namespace std;

class Base{
	public:
		int a;
	
	public:
		Base (){}
		Base(int a):a(a){}
	virtual void print(){
		cout<<"Base"<<a<<endl;
	}

};

class Derived : public Base{
	private:
		int b;
	public:
	Derived(int a,int b):Base(a),b(b){}
	void print() override{
		cout<<"Derived"<<b<<a<<endl;
		
	}

};

int main()

{
	Base b(1);
	Derived d(1,2);
	b.print();
	d.print();
	Base *bp = &d;
	bp->print();
//bp->b=25; // class Base cannot access derived members of Derived Class


	return EXIT_SUCCESS;
}