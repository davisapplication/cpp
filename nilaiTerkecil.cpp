#include <iostream>
using namespace std;

class PusatData{
    public:
    int angka[100]; long int jumlahAngka; long int angkaTerbesar;
    
    void selamatDatang(){
        cout << "<<=== MATH BY DAVISAPP ===>>" << endl;
    }
    
    void masukkanNilai(){
        cout << "Jumlah Angka --> "; cin >> jumlahAngka; 
        cout << endl; cout << "List Angka: " << endl;
        
        for(int a=0;a<jumlahAngka;a++){
            if(a!=jumlahAngka-1){
                cout << "> "; cin >> angka[a]; 
            }
            
            else{
                cout << "> "; cin >> angka[a]; cout << endl;
            }
        }
        
        cout << "Input Data Sukses!" << endl << "\n";
    }
    
    void mulaiPencarian(){
        for(int s=0;s<jumlahAngka;s++){
            long int m1 = angka[s]; long int m2 = angka[0];
            if(m1<m2){
                angkaTerbesar = m1;
            }
        }
        
        cout << "Angka Terkecilnya --> " << angkaTerbesar << endl;
    }
};

int main(){
    PusatData done; done.selamatDatang(); done.masukkanNilai();
    done.mulaiPencarian();
}