#include<iostream>
using namespace std;

struct Mahasiswa{
    string nama, npm;
};

int main(){
    Mahasiswa Mhs;
    
    cin>>Mhs.nama;
    cin>>Mhs.npm;
    
    cout<<Mhs.nama << " " <<Mhs.npm;
}

#include<iostream>
using namespace std;

class Mahasiswa{
	public:
    string nama, npm;
};

int main(){
    Mahasiswa Mhs;
    
    cin>>Mhs.nama;
    cin>>Mhs.npm;
    
    cout<<Mhs.nama << " " <<Mhs.npm;
}

#include<iostream>
using namespace std;

class Mahasiswa{
	public:
    string nama, npm;
    
    void Perkenalan(){
    	cout<<"Nama : "<<nama<<endl;
    	cout<<"NPM : "<<npm;
	}
};

int main(){
    Mahasiswa Mhs;
    
    cin>>Mhs.nama>>Mhs.npm;
    
    Mhs.Perkenalan();
}
Penjelasan Access Specifier
1. Private: data member atau atribut tidak dapat di akses atau dilihat dari luar kelas
itu sendiri.
2. Public: data member atau atribut dapat diakses atau dilihat dari luar kelas itu
sendiri
3. Protected: data member atau Atribut tidak dapat diakses dari luar class, namun
mereka dapat diakses pada class turunannya atau inherited class nya.
