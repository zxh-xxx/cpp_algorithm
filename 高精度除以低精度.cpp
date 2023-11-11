#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> div(vector<int> &A, int b , int &t)
{
	t = 0;
	vector<int> c;
	for(int i = A.size()-1;i>=0;i--)
	{
		t += A[i];
		c.push_back(t/b);
		t = (t%b)*10;
	}
	t /= 10;
	reverse(c.begin(),c.end());
	while(c.size() > 1&&c.back() == 0) c.pop_back();
	return c;
}

int main()
{
	string a;
	int b;
	cout << "请依次输入被除数、除数：" << endl; 
	cin >> a >> b;
	vector<int> A;
	for(int i = a.size()-1;i>=0;i--)	A.push_back(a[i]-'0');
	int t ;
	vector<int> c = div(A, b , t); 
	cout << "商为： ";
	for(int i = c.size()-1;i>=0;i--)
	{
		cout << c[i];
	 } 
	
	 cout << endl <<"余数为： " <<t << endl;
	return 0;
} 
