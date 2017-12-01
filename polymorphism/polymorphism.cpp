// polymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class shape{
	protected:
		int width, height;

	public:
		shape(int a=0, int b=0){
			width=a;
			height=b;
		}
		 int area(){
			cout << "Parent class area: " << endl;
			return 0;
		}

};

class rectangle:public shape{
	public:
		rectangle(int a=0, int b=0){
			shape(a,b);
		}

		int area(){
			cout << "Rectangle class area: " << endl;
			return (width * height);
		}

};

class triangle:public shape{
	public:
		triangle(int a=0, int b=0){
			shape(a,b);
		}

		int area(){
			cout << "Triangle class area:"<< endl;
			return (width*height/2);
		}
};

int _tmain(int argc, _TCHAR* argv[])
{
	shape *shape;
	rectangle rec(10,7);
	triangle tri(5,7);

	shape = &rec;
	shape ->area();

	shape = &tri;
	shape ->area();


	system("pause");
	return 0;
}

