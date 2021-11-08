#include <iostream>
using namespace std;

class PusatData{
    public:
    int tinggiPersegi;
    
    void selamatDatang(){
        cout << "<<=== MATH BY DAVISAPP ===>>" << endl;
        cout << "Tinggi Persegi --> "; cin >> tinggiPersegi; cout << endl << "\n";
    }
    
    void mulaiMembuat(){
        
        cout << "\n";
        for(int a=0;a<tinggiPersegi;a++){
            
            int m1 = (1/5) * tinggiPersegi;
            
            if(tinggiPersegi <= 5){
            m1 = tinggiPersegi/tinggiPersegi;
            
            for(int i=0;i<tinggiPersegi + m1;i++){
                cout << " *";
              }
            }
            
            else if(tinggiPersegi > 5 && tinggiPersegi <= 10){
            m1 = tinggiPersegi/tinggiPersegi + 1;
            
            for(int i=0;i<tinggiPersegi + m1;i++){
                cout << " *";
              }
            }
            
            else if(tinggiPersegi > 10 && tinggiPersegi <= 15){
            m1 = tinggiPersegi/tinggiPersegi + 2;
            
            for(int i=0;i<tinggiPersegi + m1;i++){
                cout << " *";
              }
            }
            
            else if(tinggiPersegi > 15 && tinggiPersegi <= 20){
            m1 = tinggiPersegi/tinggiPersegi + 3;
            
            for(int i=0;i<tinggiPersegi + m1;i++){
                cout << " *";
              }
            }
            
            else if(tinggiPersegi > 20 && tinggiPersegi <= 25){
            m1 = tinggiPersegi/tinggiPersegi + 4;
            
            for(int i=0;i<tinggiPersegi + m1;i++){
                cout << " *";
              }
            }
            
            else if(tinggiPersegi > 25 && tinggiPersegi <= 30){
            m1 = tinggiPersegi/tinggiPersegi + 5;
            
            for(int i=0;i<tinggiPersegi + m1;i++){
                cout << " *";
              }
            }
            
            else if(tinggiPersegi > 30){
            m1 = tinggiPersegi/tinggiPersegi + 6;
            
            for(int i=0;i<tinggiPersegi + m1;i++){
                cout << " *";
              }
            }
            
            cout << endl;
        }
        /*
 * * * * * *
 * * * * * * 
 * * * * * *
 * * * * * * 
 * * * * * *
 */
    }

    
};

int main(){
    PusatData done;
    string memulai;
    
    do{
    done.selamatDatang(); done.mulaiMembuat();
    cout << endl << "Apakah Anda Ingin Mulai Ulang? (Ya/Tidak) --> ";
    cin >> memulai; cout << "\n" << endl;
    }while(memulai=="Ya");
    
    if(memulai == "Ya"){
        done.selamatDatang(); done.mulaiMembuat();
    }
    
    else if(memulai == "Tidak"){
        cout << "Baik, Terimakasih Karena Telah Menggunakan ^_^" << endl;
        cout << "Salam Hormat, Davis App" << endl;
      }
}