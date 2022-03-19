#include<iostream>
using namespace std;
class marks{
	public:
		int m1;
		int m2 ;
		int m3 ;
		void in() 
		{cout<<"enter value :";
		cin>>m1>>m2>>m3;
		}
		void sum()
		{
		int sum = m1+m2+m3;
		cout<<"sum are:"<<sum;
		}
		
		void avg()
		{
		int avg=(m1+m2+m3)/3;
		cout<<"average is:"<<avg;
		}
		
};
int main()
{
marks obj;
obj.in();
obj.sum();
obj.avg();
}

