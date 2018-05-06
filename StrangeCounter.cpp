#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	
	double check=log2(t/3.0+1);
	long long n= long int(check);
	if(n==check) n--;
	cout<<3*pow(2.0,n)-((t-3*(pow(2.0,n)-1))-1);
	return 0;
}