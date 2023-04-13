#include<iostream>
using namespace std;

int main(){
	char nama[15];
	char npm[10];
	
	cin.get(nama,15);
	cin.get(npm,10);
	
	cout<<"Nama : "<<nama<<endl;
	cout<<"NPM : "<<npm<<endl;
}

#include<iostream>
using namespace std;

int main(){
	char karakter;
	while(cin.get(karakter)){
		if(karakter == 'a')
		cin.putback('x');
		else
		cout<<karakter;
	}
	
//strlen
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[]={'Z','A','L','F','A','\0'};
	
	cout<str<<endl;
	cout<<strlen(str)<<endl;
}

//strcat
#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char firstName[50]="Aliya zalfa";
	char lastName[50]="Ramadhan";
	char *fullName=strcat(firstName,lastName);
	cout<<fullName;
}

