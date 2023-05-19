#include<iostream>
#include<string.h>
using namespace std;

class Lion
{
	public :
	virtual	void setdata()
		{
			cout<<"The king of the forest."<<endl;
		}
};
class Leopard : public Lion
{
	public :
		void setdata()
		{
			cout<<"Fastest animal in the world."<<endl;
		}
};
main()
{
	Leopard l1;
	Lion *p1;
	Lion k1;
    k1.setdata();
    p1= &l1;
    p1->setdata();
}
