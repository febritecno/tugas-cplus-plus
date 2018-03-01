//---------------------------
//Script by febrian dwi putra
//---------------------------

#include <iostream>
#include <Conio.h>
#include <Windows.h>
using namespace std;
int P,P1,P2,P3,P4;



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
	puts("");
	cout<<"  +++++++++++++++++++++++++++++++++"<<endl;
	puts("");
	cout<<"  + *** KONTEN SEGERA DI KIRIM *** +"<<endl;
	puts("");
	cout<<"  +++++++++++++++++++++++++++++++++"<<endl;
	puts("");
	puts("");
	puts("======================================");
	goto MENU;
}else if (P1==9) {
system("cls");
goto MENU;
}else {
	puts("");
	system("cls");
	cout<<"INPUT SALAH !!"<<endl;
	puts("");
	system("exit");
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
MENU2:
system("cls");
system ("color 5F");
puts("");
cout<<"1.Cek kouta internet"<<endl;
cout<<"2.Cek kouta telpon"<<endl;
cout<<"3.Cek kouta sms"<<endl;
cout<<"4.Cek kouta lainnya"<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P3;
if (P3==1){
	system("cls");
	puts("");
	system ("color 3B");
cout<<"Maaf anda tidak memiliki kouta"<<endl;
cout<<"internet."<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P3;
if (P3==9) {
system("cls");
goto MENU2;
}else if (P3==0){
	system("cls");
	goto MENU;
}

}else if (P3==2){
	system("cls");
	puts("");
	system ("color 3B");
cout<<"Maaf anda tidak memiliki kouta"<<endl;
cout<<"telpon."<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P3;
if (P3==9) {
system("cls");
goto MENU2;
}else if (P3==0){
	system("cls");
	goto MENU;

}
}else if (P3==3){
	system("cls");
	puts("");
	system ("color 3B");
cout<<"Maaf anda tidak memiliki kouta"<<endl;
cout<<"sms."<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P3;
if (P3==9) {
system("cls");
goto MENU2;
}else if (P3==0){
	system("cls");
	goto MENU;


}
}else if (P3==4){
	system("cls");
	puts("");
	system ("color 3B");
cout<<"Maaf anda tidak memiliki kouta"<<endl;
cout<<"lainnya."<<endl;
puts("");
cout<<"9.Back"<<endl;
cout<<"0.Home"<<endl;
puts("");
cout<<"# ";cin>>P3;
if (P3==9) {
system("cls");
goto MENU2;
}else if (P3==0){
	system("cls");
	goto MENU;
}


}else if (P3==9) {
system("cls");
goto MENU1;
}else if (P3==0){
	system("cls");
	goto MENU;

}

}

else if (P2==3){ //Ketiga
	system("cls");
	system ("color 5F");
	puts("");
	system("cls");
	puts("");
	cout<<"  ++++++++++++++++++++++++++++++++"<<endl;
	puts("");
	cout<<"  + *** PERMINTAAN DI PROSES *** +"<<endl;
	puts("");
	cout<<"  ++++++++++++++++++++++++++++++++"<<endl;
	puts("");
	puts("");
	puts("======================================");
	goto MENU;
	puts("");

}else if(P2==9) {
system("cls");
goto MENU;
}else if (P2==0){
	system("cls");
	goto MENU;
}
}else {
	puts("");
	system("cls");
	cout<<"INPUT SALAH !!"<<endl;
	puts("");
	system("exit");
	goto MENU;

}
cout<<"KOMFIRMASI TERKIRIM"<<endl;
system("exit");
}

