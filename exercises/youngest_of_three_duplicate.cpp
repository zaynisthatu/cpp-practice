#include<iostream>
using namespace std;

int main()
{

int ali,imran,abbas;
	cout<<"Enter  ages:";
	
	cin>>ali>>imran>>abbas;

	if (ali<imran&&ali<abbas)
		cout<<"ali is youngest";
	else if(imran<ali&&imran<abbas)
		cout<<"imran is youngest";
	else
		cout<<"Abbas is youngest";
	
}
