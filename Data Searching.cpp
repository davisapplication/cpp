#include <iostream>
using namespace std;

class pusatData{
    public:
    int jumlahAngka, index[100], angka;
};

class dataTurunan : pusatData{
    public:
    pusatData done;
    int ditemukan = 0;
    
    void selamatDatang(){
        cout << "Searching by Davis App, Starting Application..." << endl;
    }
    
    void mulaiMemasukkan(){
        cout << "Jumlah Angka --> "; cin >> done.jumlahAngka; cout << endl;
        
        for(int i=0;i<done.jumlahAngka;i++){
            cout << "Index ke " << i << " --> ";
            cin >> done.index[i];
        }
        
        cout << "Memasukkan Data Sukses!\n" << endl;
    }
    
    void mulaiMencari(){
        cout << "Angka Yang Dicari --> "; cin >> done.angka; cout << endl;
        
        for(int i=0;i<=done.jumlahAngka;i++){
            if(done.angka==done.index[i]){
            cout << "Angka ditemukan di index ke " << i << endl;
            ditemukan = 1;
            }
            
            else if(ditemukan==0 && i==done.jumlahAngka)
            cout << "Angka tidak ditemukan" << endl;
        }
    }
};


int main(){
    dataTurunan done; done.selamatDatang(); done.mulaiMemasukkan(); 
    done.mulaiMencari();
}
