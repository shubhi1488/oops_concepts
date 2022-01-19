//method overriding-using the same function in the derived class i.e. the child class
#include<iostream>
using namespace std;
class E{
	public:
		void eat(){
			cout<<"eating "<<"\n";
		}
};
class EF:public E{
	public:
		void eat(){
			cout<<"Eating the bread"<<"\n";
			cout<<"barking"<<"\n";
		}
};
int main(void){
	EF ef=EF();
	ef.eat();
	return 0;
	
}
