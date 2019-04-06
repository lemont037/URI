#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int qttFisMon(double* valueAux, double FMValue){
    int qttFM = 0;
    while(*valueAux - FMValue >= 0){
        qttFM++;
        *valueAux -= FMValue;
        if(*valueAux >= 0 and *valueAux < 0.01)
            break;
    }
    return qttFM;
}

int main(int argc, char const *argv[])
{
    double value, valueAux;
    double notes[] = {100,50,20,10,5,2};
    double coins[] = {1,0.50,0.25,0.10,0.05,0.01};
    int sizeNotes = (sizeof(notes)/sizeof(*notes));
    int sizeCoins = (sizeof(coins)/sizeof(*coins));

    cin >> value;
    valueAux = value;

    cout << "NOTAS:" << endl;
        for(int i = 0; i < sizeNotes; i++)
            cout << fixed << setprecision(2) << qttFisMon(&valueAux,notes[i]) << " nota(s) de R$ " << notes[i] << endl;
    cout << "MOEDAS:" << endl;
        for(int i = 0; i < sizeCoins; i++)
            cout << fixed << setprecision(2) << qttFisMon(&valueAux,coins[i]) << " moeda(s) de R$ " << coins[i] << endl;
    return 0;
}
