#include<iostream>
#include<exception>
using namespace std;
int main ()
{
try{
	int age;
	
	cout<<"enter age :";
	cin>>age ;
	
	if(age>=18){
		cout<<"you r old enough:";
		 
	}
	else{
		throw 104;
		}
		
	}
	catch(int age)
		{cout<<"access denied:";
		
		}
	
	
}  
 
 
