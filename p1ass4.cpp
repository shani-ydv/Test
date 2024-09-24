#include<iostream>
using namespace std;
 class shape
 {
	public:
		int width,height;
		shape(){
		}
		shape(int x,int y)
		{
		width=x;
		height=y;	
		}

};
class triangle:public shape
{
	public:
	void area()
	{
		int ar = (0.5)*(height*width);
		cout<<"Area of triangle = "<<ar<<endl;
	}
};
class rectangle:public shape
{
		public:
	void area()
	{
		int ar = height*width;
		cout<<"Area of rectangle  = "<<ar<<endl;
	}
};
int main()
{ 
     int width,height;
     cout<<"Enter height and width"<<endl;
     cin>>width>>height;
	shape obj(width,height);
     triangle obj1;
     rectangle obj2;
     obj1.width = obj.width;
     obj1.height=obj.height;
    obj1.area();
    obj2.width = obj.width;
     obj2.height=obj.height;
    obj2.area();
    
     
    cout<<"Shani";

	return 0;
}
