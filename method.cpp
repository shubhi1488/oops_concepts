//initialization and display using method
#include<iostream>
using namespace std;
class Student{
	public:
		int id;
		string name;
		void insert(int i,string n){
			id=i;
			name=n;
		}
		void display(){
			cout<<id<<" "<<name<<"\n";
		}
};
int main(){
	Student s1;
	Student s2;
	s1.insert(101,"shubhi");
	s2.insert(102,"shalini");
	s1.display();
	s2.display();
	return 0;
}
