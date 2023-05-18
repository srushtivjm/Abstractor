#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		virtual void teleport()=0;
		
		void future()
		{
			cout<<"Human Telepethi is not possible."<<endl;
		}
};
class B : public A
{
    public :
	  void teleport()
	  {
	  	cout<<"It`s possible"<<endl;
	  }	
};
main()
{
	B b1;
	b1.future();
	b1.teleport();
}
