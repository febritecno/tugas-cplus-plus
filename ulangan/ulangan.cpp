#include <iostream>
#include <conio.h>
using namespace std;
int i;
void main() {
puts("");
puts("# PROGRAM DARI FEBRIAN #");
puts("#----------------------#");
puts("");
cout<<"+MASUKAN SUHU:";cin>>i;
puts("");
if(i>1000){
	cout<<"======> Terbakar"<<endl;
} else if (i>100){
	cout<<"======> Sangat panas sekali"<<endl;
} else if (i>35){
	cout<<"======> Panas"<<endl;
} else if (i>20){
	cout<<"======> Sejuk"<<endl;
} else if (i>0){
	cout<<"======> Dingin"<<endl;
} else if (i<0){
	cout<<"======> Beku"<<endl;
} else {
	cout<<"ERROR"<<endl;
}

getche();
}