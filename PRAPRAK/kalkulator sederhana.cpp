#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int tambah(int x,int y)
{
	int hasil;
	return hasil=x+y;
}
int kurang(int x,int y)
{
	int hasil;
	return hasil=x-y;
}
int kali(int x,int y)
{
	int hasil;
	return hasil=x*y;
}
int bagi(int x,int y)
{
	int hasil;
	return hasil=x/y;
}

void cetakgaris(int n)
{
	int i;
	cout<<"\n\n";
	for(i=0; i<=n; i++)
	cout<<"-";cout<<"\n";
}
