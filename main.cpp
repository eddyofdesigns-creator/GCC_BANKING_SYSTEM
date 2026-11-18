#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cmath>

using namespace std;

// USER ACCOUNT DETAILS

int account1 = 1001;
int pin1 = 1111;
string name1 = "Eddy";
double balance1 = 1000;

int account2 = 1002;
int pin2 = 2222;
string name2 = "Takatso";
double balance2 = 2500;

int account3 = 1003;
int pin3 = 3333;
string name3 = "Lerato";
double balance3 = 5000;


// FUNCTION TO GET A VALID WHOLE NUMBER

int getInteger(string message) {

    int number;

    while(true) {

        cout << message;

        if(cin >> number) {

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            return number;
        }
        else {

            cout << "Invalid input! Enter a whole number." << endl;

            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}


// FUNCTION TO GET A VALID MONEY AMOUNT

double getAmount(string message) {

    double amount;

    while(true) {

        cout << message;

        if(cin >> amount && isfinite(amount)) {

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            return amount;
        }
        else {

            cout << "Invalid amount! Please try again." << endl;

            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}


// FUNCTION TO FIND AN ACCOUNT

int findAccount(int accountNumber) {

    if(accountNumber == account1) {
        return 1;
    }
    else if(accountNumber == account2) {
        return 2;
    }
    else if(accountNumber == account3) {
        return 3;
    }
    else {
        return 0;
    }
}


// FUNCTION TO CHECK THE PIN

bool checkPin(int accountNumber, int pin) {

    if(accountNumber == account1 && pin == pin1) {
        return true;
    }
    else if(accountNumber == account2 && pin == pin2) {
        return true;
    }
    else if(accountNumber == account3 && pin == pin3) {
        return true;
    }
    else {
        return false;
    }
}


// FUNCTION TO GET THE USER NAME

string getName(int accountNumber) {

    if(accountNumber == account1) {
        return name1;
    }
    else if(accountNumber == account2) {
        return name2;
    }
    else if(accountNumber == account3) {
        return name3;
    }
    else {
        return "Unknown";
    }
}


// FUNCTION TO GET THE BALANCE

double getBalance(int accountNumber) {

    if(accountNumber == account1) {
        return balance1;
    }
    else if(accountNumber == account2) {
        return balance2;
    }
    else if(accountNumber == account3) {
        return balance3;
    }
    else {
        return 0;
    }
}


// FUNCTION TO UPDATE THE BALANCE

void setBalance(int accountNumber, double newBalance) {

    if(accountNumber == account1) {
        balance1 = newBalance;
    }
    else if(accountNumber == account2) {
        balance2 = newBalance;
    }
    else if(accountNumber == account3) {
        balance3 = newBalance;
    }
}


// FUNCTION TO LOGIN

int login() {

    int accountNumber;
    int pin;

    cout << "\n========== GCC BANK LOGIN ==========" << endl;

    for(int attempt = 1; attempt <= 3; attempt++) {

        accountNumber = getInteger("Enter account number: ");

        pin = getInteger("Enter PIN: ");

        if(findAccount(accountNumber) != 0 &&
           checkPin(accountNumber, pin)) {

            cout << "\nLogin successful!" << endl;

            cout << "Welcome, " << getName(accountNumber) << "!" << endl;

            return accountNumber;
        }
        else {

            cout << "\nIncorrect account number or PIN!" << endl;

            cout << "Attempts remaining: " << 3 - attempt << endl;
        }
    }

    cout << "\nToo many failed attempts!" << endl;

    return 0;
}


// FUNCTION TO DEPOSIT MONEY

void deposit(int accountNumber) {

    double amount;
    double newBalance;

    cout << "\n========== DEPOSIT MONEY ==========" << endl;

    amount = getAmount("Enter amount to deposit: R");

    if(amount <= 0) {

        cout << "\nAmount must be more than zero!" << endl;
    }
    else if(!isfinite(getBalance(accountNumber) + amount)) {

        cout << "\nAmount is too large!" << endl;
    }
    else {

        newBalance = getBalance(accountNumber) + amount;

        setBalance(accountNumber, newBalance);

        cout << "\nDeposit successful!" << endl;

        cout << "Amount deposited: R" << amount << endl;

        cout << "New balance: R" << newBalance << endl;
    }
}


// FUNCTION TO WITHDRAW MONEY

void withdraw(int accountNumber) {

    double amount;
    double newBalance;

    cout << "\n========== WITHDRAW MONEY ==========" << endl;

    amount = getAmount("Enter amount to withdraw: R");

    if(amount <= 0) {

        cout << "\nAmount must be more than zero!" << endl;
    }
    else if(amount > getBalance(accountNumber)) {

        cout << "\nInsufficient funds!" << endl;
    }
    else {

        newBalance = getBalance(accountNumber) - amount;

        setBalance(accountNumber, newBalance);

        cout << "\nWithdrawal successful!" << endl;

        cout << "Amount withdrawn: R" << amount << endl;

        cout << "Remaining balance: R" << newBalance << endl;
    }
}


// FUNCTION TO SEND CASH

void sendCash(int accountNumber) {

    int recipient;
    double amount;
    double senderBalance;
    double recipientBalance;
    char confirmation;

    cout << "\n========== SEND CASH ==========" << endl;

    recipient = getInteger("Enter recipient account number: ");

    if(findAccount(recipient) == 0) {

        cout << "\nAccount does not exist!" << endl;
    }
    else if(recipient == accountNumber) {

        cout << "\nYou cannot send money to your own account!" << endl;
    }
    else {

        cout << "\nRecipient name: " << getName(recipient) << endl;

        amount = getAmount("Enter amount to send: R");

        if(amount <= 0) {

            cout << "\nAmount must be more than zero!" << endl;
        }
        else if(amount > getBalance(accountNumber)) {

            cout << "\nInsufficient funds!" << endl;
        }
        else if(!isfinite(getBalance(recipient) + amount)) {

            cout << "\nTransfer amount is too large!" << endl;
        }
        else {

            cout << "\n========== TRANSFER DETAILS ==========" << endl;

            cout << "From: " << getName(accountNumber) << endl;

            cout << "To: " << getName(recipient) << endl;

            cout << "Amount: R" << amount << endl;

            cout << "\nConfirm transfer? (Y/N): ";

            cin >> confirmation;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if(confirmation == 'Y' || confirmation == 'y') {

                senderBalance = getBalance(accountNumber) - amount;

                recipientBalance = getBalance(recipient) + amount;

                setBalance(accountNumber, senderBalance);

                setBalance(recipient, recipientBalance);

                cout << "\nTransfer successful!" << endl;

                cout << "Money sent to: " << getName(recipient) << endl;

                cout << "Your new balance: R" << senderBalance << endl;
            }
            else {

                cout << "\nTransfer cancelled!" << endl;
            }
        }
    }
}


// FUNCTION TO CHECK BALANCE

void checkBalance(int accountNumber) {

    cout << "\n========== ACCOUNT DETAILS ==========" << endl;

    cout << "Account holder: " << getName(accountNumber) << endl;

    cout << "Account number: " << accountNumber << endl;

    cout << "Available balance: R" << getBalance(accountNumber) << endl;
}


// FUNCTION TO DISPLAY THE BANKING MENU

void displayMenu() {

    cout << "\n================================" << endl;

    cout << "          GCC BANK              " << endl;

    cout << "================================" << endl;

    cout << "1. Deposit" << endl;

    cout << "2. Withdraw" << endl;

    cout << "3. Send Cash" << endl;

    cout << "4. Check Balance" << endl;

    cout << "5. Logout" << endl;

    cout << "================================" << endl;
}


// MAIN FUNCTION

int main() {

    int choice;
    int loggedInAccount;
    int bankingChoice;

    cout << fixed << setprecision(2);

    // WELCOME MENU

    do {

        cout << "\n================================" << endl;

        cout << "          GCC BANK              " << endl;

        cout << "================================" << endl;

        cout << "WELCOME TO GCC BANK!" << endl;

        cout << "\n1. Start Banking" << endl;

        cout << "2. Exit" << endl;

        choice = getInteger("\nEnter your choice: ");

        switch(choice) {

            case 1:

                // Login before using the banking system

                loggedInAccount = login();

                if(loggedInAccount != 0) {

                    // Display banking menu after login

                    do {

                        displayMenu();

                        bankingChoice = getInteger("Enter choice: ");

                        switch(bankingChoice) {

                            case 1:

                                deposit(loggedInAccount);

                                break;

                            case 2:

                                withdraw(loggedInAccount);

                                break;

                            case 3:

                                sendCash(loggedInAccount);

                                break;

                            case 4:

                                checkBalance(loggedInAccount);

                                break;

                            case 5:

                                cout << "\nYou have successfully logged out!" << endl;

                                break;

                            default:

                                cout << "\nInvalid choice! Select between 1 and 5." << endl;
                        }

                    } while(bankingChoice != 5);
                }

                break;


            case 2:

                cout << "\nThank you for visiting GCC BANK!" << endl;

                break;


            default:

                cout << "\nInvalid choice! Please select 1 or 2." << endl;
        }

    } while(choice != 2);

    return 0;
}
