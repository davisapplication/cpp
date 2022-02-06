#include <iostream>
using namespace std;

int main(){
    int angka, hasil;
    
    cout << "Angka Yang Dipilih: "; cin >> angka; cout << endl;
    
    hasil = 1;
    for(int i=1;i<=angka;i++){
        hasil = hasil * i;
    }
    
    cout << angka << "!= " << hasil << endl;
}
