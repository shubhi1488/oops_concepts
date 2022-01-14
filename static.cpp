//static keyword
#include<iostream>
using namespace std;
class Work{
	public:
		int accno;
		string name;
		static float rateofinterest;
		Work(int accno,string name){
			this->accno=accno;
			this->name=name;
		}
		void display(){
			cout<<accno<<" "<<name<<" "<<rateofinterest<<"\n";
		}
		
};
float Work::rateofinterest=6.5;
int main(void){
	Work w1=Work{201500682,"shubhi"};
	Work w2=Work{201500692,"Shaam"};
	w1.display();
	w2.display();
	return 0;
}
