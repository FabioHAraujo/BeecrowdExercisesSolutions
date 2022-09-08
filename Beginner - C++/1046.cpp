#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
    int hora1, hora2, count;
    cin >> hora1 >> hora2;
    if (hora1==hora2)
    {
        count=24;
    }
    else
    {
        while (hora1!=hora2)
        {
            hora1++;
            count++;
            if (hora1==24)
            {
                hora1=0;
            }
        }
    }
    cout << "O JOGO DUROU " << count << " HORA(S)" << endl;

    return 0;
}