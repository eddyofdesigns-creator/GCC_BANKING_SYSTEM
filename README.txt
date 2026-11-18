
# GCC BANKING SYSTEM
### Introduction to Programming | NQF Level 4

**Institution:** Gauteng City College (GCC)  
**Lecturer:** Mr Owami  
**Learner:** Edward Tafadzwa Jichichi  
**Assignment:** Banking System in C++  
**Submission Date:** 19 November 2026  
**Programming Language:** C++

---

## Student Information and Project Links

**GitHub Profile:** [eddyofdesigns-creator](https://github.com/eddyofdesigns-creator)

**LinkedIn Profile:** [Edward T. Jichichi](https://www.linkedin.com/in/edward-t-jichichi-578806260/)

**Project Repository:** [GCC_BANKING_SYSTEM](https://github.com/eddyofdesigns-creator/GCC_BANKING_SYSTEM)

---

## 1. Introduction

The GCC Banking System is a simple command-line banking application developed using C++. The project was created as part of the Introduction to Programming NQF Level 4 assignment at Gauteng City College.

The purpose of the system is to demonstrate how basic banking operations can be performed using programming concepts such as functions, decision-making statements, loops, variables and input validation.

The system allows registered users to log in using their account numbers and PINs. After successful login, users can deposit money, withdraw money, send cash to other accounts and check their account balances.

The application uses a menu-driven system that allows users to select different banking operations.

## 2. Project Objectives

The main objectives of this project are:

- To develop a working banking application using C++.
- To demonstrate the use of functions in programming.
- To apply decision-making statements such as if, else and switch.
- To demonstrate the use of loops to repeat program instructions.
- To practise input validation and error handling.
- To manage multiple user accounts using variables.
- To perform basic banking transactions correctly.

## 3. Technologies and Tools Used

The following technologies and development tools were used to create and document the GCC Banking System.

| Technology / Tool | Description |
|:---|:---|
| **C++** | Used to develop the banking application and implement its programming logic. |
| **Code::Blocks IDE** | Used to write, edit, compile and test the C++ source code. |
| **GCC Compiler** | Used to compile the C++ program into an executable application. |
| **GitHub** | Used to host the project source code and make it accessible online. |
| **Notepad** | Used to create and edit the project documentation. |

## 4. System Features

The banking application contains the following features:

### 4.1 User Login

Users must enter their account number and PIN before accessing the banking menu. The system allows a maximum of three login attempts.

### 4.2 Deposit Money

Users can deposit money into their accounts. The system checks that the amount entered is greater than zero before updating the account balance.

### 4.3 Withdraw Money

Users can withdraw money from their accounts. The system checks whether the withdrawal amount is valid and whether sufficient funds are available.

### 4.4 Send Cash

Users can transfer money to another registered account. The system checks whether the recipient account exists and whether the sender has enough money. Both account balances are updated after a successful transfer.

### 4.5 Check Balance

Users can view their account holder name, account number and available balance.

### 4.6 Logout and Exit

Users can log out of their accounts and return to the welcome menu. They can also exit the application completely.

## 5. Programming Concepts Applied

The following programming concepts were applied in the development of this project:

**Functions:** Functions were created to perform different tasks, including login, depositing money, withdrawing money, sending cash and checking balances.

**Variables:** Variables were used to store account numbers, PINs, names, balances and user input.

**Decision-Making Statements:** If, else if, else and switch statements were used to make decisions based on user input.

**Loops:** Do-while loops were used to repeat the welcome menu and banking menu. A for loop was used to control login attempts, while loops were used for input validation.

**Parameters and Return Values:** Functions receive parameters and return values where required to perform tasks and provide information to other parts of the program.

**Input Validation:** The program checks for invalid input, incorrect login details, invalid transaction amounts and insufficient account balances.

## 6. How the System Works

1. The program starts by displaying the GCC Bank welcome menu.
2. The user selects the option to start banking.
3. The user enters an account number and PIN.
4. The system checks the login details.
5. If the login is successful, the banking menu is displayed.
6. The user selects the required banking operation.
7. The system processes the transaction and displays the result.
8. The user can continue using the banking menu or log out.
9. The user can exit the application from the welcome menu.

## 7. User Account Information

The application contains three sample user accounts:

| Account Holder | Account Number |
|---|---|
| Eddy | 1001 |
| Takatso | 1002 |
| Lerato | 1003 |

Each user has an account number, PIN and starting balance stored in the program using variables.

These accounts are provided for demonstration and testing purposes.

## 8. How to Compile and Run the Program

To run the application:

1. Install Code::Blocks with a compatible C++ compiler.
2. Open the `GCC_Banking_System.cpp` source file.
3. Compile the program.
4. Run the application.
5. Follow the instructions displayed on the screen.

The source code can also be compiled using GCC from the command line:

```bash
g++ GCC_Banking_System.cpp -o GCC_Banking_System
```

Then run the generated executable.

## 9. System Limitations

The current version of the banking application has some limitations:

- Account information is stored using variables.
- The system does not use an external database.
- Account balances are not permanently saved after the program closes.
- The application is a demonstration project and is not intended for real banking transactions.

## 10. Conclusion

The GCC Banking System demonstrates the practical application of fundamental C++ programming concepts.

Through this project, I was able to apply functions, loops, decision-making statements, variables and input validation to develop a menu-driven banking application.

The project also helped me understand how different programming concepts work together to solve a practical problem.

---

## 11. References and Learning Resources

The following learning resources were consulted during the development and understanding of the programming concepts used in this project.

### YouTube Learning Resources

1. C++ Output using cout:  
   https://www.youtube.com/watch?v=jVC5r0Fpibc

2. C++ Programming Tutorial and Mr Owami's Class Notes:  
   https://www.youtube.com/watch?v=ZzaPdXTrSb8

3. C++ getline():  
   https://www.youtube.com/watch?v=5ZX6-ZzTZ98

4. C++ Programming Tutorials and Lessons:  
   https://www.youtube.com/watch?v=GTWrWM1UsnA&list=PLRJuRxIsYMUX3iSmvyWPdKFaCooL455YQ

### Website

5. W3Schools. C++ Tutorial.  
   https://www.w3schools.com/cpp/

### Additional Learning Support

6. Mr Owami's Introduction to Programming lecture notes, Gauteng City College.


