#include <iostream>
using namespace std;

int main() {
    int score;

    // Input score
    cout << "Enter the student's score (0-100): ";
    cin >> score;

    if(score >= 90 && score <= 100)
        cout << "Grade: A" << endl;
    else if(score >= 80)
        cout << "Grade: B" << endl;
    else if(score >= 70)
        cout << "Grade: C" << endl;
    else if(score >= 60)
        cout << "Grade: D" << endl;
    else if(score >= 0)
        cout << "Grade: F" << endl;
    else
        cout << "Invalid score!" << endl;

    return 0;
}
