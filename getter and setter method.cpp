/*
Write a C++ class Flower that has three instance variables of type string,int and float
which respectively represent the name of flower, its number of petals and price .your class 
must include a constructor method that initializes each variable to an appropriate value
and your class should include methods for setting and getting the value of each type.
Create an array of 5 flower objects and print the value.
*/
#include<iostream>
using namespace std;
class Flower2{
	string name;
	int petals;
	float cost;
public:
	Flower2(){
		name=name;
		petals=petals;
		cost=cost;
	}
	
	void setName(void){
		
		cout<<"enter name:"<<"\n";
		cin>>name;
	}
	void setPetals(void){
		cout<<"enter number of petals:"<<"\n";
		cin>>petals;
	}
	void setCost(void){
		cout<<"enter price of the flower:"<<"\n";
		cin>>cost;
	}
	void getName(){
		cout<<"name is:"<<name<<"\n";
		
	}
	
	void getPetals(){
		cout<<"number of petals are:"<<petals<<"\n";
	}
	
	void getCost(){
		cout<<"cost of the flower is:"<<cost<<"\n";
	}
		
};
int main(){
	Flower2
	
	
	 fb[5];
	for(int i=0;i<5;i++){
		fb[i].setName();
		fb[i].getName();
		fb[i].setPetals();
		fb[i].getPetals();
		fb[i].setCost();
		fb[i].getCost();
	}
	return 0;
}
