//this pointer
#include<iostream>
using namespace std;
class Employee2{
	public:
	int id;
	string name;
	float salary;
	Employee2(int id,string name,float salary){
		this->id=id;
		this->name=name;
		this->salary=salary;
		
	}
	void display(){
		cout<<id<<" "<<name<<" "<<salary<<"\n";
	}
	
};
int main(void){
	Employee2 e1=Employee2{101,"Piyush",20000.05};
	Employee2 e2=Employee2{102,"Sanjay",40000.06};
	e1.display();
	e2.display();
	return 0;
}
