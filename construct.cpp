#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		Mahasiswa(){ 
		cout<<"Hello World";
		}	
};

int main(){
	Mahasiswa Mhs;
}

//Construktor dengan parameter
#include<iostream>
using namespace std;

class Mahasiswa{
	public:
		string nama,npm;
		
		Mahasiswa(strig nama, string b){
			this-> nama = nama;
			npm=b; 
		}
	};
int main(){
	Mahasiswa Mhs ("Reza","2117")
	
	cout<<"Nama : "<<Mhs.nama<<end;
	cout<<"Npm : "<<Mhs.npm;
	
}	

//Setter getter
#include<iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama;
	public : 
	void setNama(string nama){
		this -> nama=nama;
	}	
	string getNama(){
		return nama;
	}
};
int main(){
	Mahasiswa Mhs;
	
	Mhs.setNama("Reza");
	cout<<Mhs.getNama();
}

