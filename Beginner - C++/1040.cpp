#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
    float n1, n2, n3, n4, media, nRec;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2+n2*3+n3*4+n4)/10;
    if (media >= 7.0)
    {
        cout << fixed << setprecision(1) << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    }
    else if (media >= 5.0 and media <= 6.9)
    {
        cin >> nRec;
        cout << fixed << setprecision(1) << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cout << fixed << setprecision(1) << "Nota do exame: " << nRec << endl;
        media = (media+nRec)/2;
            if (media >=5.0)
            {
                cout << "Aluno aprovado." << endl;
                cout << fixed << setprecision(1) << "Media final: " << media << endl; 
            }
            else
            {
                cout << fixed << setprecision(1) << "Media: " << media << endl;
                cout << "Aluno reprovado." << endl;
                cout << fixed << setprecision(1) << "Media final: " << media << endl;
            }
    }
    else if (media <5.0)
    {
        cout << fixed << setprecision(1) << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    }
    

    return 0;
}