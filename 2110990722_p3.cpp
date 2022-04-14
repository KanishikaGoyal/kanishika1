#include<iostream>
using namespace std;
int main()
{
	int a,b;
	a=10;
	b=5;
	std::cout<<"value of a is "<<a<<endl;
	std::cout<<"value of b is "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	std::cout<<"value of a after swapping is "<<a<<endl;
	std::cout<<"value of b after swapping is "<<b;
	return(0);
}
