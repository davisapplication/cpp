#include <iostream>
using namespace std;

int mulaiFaktorial(int angka){
    
    if(angka>1)
    return angka * mulaiFaktorial(angka-1);
    
    else
    return 1;
}

int main(){
    int angka;
    cout << "Angka: "; cin >> angka; cout << endl;
    cout << angka << "!= " << mulaiFaktorial(angka) << endl;
}
