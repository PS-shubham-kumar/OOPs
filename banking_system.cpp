#include <iostream>
#include <vector>
using namespace std;
// Base class for Bank Account
class BankAccount {
protected:
    string accountNumber;
    string ifscCode;
    double balance;

public:
    BankAccount() : accountNumber(""), ifscCode(""), balance(0.0) {}

    BankAccount(string accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    void displayInfo() {
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};
// Derived class for Employee
// Inheriting from BankAccount class
class Employee : public BankAccount {
private:
    string name;
    int age;
    string designation;

public:
    Employee() : name(""), age(0), designation("") {}

    Employee(string accNum, double bal, string n, int a, string d)
        : BankAccount(accNum, bal) {
        name = n;
        age = a;
        designation = d;
    }

    void displayInfo() {
        BankAccount::displayInfo();
        cout << "Name           : " << name << endl;
        cout << "Age            : " << age << endl;
        cout << "Designation    : " << designation << endl;
    }
};
// Derived class for Customer
// Inheriting from BankAccount class

class Customer : public BankAccount {
private:
    string name;
    int age;
    string address;

public:
    Customer() : name(""), age(0), address("") {}

    Customer(string accNum, double bal, string n, int a, string ad)
        : BankAccount(accNum, bal) {
        name = n;
        age = a;
        address = ad;
    }

    void displayInfo() {
        BankAccount::displayInfo();
        cout << "Name           : " << name << endl;
        cout << "Age            : " << age << endl;
        cout << "Address        : " << address << endl;
    }
};

int main() {

    vector<Employee> employees;
    vector<Customer> customers;
    // Menu-driven interface
    int choice;

    do {
        cout << "\n===== Banking System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Add Customer\n";
        cout << "3. Fetch Employee\n";
        cout << "4. Fetch Customer\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

        case 1: {
            string accNo, name, designation;
            int age;
            double balance;

            cout << "Enter Account Number: ";
            cin >> accNo;

            cout << "Enter Balance: ";
            cin >> balance;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Designation: ";
            cin >> designation;

            // Create Employee object and add to vector

            Employee emp(accNo, balance, name, age, designation);
            employees.push_back(emp);

            cout << "\nEmployee Added Successfully!\n";
            break;
        }

        case 2: {
            string accNo, name, address;
            int age;
            double balance;

            cout << "Enter Account Number: ";
            cin >> accNo;

            cout << "Enter Balance: ";
            cin >> balance;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Address: ";
            cin >> address;
            // Create Customer object and add to vector
            Customer cust(accNo, balance, name, age, address);
            customers.push_back(cust);

            cout << "\nCustomer Added Successfully!\n";
            break;
        }
        // Fetch Employee and Customer Information

        case 3: {
            string accNo;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> accNo;

            for (auto &emp : employees) {
                if (emp.getAccountNumber() == accNo) {
                    emp.displayInfo();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee Not Found!\n";

            break;
        }

        case 4: {
            string accNo;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> accNo;

            for (auto &cust : customers) {
                if (cust.getAccountNumber() == accNo) {
                    cust.displayInfo();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Customer Not Found!\n";

            break;
        }

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}