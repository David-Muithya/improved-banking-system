# improved-banking-system
This version of the banking system will use classes to handle accounts more effectively. It will also include data validation to ensure the user enters valid inputs (e.g., non-negative numbers for deposits and withdrawals).

# Banking System (C++)

## Overview --
This project simulates a simple banking system that allows users to check their balance, deposit money, withdraw money, and exit. The system uses a class (`BankAccount`) to manage a user's account, and data validation is included to ensure correct input.

## Features --
- **Check Balance**: Displays the account holder's balance.
- **Deposit Money**: Allows the user to deposit money into their account.
- **Withdraw Money**: Allows the user to withdraw money from their account, with checks for sufficient balance.
- **Data Validation**: Ensures all numeric inputs are valid (e.g., deposit and withdrawal amounts must be positive).
- **Modular Code**: The system is structured using a `BankAccount` class for better encapsulation and reuse.

## How to Run--
1. Compile the program using a C++ compiler (e.g., `g++ -o banking_system banking_system.cpp`).
2. Run the executable: `./banking_system`.

## Sample Interaction
Enter account holder's name: John Doe
Enter initial deposit: $1000

Banking System Menu
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 1
Account Holder: John Doe
Current balance: $1000

Banking System Menu
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 2
Enter deposit amount: $500
$500 deposited successfully.

Banking System Menu
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 3
Enter withdrawal amount: $200
$200 withdrawn successfully.

Banking System Menu
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 4
Exiting the banking system.
