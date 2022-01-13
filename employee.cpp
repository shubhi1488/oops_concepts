//insert and display employee salary
#include<iostream>
using namespace std;
class Employee{
	public:
		int id;
		string name;
		float salary;
		void insert(int i,string n,float s){
			id=i;
			name=n;
			salary=s;
		}
		void display(){
			cout<<id<<" "<<name<<" "<<salary<<"\n";
		}
};
int main(){
	Employee e1;
	Employee e2;
	e1.insert(101,"Raman",10000.00);
	e2.insert(102,"Rajesh",20000.00);
	e1.display();
	e2.display();
	return 0;
}
