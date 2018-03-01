#include <stdio.h>
#include <conio.h>
#include <iostream.h>
int r,t;
double luas;
void main () {
	cout<<endl;
	puts("+Hitung Volume Tabung+");
	cout<<endl;
	puts("  --------------------------------------------------------- ");
	cout<<"+ Masukan jari-jari:"; cin>>r;
	cout<<endl;
	cout<<"+ Masukan tinggi:"; cin>>t;
	cout<<endl;
	luas=(3.14*r*r)*t;
	cout<<"Jadi volumenya: "<<luas<<endl;
	puts("  --------------------------------------------------------- ");


	puts("  by febrian (21)  ");
	getche();
}