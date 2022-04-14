#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	a=10;
	std::cout<<"value of a is "<<a<<endl;
	b=5;
	std::cout<<"value of b is "<<b<<endl;
	c=a;
	a=b;
	b=c;
	std::cout<<"value of a after swapping is "<<a<<endl;
	std::cout<<"value of b after swapping is "<<b;
	return(0);
}
