#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
    string A, B, C;
    cin >> A >> B >> C;
    if (A=="vertebrado")
    {
        if (B=="ave")
        {
            if (C=="carnivoro")
            {
                cout << "aguia\n";
            }
            else if (C=="onivoro")
            {
                cout << "pomba\n";
            }
        }
        else if (B=="mamifero")
        {
            if (C=="onivoro")
            {
                cout << "homem\n";
            }
            else if (C=="herbivoro")
            {
                cout << "vaca\n";
            }
        }
    }
    else if (A=="invertebrado")
    {
        if (B=="inseto")
        {
            if (C=="hematofago")
            {
                cout << "pulga\n";
            }
            else if (C=="herbivoro")
            {
                cout << "lagarta\n";
            }
        }
        else if (B=="anelideo")
        {
            if (C=="hematofago")
            {
                cout << "sanguessuga\n";
            }
            else if (C=="onivoro")
            {
                cout << "minhoca\n";
            }
        }
    }
    
    return 0;
}