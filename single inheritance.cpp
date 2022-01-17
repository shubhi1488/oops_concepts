//single inheritance-in which one child object inherits all the variables of parent object 
#include<iostream>
using namespace std;
class Acc{
	public:
		float salary=50000.00;
};
class Programmer:public Acc{
	public:
	    float bonus=5000.00;
	
};
int main(){
	Programmer p1;
	cout<<"programmer salary is:"<<p1.salary<<"\n";
	cout<<"bonus recieved is:"<<p1.bonus;
	return 0;
}
