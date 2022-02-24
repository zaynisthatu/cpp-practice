#include<iostream>
using namespace std;
int main()
{
int salary,hra,da,gross;
cout<<"enter salary :";
cin>>gross;
gross=hra+da+salary;
if(salary<=1500)
{
hra=salary*10;
da=salary*90;
}
else(salary>=1500);
{

  hra=salary*500;
   da=salary*98;
}
cout<<"gross salary is :"<<gross;
       
}

