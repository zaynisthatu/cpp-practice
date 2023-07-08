#include<iostream>
using namespace std;
int main() 
{
	int phy;
	int chem;
	int bio;
	int maths;
	int eng;
	int totalmarks;
	
	cout<<"give the marks of chem, phy, bio, maths, eng ";
	
	cin>>chem>>phy>>bio>>maths>>eng;
	
	totalmarks=chem+phy+bio+maths+eng;
	
cout<<"marks are:"<<totalmarks<< endl;

int average;
int obtainmarks;


obtainmarks=chem+phy+bio+maths+eng;
 average=(totalmarks/obtainmarks )*100;

cout <<"average value of: "<<average;
}
