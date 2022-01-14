//deep copy-uses user defined constructor
#include<iostream>
using namespace std;
class Demo2{
	int a;
	int b;
	int *p;
	public:
		Demo2(){
			p=new int;
		}
		//created the user defined constructor
		Demo2(Demo2 &d)  
    {  
        a = d.a;  
        b = d.b;  
        p = new int;  
        *p = *(d.p);  
    }  
		//created the method to set the data of values
		void setdata(int x,int y,int z){
			a=x;
			b=y;
			*p=z;
		}
		//created another method to display the values
		void showdata(){
			cout<<"value of a is:"<<a<<"\n";
			cout<<"value of b is:"<<b<<"\n";
			cout<<"value of *p is:"<<*p<<"\n";
		}
};
int main(){
	Demo2 d1;
	d1.setdata(5,6,7);
	Demo2 d2=d1;
	d2.showdata();
	return 0;
}
