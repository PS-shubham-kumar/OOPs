# Banking System in C++

A simple menu-driven Banking Management System implemented using Object-Oriented Programming (OOP) concepts in C++. This project demonstrates inheritance, encapsulation, constructors, STL vectors, and a console-based menu.

## ?? Features
- Add employee account
- Add customer account
- Fetch employee details by account number
- Fetch customer details by account number
- Store multiple records using `std::vector`
- Demonstrates class inheritance and method overriding
- User-friendly menu-driven interface

## ??? Project Structure

### Base Class: `BankAccount`
Contains common account-related information:
- `accountNumber`
- `ifscCode` (declared but not used)
- `balance`

Methods:
- `getAccountNumber()`
- `displayInfo()`

### Derived Class: `Employee`
Inherits from `BankAccount` and adds:
- `name`
- `age`
- `designation`

Methods:
- parameterized constructor
- `displayInfo()` override

### Derived Class: `Customer`
Inherits from `BankAccount` and adds:
- `name`
- `age`
- `address`

Methods:
- parameterized constructor
- `displayInfo()` override

## ?? OOP Concepts Used
1. Inheritance
   - `Employee` and `Customer` inherit from `BankAccount`.

2. Encapsulation
   - Data members are stored in private/protected sections and accessed through methods.

3. Constructors
   - Parameterized constructors initialize account data.

4. Function overriding
   - Derived classes override `displayInfo()` to print specific details.

5. STL Vector
   - `std::vector<Employee>` and `std::vector<Customer>` store dynamic lists of records.

## ?? Requirements
- C++ compiler supporting C++11 or later
- Examples: GCC/G++, MinGW, Visual Studio

## ?? How to Compile and Run

### Using g++ on Linux/macOS
```bash
g++ banking_system.cpp -o banking_system
./banking_system
```

### Using g++ on Windows
```powershell
g++ banking_system.cpp -o banking_system.exe
.
banking_system.exe
```

## ?? Menu Options
```
===== Banking System =====
1. Add Employee
2. Add Customer
3. Fetch Employee
4. Fetch Customer
5. Exit
```

## ?? Sample Execution

### Add Employee
```
Enter Account Number: EMP101
Enter Balance: 50000
Enter Name: John
Enter Age: 30
Enter Designation: Manager
Employee Added Successfully!
```

### Add Customer
```
Enter Account Number: CUS101
Enter Balance: 25000
Enter Name: Alice
Enter Age: 28
Enter Address: Hyderabad
Customer Added Successfully!
```

### Fetch Employee
```
Enter Account Number: EMP101
Account Number : EMP101
Balance : 50000
Name : John
Age : 30
Designation : Manager
```

### Fetch Customer
```
Enter Account Number: CUS101
Account Number : CUS101
Balance : 25000
Name : Alice
Age : 28
Address : Hyderabad
```

## ?? Current Limitations
- No permanent storage (file handling or database)
- `ifscCode` is declared but not fully implemented
- Duplicate account numbers are allowed
- No update or delete operations
- Limited input validation

## ?? Future Enhancements
- Add file handling for permanent data storage
- Implement deposit and withdrawal operations
- Validate account numbers and input fields
- Add IFSC code support
- Use `std::map` or hash table for faster lookup
- Add update and delete account options
- Build a GUI with Qt or C++/CLI
- Integrate with a database such as MySQL

## ?? Learning Outcomes
This project helps you understand:
- Classes and objects
- Inheritance
- Constructor usage
- Function overriding
- STL vectors
- Menu-driven program design
- Basic banking application structure

## ????? Author
Shubham Kumar

## ?? License
This project is intended for educational purposes. Feel free to modify and use it for academic practice.
