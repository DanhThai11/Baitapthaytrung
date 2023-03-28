#include <stdio.h>
#include <conio.h>

struct honso
{
	int tu;
 	int mau;
 	int hon;
};
typedef struct honso HONSO;
void nhaphonso(HONSO &);
void xuathonso(HONSO);

void nhaphonso(HONSO &hs)
{
	printf("\n nhap tu:");
	scanf("%d",&hs.tu);
	printf("\n nhap mau:");
	scanf("%d",&hs.mau);
	printf("\n nhap nguyen:");
	scanf("%d",&hs.hon);
}

void xuathonso(HONSO hs)
{
	printf("%d/%d/%",hs.tu,hs.mau,hs.hon);
}

int main()
{
	HONSO hs;
	nhaphonso(hs);
	xuathonso(hs);
	
	getch();
	return 0;
}
