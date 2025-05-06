# Password Strength Checker

A simple C++ program to evaluate the strength of a password based on specific requirements. The program provides feedback on whether the password is weak, strong, or very strong.

## Features

- Checks if the password meets the following requirements:
  - At least 8 characters long.
  - Contains at least one lowercase English letter.
  - Contains at least one uppercase English letter.
  - Contains at least one numeric digit.
- Provides feedback on password strength:
  - `"Password does not meet the requirements..."` if the password fails to meet the basic requirements.
  - `"Password is weak."` if the password length is between 8 and 10 (inclusive) and meets the requirements.
  - `"Password is strong!"` if the password length is between 11 and 15 (inclusive) and meets the requirements.
  - `"Password is very strong!"` if the password length is greater than 16 and meets the requirements.

## How to Use

1. Clone the repository or download the code.
2. Compile the program using a C++ compiler (e.g., `g++`).
3. Run the program and enter a password when prompted.
4. The program will evaluate the password and display its strength.

## Example Outputs

### Input: `123abc`


### Input: `Verygoodpass11`


### Input: `Wo9A8SJIsei19xyx8`


## Requirements

- A C++ compiler (e.g., GCC, Clang, or MSVC).

## How to Compile and Run

1. Open a terminal or command prompt.
2. Navigate to the directory containing the code.
3. Compile the program:
   ```bash



   ./passwordStrength
   g++ -o passwordStrength passwordStrong.cpp
