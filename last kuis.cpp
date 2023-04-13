//Buatlah sebuah program yang berisi macro utnuk mencetak bilangan terbesar (bagi yang ber NPM ganjil) atau terkecil (bagi yang ber NPM genap), bilangan tersebut merupakan bilangan 2 digit terakhir (digit ke 9 dan 10) NPM anda masing2.
/*NAMA : ALIYA ZALFA PUTRI
NPM   : 2217051042
KELAS : D
*/


#include <iostream>

using namespace std;

#define MIN(x,y) ((x) < (y) ? (x) : (y))


int main() {

    int x, y;

    cout << "Masukkan dua digit terakhir NPM anda dengan dipisahkan spasi : ";

    cin >> x >> y;

    cout << "Bilangan terkecil dari " <<x<< " dan " <<y<< " adalah : " << MIN(x, y) << endl;

    return 0;

}

// Buatlah sebuah program yang memiliki fungsi rekursif yang mengalikan digit ke 10 (terakhir) NPM anda sebanyak x kali, dimana x merupakan nilai digit ke 9 NPM anda masing2.
#include <iostream>

#include <string>

using namespace std;



int getDigit9(string npm) {     

    return npm[8] - '0';

}

int getDigit10(string npm) {    

    return npm[9] - '0';

}

int multiplyDigit10(int x, int digit10) {     

    if (x == 1) {

        return digit10;

    } else {

        return digit10 * multiplyDigit10(x-1, digit10);

    }

}

int main() {

    string npm;

    int digit9, digit10, result;


    cout << "Masukkan NPM Anda: ";   

    cin >> npm;

    digit9 = getDigit9(npm);

    digit10 = getDigit10(npm);


    result = multiplyDigit10(digit9, digit10);    

    cout << "Hasil perkalian digit ke-10 sebanyak " << digit9 << " kali adalah: " << result << endl;

    return 0;

}
