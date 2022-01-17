//inheriting two classes at the same time
#include<iostream>
using namespace std;
class A{
	protected:
		int a;
	public:
	void get_A(int n){
		a=n;
	}	
};
class B{
	protected:
		int b;
	public:
		void get_B(int n){
			b=n;
		}
};
class C:public A,public B{
	public:
		void display(){
			cout<<"value of a is:"<<a<<"\n";
			cout<<"value of b is:"<<b<<"\n";
			cout<<"addition is:"<<a+b<<"\n";
		}
};
int main(){
	C c;
	c.get_A(10);
	c.get_B(20);
	c.display();
	return 0;
}
