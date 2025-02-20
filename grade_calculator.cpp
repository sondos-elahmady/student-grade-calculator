#include <iostream>
using namespace std;
#define SIZE 10

int Menu()
{
    int choice;
    cout << "Menu:\n" << "1: Enter grades for students.\n" << "2: Calculate and display the average grade.\n" << "3: Assign a class grade based on the average.\n";
    cin >> choice;
    return choice;
}

void enterGrades(int students[])
{
    cout << "Please input the grades for " << SIZE << " students.\n";
    for (int i = 0; i < SIZE; i++)
        cin >> students[i];
}

float calculateAverage(int students[])
{
    int sum=0;
    for (int i = 0; i < SIZE; i++)
        sum += students[i];
    return (float)sum / SIZE;
}

void assignClassGrade(float avg)
{
    char grade;
    if (avg >= 90)
        grade = 'A';
    else
        if (avg >= 80)
            grade = 'B';
        else
            if (avg >= 70)
                grade = 'C';
            else
                if (avg >= 60)
                    grade = 'D';
                else
                    if (avg < 60)
                        grade = 'F';
    cout << "Class grade is " << grade << endl;
}

int main()
{
    char answer;
    float avg;
    int students[SIZE];
    do
    {
        switch (Menu())
        {
        case 1: enterGrades(students); break;
        case 2: avg = calculateAverage(students); cout << "Average  is " << avg << endl; break;
        case 3: assignClassGrade(avg); break;
        default: cout << "Wrong input please try again.\n"; answer = 'Y'; continue;
        }
        cout << "Do you want to continue? ";
        cin >> answer;
    } while (answer == 'y' || answer == 'Y');
    cout << "Thank You!";
    return 0;
}
