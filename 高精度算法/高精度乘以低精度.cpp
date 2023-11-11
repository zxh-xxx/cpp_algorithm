#include <iostream> 
#include <vector>
using namespace std;
int t = 0;
vector<int> multiply(vector<int> &a, int b)
{
	vector<int> c;
	for(int i = 0;i<a.size();i++)
	{
		t += a[i]*b;
		c.push_back(t%10);
		t /= 10;
	}
	while(t)
	{
		c.push_back(t%10);
		t/=10;
	}
	return c;
}
int main()
{
	string x;
	int y;
	vector<int> a;
	cout << "请依次输入高精度数与低精度数：\n";
	cin >> x >> y;
	for(int i = x.size()-1;i>=0;i--)	a.push_back(x[i]-'0');	
	vector<int> c = multiply(a , y);
	for(int i = c.size()-1;i>=0;i--)
	{
		cout << c[i];
	}
	
	return 0;
}
