//enumeration
#include<iostream>
using namespace std;
enum week{
	Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

int main(){
	week day;
	day=Tuesday;
	cout<<"day:"<<day+1<<"\n";
	return 0;
}
