//parametrised constructor
#include<iostream>
using namespace std;
class Emp1{
	public:
	int id;
	string name;
	float salary;
	Emp1(int i,string n,float s){
		id=i;
		name=n;
		salary=s;
	}
	void display(){
		cout<<id<<" "<<name<<" "<<salary<<"\n";
	}
};
int main(void){
	Emp1 e1=Emp1(101,"Rakesh",20000.00);
	Emp1 e2=Emp1(102,"Shaan",30000.00);
	e1.display();
	e2.display();
	return 0;
}
