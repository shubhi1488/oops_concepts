//creating the destructor
#include<iostream>
using namespace std;
class Emp3{
	public:
	Emp3(){
		cout<<"Constructor is invoked"<<"\n";
	}
	~Emp3(){
		cout<<"Destructor is invoked"<<"\n";
	}
};
int main(void){
	Emp3 e1;
	Emp3 e2;
	return 0;
}
