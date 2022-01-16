#include<iostream>
using namespace std;
class Flower2{
	string name;
	int petals;
	int cost;
public:
	Flower2(){
		name=name;
		petals=petals;
		cost=cost;
	}
	
	void setName(void){
		petals=60;
		cost=1000;
		cout<<"enter name:"<<"\n";
		cin>>name;
	}
	void getName(){
		cout<<"name is:"<<name<<"\n";
		cout<<"petals are:"<<petals<<"\n";
		cout<<"price is:"<<cost<<"\n";
	}
		
};
int main(){
	Flower2 fb[5];
	for(int i=0;i<5;i++){
		fb[i].setName();
		fb[i].getName();
	}
	return 0;
}
