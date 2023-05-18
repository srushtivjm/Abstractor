#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		int a;
		void set(int n)
		{
			this->a=n;
		}
		void get()
		{
			cout<<"A="<<this->a<<endl;
		}
	    A operator ++(int)
	    {
	    	A temp;
	    	temp.a=this->a++;
	    	return temp;
	    	cout<<endl;
		}
		
		
};
class B
{
    public :
		int b;
		void setdata(int m)
		{
			this->b=m;
		}
		void getdata()
		{
			cout<<"B="<<this->b<<endl;
		}	
			B operator --(int)
		{
			B temp;
			temp.b=this->b--;
			return temp;
		}
};
main()
{
	A a1;
	a1.set(10);
	a1.get();
	
	a1 ++;
	a1.get();
    cout<<endl;
	
	B b1;
	b1.setdata(15);
	b1.getdata();
	
	b1 --;
	b1.getdata();
}
