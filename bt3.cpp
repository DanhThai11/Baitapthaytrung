#include <iostream>
using namespace std;
struct Oxy
{
	int x;
	int y;
};
typedef struct Oxy OXY;

void nhap(OXY &oxy)
{
	cout << "nhap hoanh do :";
	cin >> oxy.x;
	cout << "nhap tung do :";
	cin >> oxy.y;
}
void xuat(OXY &oxy) 
{
	cout<<" hoanh do " << oxy.x << " "<<"tung do " << oxy.y;
}
int main()
{
	OXY oxy;
	nhap(oxy);
	xuat(oxy);
	return 0;
}