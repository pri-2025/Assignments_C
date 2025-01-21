# 1.)Encrypt-Decrypt 
This program demonstrates a simple implementation of **encryption** and **decryption** in C. It allows users to encrypt a string using a key and decrypt it back to the original string.
### Features
- **Encryption**: Transforms a plaintext string into an encoded string using a specified key.
- **Decryption**: Decodes the encrypted string back to the original plaintext using the same key.
- **Handles**:
  - **Digits** (0-9)
  - **Uppercase letters** (A-Z)
  - **Lowercase letters** (a-z)
### Code Structure
The program contains the following key functions:
1. `encrypt(char arr[], int key)`: Encrypts the input string `arr` using the key `key`.
2. `decrypt(char arr[], int key)`: Decrypts the input string `arr` using the same key `key`.
### How It Works
a. **Encryption Logic**:
   - Each character of the input string is shifted by the key value within its respective range (digits, uppercase, lowercase).
   - It wraps around if the character exceeds the limit of its range (e.g., 'z' wraps back to 'a'). 
b. **Decryption Logic**:
   - Each character of the encrypted string is shifted backward by the key value within its respective range.
   - It wraps around if the character goes below the start of its range.

# 2.) Fibonacci Series
This is a simple C program to generate the Fibonacci series up to a given number of terms. The Fibonacci series is a sequence where each number is the sum of the two preceding ones, typically starting with 0 and 1.
### Features
- Generates the Fibonacci series up to `n` terms.
- Implements both iterative and recursive methods for generating the series.
### Code Structure
The program includes two primary methods for generating the series:
1. **Iterative Method**:
   - Uses a `for` loop to calculate the series.
2. **Recursive Method**:
   - Uses recursion to calculate each term in the series.
### How It Works
1. The user inputs the number of terms (`n`) they want in the Fibonacci series.
2. The program generates and displays the Fibonacci series up to `n` terms.

# 3.) Length of string
This program calculates the **length of a string** in C using multiple approaches. The length of a string is determined by counting the number of characters before the null character (`'\0'`).
### Features
- Calculate the length of a string entered by the user.
- Implements two approaches:
  1. Using a for loop.
  2. Using the standard library function `strlen()`.
### Code Structure
The program contains the following key components:
1. **Custom String Length Function**:
   - Iterates through the string and counts the characters until the null character (`'\0'`) is encountered.
2. **Library Function Approach**:
   - Uses the `strlen()` function from `<string.h>` to calculate the string length.
### How It Works
1. The user inputs a string.
2. The program calculates the length of the string using both methods.
3. The results are displayed on the screen.

# 4.) Matrix Operations 
This C program allows users to perform various **matrix operations** such as addition, subtraction, multiplication, and transposition. It demonstrates how to work with 2D arrays to handle matrices and apply mathematical operations.
### Features
- **Addition of Matrices**: Adds two matrices of the same dimensions.
- **Subtraction of Matrices**: Subtracts one matrix from another of the same dimensions.
- **Multiplication of Matrices**: Multiplies two matrices if their dimensions satisfy the matrix multiplication rule.
### Code Structure
The program consists of the following key components:
1. **Matrix Input**:
   - Accepts matrices from the user with specified dimensions.
2. **Matrix Operations**:
   - Implements functions for each operation (addition, subtraction, multiplication, and transposition).
3. **Matrix Output**:
   - Displays the result of each operation in a formatted manner.
### How It Works
1. The user selects an operation from the menu.
2. The program prompts the user to input the matrices.
3. The selected operation is performed, and the result is displayed.

# 5.) Minimum and Maximum 
This C program determines the **minimum** and **maximum** numbers in a user-defined array. It is simple, efficient, and beginner-friendly, demonstrating the basic use of arrays and iteration in C.
### Features
- Allows the user to input an array of integers.
- Finds and displays the **minimum** and **maximum** values within the array.
- Uses efficient looping mechanisms to traverse the array in a single pass (O(n) complexity).
### Code Structure
- **Input Handling**:
  - Prompts the user for array size and elements.
