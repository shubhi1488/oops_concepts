//object and classes
#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		string name;
};
int main(){
	Student s;
	s.id=101;
	s.name="shubhi";
	cout<<s.id<<"\n";
	cout<<s.name<<"\n";
}
