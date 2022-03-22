#include <iostream>
using namespace std;
class counter                            
{
public:  
                        
   void count(){

    cout<<"enter amount"<<endl;
	}                

};
class counter1: public counter 
{void count2(){
   cout<<"enter amount";}                
};
   
int main()
{
 counter1 obj;
 obj.count();
 cout<<"your amount is :";
}
