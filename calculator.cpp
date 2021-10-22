#include <iostream>

using namespace std;

int main() {
    float satu,dua;
    int satuTemp,duaTemp;
    char notasi;
    cout<<"\nMasukkan angka pertama: ";
    cin>>satu;
    cout<<"\nMasukkan notasi: ";
    cin>>notasi;
    cout<<"\nMasukkan angka kedua: ";
    cin>>dua;
    satuTemp=satu;
    duaTemp=dua;
    switch(notasi){
        case '+':
            cout<<"Hasil pertambahan dari "<<to_string(satuTemp)<<" dengan "<<to_string(duaTemp)<<" adalah "<<to_string(satu+dua);
            break;
        case '-':
            cout<<"Hasil pengurangan dari "<<to_string(satuTemp)<<" dengan "<<to_string(duaTemp)<<" adalah "<<to_string(satu-dua);
            break;
        case 'x':
        case 'X':
        case '*':
            cout<<"Hasil perkalian dari "<<to_string(satuTemp)<<" dengan "<<to_string(duaTemp)<<" adalah "<<to_string(satu*dua);
            break;
        case '/':
            cout<<"Hasil pembagian dari "<<to_string(satuTemp)<<" dengan "<<to_string(duaTemp)<<" adalah "<<to_string(satu/dua);
            break;
        case '%':
            cout<<"Sisa pembagian dari "<<to_string(satuTemp)<<" dengan "<<to_string(duaTemp)<<" adalah "<<to_string(satuTemp%duaTemp);
            break;
    }
    return 0;
}
