//struct using constructor and method
#include<iostream>
using namespace std;
struct Rectangle{
	int width;
	int height;
	Rectangle(int w,int h){
		width=w;
		height=h;
	}
	void areaofrectangle(){
		cout<<"area of rectangle is:"<<(width*height)<<"\n";
	}
};
int main(void){
	struct Rectangle rec=Rectangle(2,3);
	rec.areaofrectangle();
	return 0;
}
