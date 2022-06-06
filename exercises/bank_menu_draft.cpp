#include<iostream>
using namespace std;
class bank
{private:
	int n,no,m;
    public:
int ac()
  {  
    cout<<"enter your name :"<<endl;
    cin>>n;
    cout<<"enter cnic no :"<<endl;
    cin>>no;
	cout<<"your amount :"<<endl;
	cin>>m;
	 
} 
void cashwithdrwal()
  {  
    cout<<"enter your name :"<<endl;
    cin>>n;
    cout<<"enter amount :"<<endl;
	cin>>m;
}

void cashdeposit()
  {  
    cout<<"enter your name :"<<endl;
    cin>>n;
    cout<<"enter amount :"<<endl;
	cin>>m;
} 	 	
}obj1;

void Welcome()
{
    cout<<"****************** ";

    cout<<"WELCOME TO BANK XYZ:";

    cout<<"****************** ";
	}
void opt()
{
	int num;
	cout<<"press 1 for deposit amount"<<endl;
	cout<<"press 2 to withdrawal amount"<<endl;
	cout<<"press 3 for creating account"<<endl;
	cout<<"choose your option :";
	cin>>num;
	switch(num)
	{
	
	    case 1:
			obj1.ac();
			break;
		case 2:
		    obj1.cashwithdrwal();
		    break;
	    case 3:
		    obj1.cashdeposit();
		    break;
		default:
		    cout<<"INVALID NUMBER";
		    
		    
}
	
}
int main()
{
	 Welcome();
	 cout<<endl;
	 opt();
	

}

