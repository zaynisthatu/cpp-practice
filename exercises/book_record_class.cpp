#include<iostream>
using namespace std;
class book{
	public:
		int bookid ;
		int pages  ;
		float price  ;
		void get()
		{cout<<"enter book id:";
		cin>>bookid;
		cout<<"enter book price :";
		cin>>price;
		cout<<"enter book pages:";
		cin>>pages;
		};	 
      void show()
	  {cout<<"BooklD = "<<bookid<<endl;
	  cout<<"Pages = "<<pages<<endl;
	  cout<<"Price = "<<price<<endl ;
	  }
	  
		};
int main()
{
book obj;
obj.get();
obj.show();
}


