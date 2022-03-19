#include <iostream>
using namespace std;
class home
{
	public:
		int variable;
		void in()
		{
			cout<<" enter the value of variable";
			cin>>variable;
		}
		void out()
		{
			cout<<"You have Entered : "<<variable;
		}
	
	};
	int main()
	{ home obj;
	obj.in();
	obj.out();
	}
