//---------------------------
//Script by febrian dwi putra
//---------------------------

#include <iostream>
#include <Conio.h>
#include <Windows.h>
using namespace std;
int P,P1,P2,P3;




void main() { //Menu pertama
MENU:
puts("#       Aplikasi Gateway *888#       #");
puts("#       Milik Telkomsel              #");
puts("#       Create @ Febrian Dwi P.      #");
puts("#------------------------------------#");
puts("");
puts("Sisa Pulsa Rp.0.Aktif sd 24/01/2016");
puts("Yuk miliki MP3 terHitz dari Dadali");
puts("");
puts("1.Ya");
puts("2.Info Kartu");
puts("");
system ("color 5B");
cout<<"# ";cin>>P;
puts("");


if (P==1){ //pertama

system("cls");
system ("color 2F");
puts("");
cout<<"Miliki MP3 terHITZ dari Dadali - Disaat"<<endl;
cout<<"Aku tersakiti trf Rp3300. MP3 paling"<<endl;
cout<<"MURAH hanya di *616*66#"<<endl;
cout<<"Klebihan pmakaian:Rp1.5/KB"<<endl;
puts("");
cout<<"0.Home"<<endl;
cout<<"1.Ya"<<endl;
cout<<"9.Back"<<endl;
puts("");
cout<<"# ";cin>>P1;


if (P1==0){
	system("cls");
	goto MENU;
}else if (P1==1){
	system("cls");
	cout<<"   ***  KONTEN DI PROSES  ***"<<endl;
	puts("");
	goto MENU;
}else if (P1==9) {
system("cls");
goto MENU;
}else {
	puts("");
	system("cls");
	cout<<"FATAL ERROR !!"<<endl;
	puts("");
	goto MENU;
}
}
//--------------------------------------
//pembatas menu pertama dan kedua oke :)
//--------------------------------------


else if (P==2){ //menu ke dua
MENU1:
system("cls");
system ("color 2F");
puts("");
cout<<"1.Transaksi Terakhir"<<endl;
cout<<"2.Cek Kouta"<<endl;
cout<<"3.Cek Skema Tarif"<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P2;		

if (P2==1) { //pertama
system("cls");
system ("color 4F");
puts("");
cout<<"Silahkan tekan *887# untuk mengetahui"<<endl;
cout<<"transaksi terakhir anda."<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P2;
if (P2==9) {
system("cls");
goto MENU1;
}else if (P2==0){
	system("cls");
	goto MENU;
}
}
else if (P2==2){ //Kedua
	system("cls");
system ("color 5F");
puts("");
cout<<"Anda memiliki: 500MB Data. Bonus berbatas"<<endl;
cout<<"waktu, cek scr berkala."<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P2;
if (P2==9) {
system("cls");
goto MENU1;
}else if (P2==0){
	system("cls");
	goto MENU;
}
}
else if (P2==3){ //Ketiga
	system("cls");
	system ("color 5F");
	puts("");
	system("cls");
	cout<<"   *** PERMINTAAN ANDA SEGERA DI PROSES ***"<<endl;
	puts("");
	goto MENU;
	puts("");

}else if(P2==9) {
system("cls");
goto MENU;
}else if (P2==0){
	system("cls");
	goto MENU;
}
}


}


