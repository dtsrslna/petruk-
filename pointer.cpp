/*Sebuah pointer adalah variabel yang nilainya adalah alamat dari variabel lain, yaitu alamat
langsung dari lokasi memori. Seperti variabel atau konstanta lainnya, Anda harus
mendeklarasikan sebuah pointer sebelum menggunakannya untuk menyimpan alamat
variabel apapun.*/

//Penggunaan Pointer dengan Array

//struktur function
#include<iostream>
using namespace std;
int main(){
	int arr[5] = {10,20,30,40,50};
	int *ptr = arr;
	
	for(int i = 0;, i<5; i++){
		cout<<"value of arr[" << i<< "]" = << *ptr << endl;
		ptr++;
	}
	return 0;
	
}

//new
int *ip;
double *dp;
float *fp;
char *cr;


