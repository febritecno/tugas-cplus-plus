#include<iostream>
#include <ctime>
using namespace std;
int pilih;


void keluar() {
	system("cls");
system("color B1");
cout<<"Sistem Selesai"<<endl;
system("exit");
}



void aktif1() {
system("cls");
	system("color B1");
	cout<<"LOOPers, Permintaan kamu sedang di"<<endl;
	cout<<"proses. Silahkan tunggu SMS"<<endl;
	cout<<"berikutnya. Terima kasih."<<endl;
	cout<<"1.OK"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==1){
			keluar();
}
}

void infomaxi() {
	system("cls");
	system("color B1");
	cout<<"Paket Data MAXI LOOP kouta 2"<<endl;
	cout<<"GB untuk 30 hari"<<endl;
	cout<<"setiap Bulan"<<endl;
	cout<<"0.home"<<endl;
	cout<<"9.Back"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==0){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
}
}

void aktifmaxi() {
	system("cls");
	system("color B1");
	cout<<"Kamu akan mengaktifkan paket"<<endl;
	cout<<"Data MAXI Loop 2GB/30 hari"<<endl;
	cout<<"harga mulai Rp.49.000? (Lihat"<<endl;
	cout<<"tarif di lokasi kamu pd SMS"<<endl;
	cout<<"konfirmasi)"<<endl;
	cout<<"1.YA"<<endl;
	cout<<"9.Back"<<endl;
	cout<<"0.home"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==1){
		aktif1();
	}else if (pilih==9){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
	}else if (pilih==0){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
}
}

void infomidi() {
	system("cls");
	system("color B1");
	cout<<"Paket Data MIDI LOOP 700"<<endl;
	cout<<"Mb/30 hari (450MB di 3G,"<<endl;
	cout<<"250MB di 3G/2G"<<endl;
	cout<<"0.Home"<<endl;
	cout<<"9.Back"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==0){
			//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
	}else if (pilih==9){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))	
}
}

void aktifmidi() {
	system("cls");
	system("color B1");
	cout<<"Kamu akan mengaktifkan paket"<<endl;
	cout<<"Data MIDI LOOP 700MB/30 hari"<<endl;
	cout<<"harga mulai Rp.25.000? (Lihat"<<endl;
	cout<<"tarif di lokasi kamu pd SMS"<<endl;
	cout<<"konfirmasi)"<<endl;
	cout<<"1.YA"<<endl;
	cout<<"9.Back"<<endl;
	cout<<"0.home"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==1){
		aktif1();
	}else if (pilih==9){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
	}else if (pilih==0){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
}
}


void aktifseven() {
	system("cls");
	system("color B1");
	cout<<"Kamu akan mengaktifkan paket"<<endl;
	cout<<"Data SEVEN Loop 100MB/7 hari"<<endl;
	cout<<"harga mulai Rp.10.000? (Lihat"<<endl;
	cout<<"tarif di lokasi kamu pd SMS"<<endl;
	cout<<"konfirmasi)"<<endl;
	cout<<"1.YA"<<endl;
	cout<<"9.Back"<<endl;
	cout<<"0.Home"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==1){
		aktif1();
	}else if (pilih==9){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
	}else if (pilih==0){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))
}
}

void infoseven() {
	system("cls");
	system("color B1");
	cout<<"Paket Data SEVEN LOOP 100"<<endl;
	cout<<"MB/7 hari (50MB di 3G, 50MB di)"<<endl;
	cout<<"3G/2G)"<<endl;
	cout<<"0.Home"<<endl;
	cout<<"9.Back"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==9){
			//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...));
	}else if (pilih==0){
		//dik, fungsi pemanggilan label gk iso angger bedo class !! ( pikir neh...))	
}
}

void seven() {
	system("cls");
	system("color B4");
	cout<<"PAKET SEVEN 100MB/7HARI"<<endl;
    cout<<"1.Info paket"<<endl;
    cout<<"2.Aktifkan paket"<<endl;
    cout<<"3.Berhenti"<<endl;
    cout<<"4.Cek status"<<endl;
	cout<<"9.Back"<<endl;
	cout<<"0.Home"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==1){
	infoseven();
	}else if (pilih==2){
		aktifseven();
	}else if (pilih==3){
		aktif1();
	}else if (pilih==4){
		aktif1();
}
}

void midi(){
system("cls");
	system("color D0");
	cout<<"PAKET MIDI 700MB/30HARI"<<endl;
    cout<<"1.Info paket"<<endl;
    cout<<"2.Aktifkan paket"<<endl;
    cout<<"3.Berhenti"<<endl;
    cout<<"4.Cek status"<<endl;
	cout<<"0.home"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==1){
	infomidi();
	}else if (pilih==2){
		aktifmidi();
	}else if (pilih==3){
		aktif1();
	}else if (pilih==4){
		aktif1();
}

}


void maxi(){

system("cls");
	system("color E1");
	cout<<"PAKET MAXI 2GB/30HARI"<<endl;
    cout<<"1.Info paket"<<endl;
    cout<<"2.Aktifkan paket"<<endl;
    cout<<"3.Berhenti"<<endl;
    cout<<"4.Cek status"<<endl;
	cout<<"0.home"<<endl;
	cout<<"Masukan Pilihan Menu:";cin>>pilih;
	if (pilih==1){
	infomaxi();			
}else if (pilih==2) {
	aktifmaxi();
}else if (pilih==3) {
	aktif1();
}else if (pilih==4) {
	aktif1();
}

}

	




void main(){
menu:
system("cls");
system("color A9");
cout<<"=============================================="<<endl;
// current date/time based on current system
   time_t now = time(0);

   tm *ltm = localtime(&now);

   // print various components of tm structure.
   cout << "Tahun: "<< 1900 + ltm->tm_year << endl;
   cout << "Bulan: "<< 1 + ltm->tm_mon<< endl;
   cout << "Tanggal: "<<  ltm->tm_mday << endl;
   cout << "Jam: "<< 1 + ltm->tm_hour << ":";
   cout << 1 + ltm->tm_min << ":";
   cout << 1 + ltm->tm_sec << endl;
cout<<"=============================================="<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"      APLIKASI GATEWAY *567*3*1*8#"<<endl;
cout<<"    | PAKET INTERNET LOOP LAINNYA |"<<endl;
cout<<"	  From Telkomsel LOOP"<<endl;
cout<<"         Create @Andika Putra"<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"Paket Internet LOOP Lainnya"<<endl;
cout<<"1.MAXI 2GB/30hr"<<endl;
cout<<"2.MIDI 700MB/30hr"<<endl;
cout<<"3.SEVEN 100MB/7hr"<<endl;
cout<<"4.Exit"<<endl;
cout<<"silahkan pilih menu:";cin>>pilih;
if (pilih==1){
	maxi();		
}else if (pilih==2) {
	midi();
}else if (pilih==3) {
	seven();
}else if (pilih==4){
	keluar();
}

}
