#include <iostream>
#include <iomanip>

using std::cin,
      std::cout,
      std::endl,
      std::fixed,
      std::setprecision;

int main(int argc, char const *argv[])
{
    double n1, n2, n3, n4, nX, avg;

    cin >> n1
        >> n2
        >> n3
        >> n4;

    avg = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    cout << fixed << setprecision(1) << "Media: " << avg << endl;
    
    if(avg >= 7)
        cout << "Aluno aprovado." << endl;
    else if(avg < 5)
        cout << "Aluno reprovado." << endl;
    else{
        cout << "Aluno em exame." << endl;
        
        cin >> nX;
        cout << fixed << setprecision(1) << "Nota do exame: " << nX << endl;
        
        avg = (avg+nX)/2;
        
        if(avg >= 5)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        
        cout << fixed << setprecision(1) << "Media final: " << avg << endl;
    }
    return 0;
}
