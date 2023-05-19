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
main()
{
	A a1;
	a1.set(5);
	a1.get();
	
	a1 ++;
	a1.get();
    cout<<endl;
}
