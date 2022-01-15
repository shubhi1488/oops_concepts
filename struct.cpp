//struct-calculating the area of rectangle
#include<iostream>
using namespace std;
struct Rectangle{
	int width;
	int height;
};
int main(void){
	struct Rectangle rec;
	rec.width=8;
	rec.height=9;
	cout<<"Area of rectangle :"<<(rec.width*rec.height)<<"\n";
	return 0;
}
