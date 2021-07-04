#include<iostream>
using namespace std;

int giaithua(int n)
{
	if (n == 1)
		return 1;	
	return n*giaithua(n - 1);
}
int fibonaci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return fibonaci(n - 1) + fibonaci(n - 2);
}
int main()
{
	int a;
	cout << "a=";
	cin >> a;
	cout <<a<<"!="<< giaithua(a) << endl;
	int n;
	cout << "n=";
	cin >> n;
	cout << "Fibonaci thu " << n << "la: " << fibonaci(n);
	return 0;
}