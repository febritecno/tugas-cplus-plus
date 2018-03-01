#include <iostream>
#include <Conio.h>
#include <Windows.h>
using namespace std;
int P;

void menu1() {

			system("cls");

}

void menu2() {

			system("cls");

}




void main() {
MENU:
puts("#       Apilkasi Gateway *444#       #");
puts("#         	Milik Indosat		   #");
puts("#       Create @ Febrian Dwi P.      #");
puts("#------------------------------------#");
puts("");
puts("1 Data Pinternet Jaguar");
puts("");
system ("color 5B");
cin>>P;
puts("");
if (P==1){
			menu1();
			system ("color 2F");
			puts("");
			puts("");
			cout<<"Pkt 4G (600MB + 3G jam 01-06 +"<<endl;
			cout<<"400 MB jam 09-17),"<<endl;
			cout<<"Rp29,900rb/30hr,kec sd42Mbps."<<endl;
			cout<<"Klebihan pmakaian:Rp1.5/KB"<<endl;
			puts("");
			cout<<"1 Langganan"<<endl;
			puts("");
			cin>>P;
			if (P==1){
			menu2();
			puts("");
			puts("");
			cout<<"Sudah terkirim"<<endl;
			goto MENU;
			}
			
}
}