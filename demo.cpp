#include <iostream>
#include "getOS.hpp"
using namespace std;

int main()
{
    cout << "The current operating system is:\n";

    switch (OS)
    {
    case SystemType::Windows:
        cout << "Windows\n";
        break;
    case SystemType::Linux:
        cout << "Linux\n";
        break;
    case SystemType::MacOS:
        cout << "MacOS\n";
        break;
    default:
        cout << "OS COULD NOT BE DETERMINED\n";
        break;
    }

    return 0;
}
