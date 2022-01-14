//shallow copy
#include<iostream>
using namespace std;
class Demo{
	int a;
	int b;
	int *p;
	public:
		Demo(){
			p=new int;
		}
	    void setdata(int x,int y,int z){
	    	a=x;
	    	b=y;
	    	*p=z;
	    	
		}
		void showdata(){
			cout<<"value of a is:"<<a<<"\n";
			cout<<"value of b is:"<<b<<"\n";
			cout<<"value of *p is:"<<*p<<"\n";
		}
};
int main(){
	Demo d1;
	d1.setdata(2,3,4);
	Demo d2=d1;
	d2.showdata();
	return 0;
}
