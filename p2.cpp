#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
		point(){
		}
		point(const point &p)
		{
			x = p.x;
			y=p.y;
		}
		
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	
};
int main()
{
	point p1;
	point p2=p1;
	cout<<"x = " << p2.getX() << " y= " <<p2.getY();
	return 0;
}
