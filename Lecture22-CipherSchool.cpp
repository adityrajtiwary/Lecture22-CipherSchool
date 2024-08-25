#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cout<<"The address of a is: "<<&a;
	cout<<endl;
	cout<<"The address of b is: "<<&b;
	
	int *p;
	int *q;
	p = &a;
	a = 2;
	*p = 3;
	b = 5;
	q = &b;
	c = *p+*q;
	
//	cout<<endl;
//	cout<<"The value of a is (from the actual variable type)"<<a<<endl;
//	cout<<"The value of a from pointer using *(asterix / indirection operator)"<<*p<<endl;
	
//	cout<<"The value of a from pointer using *(asterix / indirection operator)"<<p<<endl;


	return 0;
}
