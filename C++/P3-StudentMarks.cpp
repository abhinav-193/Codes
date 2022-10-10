#include <iostream>
using namespace std;

class Student
{
public:
    char name[20];
    int roll, age;

    void getDetails()
    {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter student's age: ";
        cin >> age;
    }

    void displayDetails()
    {
        cout << "\nStudent Details:";
        cout << "\nName: " << name << "\nRoll number: " << roll << "\nAge: " << age;
    }
};

class Test : public Student
{
public:
    int marks[5];

    void getDetails()
    {
        Student :: getDetails();
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks in subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayDetails()
    {
        Student :: displayDetails();
        cout << "\n\nMarks obtained:";
        for (int i = 0; i < 5; i++)
            cout << "\nMarks in subject " << i + 1 << ": " << marks[i];
    }
};

class Marks : public Test
{
    public: 

    int total_marks = 0;
    float total_percentage;

    void showMarks()
    {
        for (int i = 0; i < 5; i++)
            total_marks += marks[i];
        total_percentage=((float)total_marks/500)*100;
        cout << "Total marks:" << total_marks << "\nTotal percentage: " << total_percentage << "%" << endl;
    }
};

int main()
{
    Marks ob;
    ob.getDetails();
    ob.showMarks();
    return 0;
}