- **Traversal and Comparison**:
  - Iterates through the array to find the smallest and largest numbers.
- **Output**:
  - Displays the minimum and maximum numbers.
### How It Works
1. The user specifies the number of elements in the array.
2. The program prompts the user to enter the array elements.
3. It iterates through the array to find the minimum and maximum values.
4. The results are displayed.

# 6.) Sorting an Array
This C program allows users to sort an array of integers in **ascending** or **descending** order using various sorting algorithms. It demonstrates key sorting techniques like **Bubble Sort** & **Selection Sort** and provides a menu-driven interface for user convenience.
### Features
- **Sorting Algorithms**:
  - Bubble Sort
  - Selection Sort
- Allows users to:
  - Enter an array of integers.
  - Select the sorting algorithm.
  - Choose between ascending or descending order.
- Displays the sorted array after the operation.
### Code Structure
The program includes:
1. **Input Handling**:
   - Prompts the user to input array size and elements.
2. **Sorting Algorithms**:
   - Implements three common sorting techniques.
3. **Order Selection**:
   - Sorts in either ascending or descending order based on user preference.
4. **Output**:
   - Displays the sorted array in the chosen order.
### How It Works
1. The user specifies the number of elements in the array and enters the elements.
2. The program presents a menu of sorting algorithms to choose from.
3. The user selects the sorting algorithm and the order of sorting (ascending)
4. The program sorts the array and displays the result.

# 7.) Structures - Bank
This C program demonstrates the use of **structures** to manage and process **bank account details**. It allows users to perform common banking operations like viewing account details, searching for an account, depositing money, and withdrawing money.
### Features
- **Store Bank Account Details**:
  - Includes fields like account holder's name, account number, mobile number, address, and balance.
- **View Account Details**:
  - Display all stored account details in a formatted manner.
- **Search Account**:
  - Search for an account using the account number or account holder's name.
- **Deposit Money**:
  - Add a specified amount to an account balance.
- **Withdraw Money**:
  - Subtract a specified amount from an account balance, ensuring sufficient funds.
- Menu-driven interface for easy navigation.
## Code Structure
The program uses a **structure** to represent bank account details and functions to perform various operations:
1. **Structure Definition**:
   - `struct Bankholder_details` contains fields for storing account information.
2. **Input Handling**:
   - Functions to add account details.
3. **Banking Operations**:
   - Functions to search, deposit, and withdraw funds.
4. **Output**:
   - Displays account details and updates in a user-friendly format.
### How It Works
1. The user is presented with a menu to choose an operation.
2. Based on the selection, the program performs the requested operation:
   - Add account details.
   - View all account details.
   - Search by name or account number.
   - Deposit or withdraw money.
3. Results are displayed after each operation.

# 8.) Structures - Employee 
This C program demonstrates the use of **structures** to efficiently store and manage employee details. It provides several features such as adding employee records, viewing all records, searching for employees by ID or name, and updating or deleting records.
### Features
- **Add Employee**:
  - Create a new employee record with fields like ID, name, department, age, and salary.
- **View All Employees**:
  - Display all stored employee records in a user-friendly format.
- **Search Employees**:
  - Search for employees by their ID or name.
- **Update Employee Details**:
  - Modify existing employee details.
### Code Structure
1. **Structure Definition**:
   - `struct Employee` stores details like `id`, `name`, `department`, `age`, and `salary`.
2. **Input Handling**:
   - Functions to add employee records.
3. **Search Operations**:
   - Functions to search employees by ID or name.
4. **Output**:
   - Displays all employee records or search results in a user-friendly format.
### How It Works
1. The user is presented with a menu to choose an operation:
   - Add, View, Search, Update, or Delete employee records.
2. Based on the choice, the program performs the operation.
3. Results are displayed after each operation.
