#include <iostream>

using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc dt;

void nhap(dt &dt)
{
	cout << " nhap a";
	cin >> dt.a;
	cout << " nhap n";
	cin >> dt.n;
}
void xuat(dt &dt)
{
	cout << dt.a << "^" << dt.n;
}
int main() 
{
	donthuc dt;
	nhap(dt);
	xuat(dt);
	return 0;

}