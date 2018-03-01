#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int a,t,r,p,l,s,luas;
void segitiga() {
	system("cls");
	cout<<"Menghitung Luas Segitiga"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukkan alas: ";cin>>a;
	cout<<"Masukkan tinggi: ";cin>>t;
	luas=0.5*a*t;
	cout<<"Jadi luas segitiga adalah: "<<luas<<endl;
}
void bujursangkar() {
	system("cls");
	cout<<"Menghitung Bujur Sangkar"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukkan sisi: ";cin>>s;
	luas=s*s;
	cout<<"Jadi bujur sangkar adalah: "<<luas<<endl;
}
void persegipanjang() {
	system("cls");
	cout<<"Menghitung Persegi Panjang"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukkan panjang: ";cin>>p;
	cout<<"Masukkan lebar: ";cin>>l;
	luas=p*l;
	cout<<"Jadi Persegi panjang adalah: "<<luas<<endl;
}
void lingkaran() {
	system("cls");
	int r;
	cout<<"Menghitung Luas Lingkaran"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukkan jari-jari: ";cin>>a;
	luas=3.14*r*r;
	cout<<"Jadi luas lingkaran adalah: "<<luas<<endl;
}
void jajargenjang() {
	system("cls");
	cout<<"Menghitung Luas Jajar Genjang"<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Masukkan alas: ";cin>>a;
	cout<<"Masukkan tinggi: ";cin>>t;
	luas=a*t;
	cout<<"Jadi jajar genjang adalah: "<<luas<<endl;
}

void main() { 
 int pil;
 cout<<"MENU UTAMA"<<endl;
 cout<<"ARITMATIKA"<<endl;
 cout<<"----------"<<endl;
 cout<<"1. Luas Segitiga"<<endl;
 cout<<"2. Luas Bujur Sangkar"<<endl;
 cout<<"3. Luas Persegi Panjang"<<endl;
 cout<<"4. Luas Lingkaran"<<endl;
 cout<<"5. Luas Jajarangenjang"<<endl;
 cout<<"Masukan Pilihan : ";cin>>pil;
 if (pil==1) {
	 segitiga();
 }else if (pil==2){
	 bujursangkar();
 }else if (pil==3){
	 persegipanjang();
 }else if (pil==4){
	 lingkaran();
 }else {
	 jajargenjang();
 }
}
