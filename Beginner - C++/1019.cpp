#include <iomanip>
#include <iostream>

int main()
{
    int seconds, cHour=0, cMin=0;
    std::cin >> seconds;
    while (seconds >= 3600)
    {
        seconds -=3600;
        cHour++;
    }
    while (seconds >= 60)
    {
        seconds -=60;
        cMin++;
    }

    std::cout << cHour << ":" << cMin << ":" << seconds << std::endl; 

    return 0;
}