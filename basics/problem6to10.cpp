#include <iostream>
#include <string>
using namespace std;

int main()
{

    // 6 . Write a program to input a character from the user and print its ASCII code
    cout << " // Write a program to input a character from the user and print its ASCII code //" << endl;
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout<<endl;

    cout << "ASCII code of '" << ch << "' is " << int(ch) << endl;

    // 7 . Write a program to input an ASCII code from the user and print its corresponding character.
    cout << "// Write a program to input an ASCII code from the user and print its corresponding character. // " << endl;

    int asciiCode;
    cout << "Enter an ASCII code: ";
    cin >> asciiCode;

    cout << "Character for ASCII code " << asciiCode << " is '" << char(asciiCode) << "'" << endl;
    cout<<endl;

    // 8. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

    cout << "// Write a program to input three characters from the user and display characters with their corresponding ASCII codes. " << endl;

    char ch1, ch2, ch3;
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;

    cout << ch1 << " -> " << int(ch1) << endl;
    cout << ch2 << " -> " << int(ch2) << endl;
    cout << ch3 << " -> " << int(ch3) << endl;
    cout<<endl;

    /* 9 .  WAP to take date as an input in below given format and
            convert the date format and display the result as given
            below.
            User Input date format – “DD/MM/YYYY” (27/11/2022)
            Output format – “Day – DD , Month – MM , Year – YYYY”
            (Day – 27, Month – 07, Year – 2022) */

    cout<<" // WAP to take date as an input in below given format andconvert the date format and display the result as givenbelow.User Input date format – “DD/MM/YYYY” (27/11/2022)Output format – “Day – DD , Month – MM , Year – YYYY”(Day – 27, Month – 07, Year – 2022) "<<endl;
    string date;
    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> date;

    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 4);

    cout << "Day  " << day << ", Month  " << month << ", Year  " << year << endl;

    // WAP to take time as an input in below given format and
    // convert the time format and display the result as given
    // below.
    // User Input date format – “HH:MM”
    cout<< endl;

    cout << " // WAP to take time as an input in below given format and convert the time format and display the result as given  below.  User Input date format – “HH:MM” " << endl;
    cout<<endl;
    string time;
    cout << "Enter time in HH:MM format: ";
    cin >> time;

    // Extract hours and minutes
    string hours = time.substr(0, 2);
    string minutes = time.substr(3, 2);

    // Display in readable format
    cout << "Hours – " << hours << ", Minutes – " << minutes << endl;

    return 0;
}
