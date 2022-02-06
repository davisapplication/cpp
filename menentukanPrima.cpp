#include <iostream>
using namespace std;

int main(){
    int angkaDipilih; 
    cout << "Angka Yang Dipilih --> "; cin >> angkaDipilih; cout << endl;
    
    if(angkaDipilih%2==0 || angkaDipilih%3==0){
    cout << angkaDipilih << " bukan angka Prima" << endl;
    }
    
    else{
        if(angkaDipilih!=1)
        cout << angkaDipilih << " adalah angka Prima" << endl;
        
        else
        cout << angkaDipilih << " bukan angka Prima" << endl;
    }
}
