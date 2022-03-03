#include <iostream>
 using namespace std;
 int main() 
 {int min ,a,b,c;
 cout<<"Enter the number:";
 cin>>a>>b>>c;
 min=a;
 if ( b < min )
 {
  min =b ;
}
if(c< min )  
{
	min=c;
}
cout<<"minimum number :"<<min;
 }
