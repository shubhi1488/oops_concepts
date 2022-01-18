#include<iostream>
using namespace std;
class Multiply{
	public:
		static int mul(int a,int b){
			return a*b;
		}
		static int mul(int a,int b,int c){
			return a*b*c;
		}
		static double mul(double a,double b){
			return a*b;
		}
};
int main(){
	Multiply m1;
	cout<<m1.mul(2,3)<<"\n";
	cout<<m1.mul(2,3,4)<<"\n";
	cout<<m1.mul(2.1,3.1);
	return 0;
}
