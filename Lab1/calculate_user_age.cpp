// Lab 1_1

#include <string> //Pre-processor directive required for Strings
#include <iostream> //Pre-processor directive
using namespace std;

int main()
{
    int CurrentYear;
    string Name;
    int YearOfBirth, Age;

    cout << "Please enter your first name:";
    cin >> Name;

    cout << "Please enter your year of birth: ";
    cin >> YearOfBirth;

    cout << "Please enter your CurrentYear : ";
    cin >> CurrentYear;

    Age = CurrentYear - YearOfBirth;

    cout << "Your name: " << Name << endl;
    cout << "Your age is: " << Age << " years.";

    return 0;
}