🧾 Receipt Creator

<p align="center"> A simple console-based receipt generator built with C++. <br> Create formatted receipts by entering a customer's name, item name, and purchase amount. </p>

<p align="center"> <img src="https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++"> <img src="https://img.shields.io/badge/Platform-Console-lightgrey?style=for-the-badge" alt="Console Application"> <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge" alt="Project Status"> </p>

📌 Overview

Receipt Creator is a beginner-friendly C++ project that generates receipts directly in the terminal. It features a simple menu system, basic input validation, and dynamically formatted receipt borders.

The project demonstrates fundamental C++ programming concepts, including functions, strings, loops, pointers, and console output formatting.

✨ Features
🧾 Receipt Generation — Create receipts with customer and purchase information.
📐 Dynamic Formatting — Adjust receipt width based on the length of the entered information.
✅ Input Validation — Check for empty names, empty item names, and non-positive amounts.
🔄 Menu System — Create receipts repeatedly or exit the application.
🎨 Formatted Output — Display receipt details in a bordered layout.
🧩 Modular Code — Separate program functionality into individual functions.
🛠️ Built With
Technology	Purpose
C++	Core programming language
iostream	Console input and output
string	Text handling
iomanip	Output formatting
🚀 Getting Started
Prerequisites
A C++ compiler, such as GCC or MinGW.
A terminal or command prompt.
A code editor, such as Visual Studio Code (optional).
Installation

1. Clone the repository

git clone https://github.com/YOUR_USERNAME/receipt-creator.git


2. Navigate to the project directory

cd receipt-creator


3. Compile the source code

g++ main.cpp -o receipt_creator


4. Run the program

Windows:

receipt_creator.exe


Linux / macOS:

./receipt_creator

💻 Usage
Launch the application.
Select 1 to create a receipt.
Enter the customer's name.
Enter the purchased item's name.
Enter a positive purchase amount.
View the generated receipt.
Press Enter to return to the main menu.
Select 2 to exit.
🖥️ Example
+=======================+
+    RECEIPT CREATOR    +
+=======================+
1. Create Receipt
2. Exit
Input:
1

Input Name:
John Doe
Input Name of item:
Keyboard
Input amount:
50

|----------------------|
|RECEIPT               |
|Name: John Doe        |
|Item Bought: Keyboard |
|Amount: $50           |
|----------------------|

Note: The receipt above illustrates the intended appearance. Exact spacing and border alignment may vary depending on the program's implementation and input lengths.
📂 Project Structure
receipt-creator/
├── main.cpp
└── README.md

🧠 Concepts Practiced
Functions and code organization
Strings and user input
Loops and conditional statements
Dynamic memory allocation
Pointers and arrays
Input validation
Console formatting with iomanip
🔮 Future Improvements
Support decimal prices.
Improve invalid-input handling.
Add receipt dates and unique receipt numbers.
Save generated receipts to text files.
Support multiple items per receipt.
Improve receipt alignment and visual design.
👤 Author

YOUR NAME

GitHub: @YOUR_USERNAME
📄 License

This project is available for personal and educational use. Add a LICENSE file to the repository if you want to specify formal permissions for reuse and distribution.

<p align="center"> ⭐ If you find this project interesting, consider giving the repository a star! </p>
