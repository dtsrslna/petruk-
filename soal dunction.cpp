//Buat fungsi dengan nama jarak untuk menghitung jarak antara dua titik (x1,y1) dan (x2,y2).
//D = [( x2 – x1 )2 + (y2 – y1)2] 1/2
double jarak(double x1,double y1,double x2,double y2) {
  double dx=x2-x1;
  double dy=y2-y1;
  double d =sqrt(dx*dx+dy*dy);
  return d;
}

//Buat fungsi void dengan nama findMax tanpa parameter, fungsi membaca input dari keyboard berupa integer N, dan N data.  Lalu fungsi akan mencetak nilai terbesar dari data yang diinputkan.
void findMax(){
 int n,i;
 cin>>n;
 int maxVal=-1e9; 
    
    for(i=0; i<n; i++) {
     int x;
     cin >> x;
     if (x>maxVal) {
       maxVal = x;
    }
    }
cout<<maxVal<<endl;
}

//Buat fungsi void dengan nama hitungRerata tanpa parameter, fungsi membaca input dari keyboard berupa integer N, dan N data.  Lalu fungsi akan mencetak nilai rata-rata dari data yang diinputkan.
void hitungRerata(){
  int n,x;
  cin>>n;
    double sum=0;
    for (x=0; x<n; x++) {
      double i;
      cin>>i;
      sum+=i;
    }
    double rata_rata=sum/n;
    cout<<rata_rata<<endl; 
}

//Buat fungsi dengan nama fib yang memiliki 1 parameter integer, fungsi ini untuk menghitung bilangan fibonanci  f(n) = f(n-2) + f(n-1)
int fib(int n){
 if (n==0){
  return 0;
 } 
 else if (n==1){
  return 1;
 } 
 else{
  return fib(n-2)+fib(n-1);
 }
}

//Buatlah sebuah fungsi dengan nama circle untuk menghitung luas lingkaran, dengan 1 parameter int. Fungsi ini akan mengembalikan nilai double sebagai nilai luas lingkaran. 
double circle(int r){
  const double phi=3.14;
  double luas=phi*r*r;
  return luas;
}
