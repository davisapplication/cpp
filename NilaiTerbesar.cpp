#include <iostream>
using namespace std;

class pusatData{
    public:
    int jumlahAngka, index[10], num;
    
    void mulaiAplikasi(){
        cout << "Application by Davis  App" << endl;
        cout << "Jumlah Angka --> "; cin >> jumlahAngka; cout << endl;
        
        for(int i=0;i<jumlahAngka;i++){
            cout << "Angka ke " << i+1 << " --> "; cin >> index[i]; cout << endl; 
        }
        
        cout << "Memasukkan Data Sukses!" << endl;
        
        
        //ini untuk mencari yang terbesar
        //jika ingin mencari yang terkecil, < diubah menjadi >
        
        num = index[0];
        for(int p=0;p<jumlahAngka;p++){
            if(num < index[p])
            num = index[p];
        }
            
        cout << "Angka Terbesar --> " << num << endl;
    }
};

int main(){
    pusatData done; done.mulaiAplikasi();
}
