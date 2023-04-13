//Tulis sebuah fungsi int max_of_four(int a, int b, int c, int d) yang mengembalikan maksimum dari empat argumen yang diterimanya.

int max_of_four(int a, int b, int c, int d){
   
    if(a<b){
        a= b;
    }
    if(a<c){
        a = c;
    }
    if(a<d){
		a = d;
    }
    return a;
}

//Read  numbers from stdin and print their sum to stdout.
//One line that contains  space-separated integers: a, b, and c.
#include <iostream>
using namespace std;
int main() {

    int a,b,c,sum;
	cin>>a>>b>>c;
	
    sum=a+b+c;
cout<<sum<<endl;
    return 0;
}

//Buat program untuk membaca input dari keyboard. Data inputan ditampung ke dalam tipe variabel yang sesuai.
//Terdiri dari 5 input data a b c d e, yang masing-masing merupakan data dengan tipe integer, long, char, float dan double
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int a;
    long long b;
    char c;
    float d;
    double e;

    cin >> a >> b >> c >> d >> e;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
  	cout << fixed << setprecision(3) << d << endl;
    cout << fixed << setprecision(9) << e << endl; 

    return 0;
}

//Anda akan diberikan array N bilangan bulat dan Anda diminta mencetak bilangan bulat dalam urutan terbalik.
//Baris pertama input berisi N, di mana N adalah banyaknya bilangan bulat. Baris berikutnya berisi N bilangan bulat yang dipisahkan spasi.
#include <iostream>
using namespace std;

int main() {
	int urut,a=0;
	int nilai [4];
	cin>>a;
	
    for(int i=0;i<=a;i++){
    	cin >> nilai[i];
    }
    for(i=0;i<=a;i++){  
	cout<<nilai[i];
	
}
	return 0;
    }

//Buat sebuah fungsi  tanpa return dengan nama bilangan , dimana parameter fungsi berupa sebuah bilangan positif n, fungsi dapat melakukan :
//jika 1 < n < 9, cetak dalam huruf kecil angka yang diberikan (misal satu, dua, tiga, dst)
#include <iostream> 
using namespace std;
 
void bilangan (int n) {
	if (n==1) {
		cout<<"satu" ;
	}
	else if (n==2) {
		cout<<"dua" ;
	}
	else if (n==3) {
		cout<<"tiga";
	}
	else if (n==4) {
		cout<<"empat";
	}
	else if (n==5) {
		cout<<"lima";
	}
	else if (n==6) {
		cout<<"enam";
	}
	else if (n==7) {
		cout<<"tujuh";
	}
	else if (n==8) {
		cout<<"delapan";
	}
	else if (n==9) {
		cout<<"sembilan";
	}
	else if (n>=10) {
		cout<<"Lebih dari 9";
	}
	}

//Read  numbers from stdin and print their sum to stdout.
#include <iostream>
using namespace std;
int main() {

    int a,b,c,sum;
	cin>>a>>b>>c;
	
    sum=a+b+c; 
    cout<<sum<<endl;
    
    return 0;
}
