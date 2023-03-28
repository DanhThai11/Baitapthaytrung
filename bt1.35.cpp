#include <iostream>
#include <string>
using namespace std;
struct  SOTIETKIEM{
	string maso;
	string loaitietkiem;
	string Hovatenkhachhang;
	int Chungminhnhandan;
	string Ngaymoso;
	float Sotiengui;
};
 void Nhap (SOTIETKIEM &STK){
 	cout << "Nhap ma so:";
 	cin >> STK.maso;
 	cout << " Nhap loai tiet kiem:";
 	cin >> STK.loaitietkiem;
 	cout << "Nhap Ho va ten khach hang:";
 	cin >>STK.Hovatenkhachhang;
 	cout << "Nhap Chung minh nhan dan:";
 	cin >> STK.Chungminhnhandan;
 	cout <<"Nhap Ngay mo so:";
 	cin >> STK.Ngaymoso;
 	cout << "Nhap So tien gui:";
 	cin >> STK.Sotiengui;
 }
 void xuat(SOTIETKIEM STK){
 	cout <<"(" << STK.maso <<"," << STK.loaitietkiem <<"," <<STK.Hovatenkhachhang <<"," <<STK.Chungminhnhandan <<"," <<STK.Ngaymoso <<"," <<STK.Sotiengui <<")";
 }
 int main() {
   SOTIETKIEM stk;
   Nhap(stk);
   xuat(stk);
   return 0;
}