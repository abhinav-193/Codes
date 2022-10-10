#include <iostream>
using namespace std;

class Employee
{
public:
    char name[20];
    int id; 
    float salary;
};

class Regular : public Employee
{
public:
float DA, HRA;
int basic_salary;

    void getInfo()
    {
        cout << "\nEnter name of regular employee: ";
        cin >> name;
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter basic salary: ";
        cin >> basic_salary;
        DA = 0.8 * (float)basic_salary;
        HRA = 0.1 * (float)basic_salary;
        salary = basic_salary + DA + HRA;
    }

    void printInfo()
    {
        cout << "\nName: " << name << "\nID: " << id << "\nTotal salary: " << salary << endl;
    }
};

class Part_Time : public Employee
{
public:
    float pay_per_hour;
    int hours;

    void getInfo()
    {
        cout << "\nEnter name of part-time employee: ";
        cin >> name; 
        cout << "Enter id: ";
        cin >> id;
        cout << "\nEnter pay per hour: ";
        cin >> pay_per_hour;
        cout << "Enter number of hours put in: ";
        cin >> hours;
        salary = pay_per_hour*hours;
    }

    void printInfo()
    {
        cout << "\nName: " << name << "\nID: " << id << "\nTotal salary: " << salary << endl;
    }
};

int main()
{
    Regular ob1;
    ob1.getInfo();
    ob1.printInfo();

    Part_Time ob2;
    ob2.getInfo();
    ob2.printInfo();
    return 0;
}
