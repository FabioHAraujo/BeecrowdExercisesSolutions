#include <iomanip>
#include <iostream>

int main()
{
    int days, cYears=0, cMonths=0;
    std::cin >> days;
    while (days >= 365)
    {
        days -=365;
        cYears++;
    }
    while (days >= 30)
    {
        days -=30;
        cMonths++;
    }

    std::cout << cYears << " ano(s)\n";
    std::cout << cMonths << " mes(es)\n";
    std::cout << days << " dia(s)" << std::endl;

    return 0;
}