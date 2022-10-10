#include <iostream>
using namespace std;
#define MIN_BALANCE 3000
#define MAX_OVERDRAFT 5000

class Account
{
public:
    int acc_number;
    char name[20];
    float balance = 0;
    void depositAmount()
    {
        float deposit;
        cout << "\nEnter amount to be deposited: ";
        cin >> deposit;
        balance += deposit;
        cout << "Amount of Rs." << deposit << " has been successfully deposited " << endl;
        ;
    }
    void showInfo()
    {
        cout << "\nAccount Number: " << acc_number;
        cout << "\nCustome Name: " << name;
        cout << "\nCurrent Balance: Rs." << balance << endl;
    }
};

class Savings : public Account
{
public:
    void getInfo()
    {
        cout << "\nEnter name of customer: ";
        cin >> name;
        cout << "Enter customer's account number: ";
        cin >> acc_number;
    }

    void withdrawAmount()
    {
        float withdraw;
        cout << "\nEnter amount to be withdrawn: ";
        cin >> withdraw;
        if (balance - withdraw < MIN_BALANCE)
        {
            cout << "Withdrawal not possible as amount in balance would fall behind the mimnimum balance amount" << endl;
            return;
        }
        balance -= withdraw;
        cout << "Amount of Rs." << withdraw << " has been withdrawn successfully " << endl;
    }

    void operations()
    {
        int ch = 1;
        while (ch)
        {
            cout << "\nChoose from the following operations that you want to perform on your Savings Account";
            cout << "\n1-Deposit Amount\n2-Withdraw Amount\n3-Display Information\n0-Exit";
            cout << "\nEnter choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                depositAmount();
                break;
            case 2:
                withdrawAmount();
                break;
            case 3:
                showInfo();
                break;
            case 0:
                cout << "Exited program";
                break;
            default:
                cout << "Invalid option";
                break;
            }
        }
    }
};

class Current : public Account
{
public:
    float curr_overdraft = 0;

    void getInfo()
    {
        cout << "\nEnter name of customer: ";
        cin >> name;
        cout << "Enter customer's account number: ";
        cin >> acc_number;
    }

    void showInfo()
    {
        Account ::showInfo();
        if (curr_overdraft)
            cout << "Overdraft amount: Rs." << curr_overdraft << endl;
    }

    void withdrawAmount()
    {
        if (curr_overdraft >= MAX_OVERDRAFT)
        {
            cout << "\nOverdraft has reached maximum amount permissible. Withdrawak nor possible." << endl;
            return;
        }
        float withdraw;
        cout << "\nEnter amount to be withdrawn: ";
        cin >> withdraw;
        if (withdraw > balance)
        {
            curr_overdraft += withdraw - balance;
            balance = 0;
            cout << "Amount of Rs." << curr_overdraft << " is now pending in overdraft " << endl;
            return;
        }
        balance -= withdraw;
        cout << "Amount of Rs." << withdraw << " has been withdrawn successfully " << endl;
    }

    void repayOverdraft()
    {
        if (curr_overdraft == 0)
        {
            cout << "\nThere is currently no overdraft to be repaid" << endl;
            return;
        }
        float repay;
        cout << "\nEnter amount to be repaid into overdraft: ";
        cin >> repay;
        if (repay > curr_overdraft)
        {
            balance += repay - curr_overdraft;
            curr_overdraft = 0;
            cout << "Overdraft has been completely repaid. Current amount in balance is " << balance << endl;
            return;
        }
        curr_overdraft -= repay;
        cout << "Current overdraft amount now stands as Rs." << curr_overdraft << endl;
        if (!curr_overdraft)
            cout << "Overdraft has been completely repaid." << endl;
    }

    void operations()
    {
        int ch = 1;
        while (ch)
        {
            cout << "\nChoose from the following operations that you want to perform on your Current Account";
            cout << "\n1-Deposit Amount\n2-Withdraw Amount\n3-Display Information\n4-Repay Overdraft\n0-Exit";
            cout << "\nEnter choice: ";
            cin >> ch;
            switch (ch)
            {
            case 1:
                depositAmount();
                break;
            case 2:
                withdrawAmount();
                break;
            case 3:
                showInfo();
                break;
            case 4:
                repayOverdraft();
                break;
            case 0:
                cout << "Exited program";
                break;
            default:
                cout << "Invalid option";
                break;
            }
        }
    }
};

int main()
{
    int c = 0;
    cout << "Choose account type (1-Savings, 2-Current): ";
    cin >> c;
    if (c == 1)
    {
        Savings obS;
        obS.getInfo();
        obS.operations();
    }
    else if (c == 2)
    {
        Current obC;
        obC.getInfo();
        obC.operations();
    }
    else
        cout << "Invalid input";
    return 0;
}
