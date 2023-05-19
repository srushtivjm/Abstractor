#include<iostream>
#include<string.h>
using namespace std;

class Bangtan
{
	public :
		int t;
		
		void setdata(int n)
		{
			this->t=n;
		}
		void getdata()
		{
			cout<<"T ="<<this->t<<endl;
		}
	   	Bangtan operator++(int)
		{
			Bangtan temp;
		  temp.t= this->t++;
		  return temp;
		}
		Bangtan	operator++()
		{
            Bangtan temp;
			 temp.t=++t;
			 return temp;			
		}
		
};
main()
{
	Bangtan b1,b2;
	
	b1.setdata(7);
	b1.getdata();
	
	b1++;
//	b1.getdata();
	
	b2=++b1;
	b2.getdata();
}

