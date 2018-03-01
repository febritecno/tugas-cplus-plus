#include <iostream>
#include <ctime>
#include <Conio.h>
#include <Windows.h>
using namespace std;
int i,l,s,t,P,a,p,r;
float luas;

void segitiga() {

system ("cls");
		system ("color 2");
		cout<<"PERHITUNGAN LUAS SEGITIGA"<<endl;
			cout<<"Masukan alas =";cin>>a;
			cout<<"Masukan tinggi =";cin>>t;
			luas=(a*t)/2;
			cout<<"jadi hasilnya ="<<luas<<endl;

}


void sangkar() {
system ("cls");
		system ("color 6"); 	
		cout<<"RUMUS LUAS BUJUR SANGKAR"<<endl;
			cout<<"masukan sisi: "; cin>>s;
			cout<<endl;
			luas=s*4;
			cout<<"jadi Bujur Sangkar = "<<luas<<endl;


}


void persegi() { 

			system ("cls");
			system ("color 4");
			cout<<"RUMUS LUAS PERSEGI PANJANG"<<endl;
			cout<<"masukan panjang: "; cin>>p;
			cout<<"masukan lebar: "; cin>>l;
			cout<<endl;
			luas=p*l;
			cout<<"jadi Persegi Panjang = "<<luas<<endl;
}



void lingkaran() {
	system ("cls");
			system ("color 8");
			cout<<"RUMUS LUAS LINGKARAN"<<endl;
			cout<<"masukan jarijari: "; cin>>r;
			cout<<endl;
			luas=22/7*r*r;
			cout<<"jadi lingkaran = "<<luas<<endl;
}



int jajar() {
			system ("cls");
			system ("color 1F");
			cout<<"RUMUS LUAS JAJAR GENJANG"<<endl;
			cout<<"masukan tinggi: "; cin>>t;
			cout<<"masukan alas: "; cin>>a;
			cout<<endl;
			luas=a*t;
			cout<<"jadi Jajar Genjang = "<<luas<<endl;

}


main() {
// current date/time based on current system
   time_t now = time(0);

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Year: "<< 1900 + ltm->tm_year << endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<<  ltm->tm_mday << endl;
   cout << "Time: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;

puts("");
puts("#       MENU       #");
puts("#------------------#");
puts("");
puts("1. Luas Segitiga");
puts("2. Luas Bujur Sangkar");
puts("3. Luas Persegi Panjang");
puts("4. Luas Lingkaran");
puts("5. Luas Jajar genjang");
puts("");
system ("color 5B");
cout<<"Pilih:";cin>>P;
puts("");





if (P==1){
			segitiga();
			
}
			else if (P==2){

			sangkar();

			}

			else if (P==3){

			persegi();
			}

			else if (P==4){
			lingkaran();
			}
			else if (P==5){
				jajar();
			}
			else {

	cout<<"Soorryyy, Masukan angka antara 1 - 5"<<endl;

}
main();

getche();

}