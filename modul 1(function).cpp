//struktur function
#include<iostream>
using namespace std;
int tambah(int a,int b){
	return a+b;
}
int main(){
	int x=5, y=7, hasil;
	hasil=tambah (x,y);
	//menampilkan hasil
	cout<<"hasil penjumlahan"<<x<< "dan" <<y<<"adalah"<<hasil<<endl<<endl;
	return 0;
}

//contoh struktur fungsi dalam c++
int tambah (int a, int b){
	int hasil = a + b;
	return hasil;
}

//contoh struktur prosedur dalam c++
void tampilkan_nama(string nama){
	cout<< "nama saya adalah" << nama <<endl;
}
//Buat fungsi dengan nama fungsi `luasLingkaran` bertipe data `double` dan
//memiliki parameter r sebagai penampung nilai jari-jari lingkaran bertipe `double`.

#include<iostream>
#include<cmath>
using namespace std;
double luasLingkaran(double r){
	double pi= m_pi;
	return pi*r*r;	
}

//Buat program meminta inputan jari-jari dari lingkaran. Lalu buat r sebagai
//argumen dari fungsi luasLingkaran
#include<iostream>
#include<cmath>
using namespace std;
double luasLingkaran(double r){
	double pi= m_pi;
	return pi*r*r;	
}
int mainI(){
	double r;
	cin>>r;
	cout<<"luas lingkaran"<<luas lingkaran(r);
	return 0;
}

//Buat program meminta inputan nama dan npm lalu buat nama dan npm sebagai
//argument dari prosedur absen.
int main(){
	string nama;
	int npm;
	
	getline(cin, nama);
	cin>>npm;
	absen(name, npm);
	
	return 0;
}
}

