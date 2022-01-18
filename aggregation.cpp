//aggregation-this is a process in which one class defines another class as any entity reference 
#include<iostream>
using namespace std;
class Address{
	public:
		string addressLine,city,state;
		Address(string addressLine,string city,string state){
			this->addressLine=addressLine;
			this->city=city;
			this->state=state;
		}
};
class Emp9{
	private:
		Address*address;
	public:
	int id;
	string name;
	Emp9(int id,string name,Address*address){
		this->id=id;
		this->name=name;
		this->address=address;
	}	
	void display(){
		cout<<id<<" "<<name<<" "<<address->addressLine<<" "<<address->city<<" "<<address->state<<"\n";
	}
};
int main(void){
	Address a1=Address{"C-146, Sec-15","Noida","UP"};
	Emp9 e1=Emp9{101,"Nakul",&a1};
	e1.display();
	return 0;
}
