🧾 Receipt Creator

<p align="center"> <strong>A console-based receipt generator written in C++</strong> <br> Built for learning, experimentation, and practicing C++ programming. </p>

<p align="center"> <a href="#-requirements"> <img src="https://img.shields.io/badge/C%2B%2B-11%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++11+"> </a> <a href="#-version"> <img src="https://img.shields.io/badge/Version-1.0.0-2ea44e?style=for-the-badge" alt="Version 1.0.0"> </a> <a href="#-current-functionality"> <img src="https://img.shields.io/badge/Status-Functional-22c55e?style=for-the-badge" alt="Functional"> </a> <a href="#-requirements"> <img src="https://img.shields.io/badge/Platform-Cross--Platform-6f42c1?style=for-the-badge" alt="Cross-platform"> </a> </p>

[!NOTE]
v1.0.0 provides the core receipt-generation functionality, including customer information, item details, monetary amounts, input validation, and dynamically sized receipt formatting.
[!IMPORTANT]
This is an educational console application. It generates receipts in the terminal and does not currently save receipts to files or connect to any payment system.
📑 Table of Contents
📖 Overview
✨ Features
📊 Current Functionality
📁 Project Structure
⚙️ Requirements
📥 Installation
🔨 Build
▶️ Run
🖥️ Usage
🧾 Creating a Receipt
💻 Example Output
🧠 Concepts Demonstrated
🔍 Code Overview
📏 Receipt Formatting
💰 Amount Handling
🛡️ Input Validation
💾 Data Storage
⚠️ Known Limitations
🧪 Testing
🚀 Future Improvements
🤝 Contributing
⚖️ Disclaimer
📄 License
🏷️ Version
📖 Overview

Receipt Creator is a simple, interactive, console-based application written in C++ that generates formatted receipts from user-provided information.

The program asks the user to enter a customer name, an item name, and a purchase amount. It then calculates the required receipt width and displays a receipt using formatted terminal output.

The project demonstrates fundamental C++ programming concepts, including:

Functions and modular programming
User input and output
String manipulation
Dynamic memory allocation
Input stream error handling
Conditional statements and loops
Output formatting using <iomanip>
Basic numeric validation
[!TIP]
This project is suitable for beginners who want to practice functions, strings, input validation, and console formatting in C++.
✨ Features
🧾 Receipt Generation
✅ Generate a receipt from user input.
✅ Display the customer's name.
✅ Display the purchased item's name.
✅ Display the purchase amount.
✅ Automatically calculate the receipt width.
✅ Format the receipt with borders.
✅ Align receipt information using stream manipulators.
👤 Customer Information
✅ Accept a customer name.
✅ Accept names containing spaces using getline().
✅ Reject empty customer names.
✅ Accept item names containing spaces.
✅ Reject empty item names.
💰 Amount Handling
✅ Accept monetary amounts using double.
✅ Support positive decimal values.
✅ Reject amounts less than or equal to zero.
✅ Display the amount in the generated receipt.
🛡️ Input Handling
✅ Validate menu input for stream errors.
✅ Clear the input stream after invalid menu input.
✅ Reject menu options outside the supported range.
✅ Provide basic error messages.
✅ Pause before returning to the main menu after generating a receipt.
📊 Current Functionality
Feature	Status
Main menu	🟢 Implemented
Create receipt	🟢 Implemented
Customer name input	🟢 Implemented
Item name input	🟢 Implemented
Empty name validation	🟢 Implemented
Empty item validation	🟢 Implemented
Positive amount validation	🟢 Implemented
Decimal amount input	🟢 Supported
Dynamic receipt width	🟢 Implemented
Formatted receipt borders	🟢 Implemented
Invalid menu input handling	🟡 Basic
Invalid amount input handling	🟡 Needs improvement
Currency formatting to two decimal places	🔴 Not implemented
Multiple items per receipt	🔴 Not implemented
Save receipts to files	🔴 Not implemented
Receipt history	🔴 Not implemented
Automated tests	🔴 Not implemented
📁 Project Structure
Receipt-Creator/
│
├── main.cpp
└── README.md

📄 File Descriptions
File	Description
main.cpp	Contains the main menu, input handling, receipt generation, and program loop.
README.md	Contains project documentation, setup instructions, and usage information.
⚙️ Requirements
💻 Software
A C++ compiler.
A terminal or command prompt.
A text editor or IDE.
🛠️ Supported Compilers
GCC
Clang
Microsoft Visual C++ (MSVC)
📌 C++ Standard

The program uses standard C++ features such as:

std::string
std::cin and std::cout
std::getline()
std::setw()
std::setfill()
std::to_string()

Recommended standard: C++11 or newer.

📥 Installation
1. Clone the Repository

Replace <repository-url> with your actual Git repository URL.

git clone <repository-url>

2. Navigate to the Project Directory
cd Receipt-Creator

3. Verify the Source File

Ensure that main.cpp is present in the project directory.

Receipt-Creator/
├── main.cpp
└── README.md

🔨 Build
🟢 Standard Build

Compile the source file using GCC:

g++ main.cpp -o receipt

🐛 Debug Build

Compile with additional warnings and debugging information:

g++ main.cpp -std=c++11 -Wall -Wextra -g -o receipt

🔍 Build Options
Option	Purpose
-std=c++11	Enable C++11 or compatible language features.
-Wall	Enable common compiler warnings.
-Wextra	Enable additional compiler warnings.
-g	Include debugging information.
-o receipt	Name the generated executable receipt.
[!NOTE]
A standard GCC installation generally supports the features used by this program. You can also compile it using a newer C++ standard.
▶️ Run
🐧 Linux / 🍎 macOS
./receipt

🪟 Windows

Using Command Prompt:

receipt.exe


Using PowerShell:

.\receipt.exe

🖥️ Usage

When the application starts, the main menu appears:

+=======================+
+    RECEIPT CREATOR    +
+=======================+
1. Create Reciept
2. Exit
Input:

Main Menu Options
Option	Function
1	Create a receipt.
2	Exit the application.

Enter the corresponding number to select an option.

If an unsupported menu option is entered, the program displays an error message.

🧾 Creating a Receipt

Select:

1. Create Reciept


The application requests three pieces of information.

1. Customer Name
Input Name:


Enter the customer's name.

Example:

John Doe


The program uses getline() to allow names containing spaces.

An empty name is rejected.

2. Item Name
Input Name of item:


Enter the name of the purchased item.

Example:

Mechanical Keyboard


An empty item name is rejected.

3. Purchase Amount
Input amount:


Enter a positive monetary amount.

Example:

49.99


The program accepts the input into a double variable and checks whether the amount is greater than zero.

4. Generate the Receipt

Once the provided information passes the existing validation checks, the program generates a formatted receipt.

After displaying the receipt, the program waits for the user to press Enter before returning to the main menu.

💻 Example Output

The following illustrates the intended receipt layout for sample input.

Example Input
Input Name:
John Doe
Input Name of item:
Mechanical Keyboard
Input amount:
49.99

Example Receipt
|------------------------------|
|RECEIPT                       |
|Name: John Doe                |
|Item Bought: Mechanical Keyboard|
|Amount: $49.990000            |
|------------------------------|

[!NOTE]
The exact spacing depends on the entered information. The current implementation uses std::to_string() for the amount, which commonly displays six digits after the decimal point for floating-point values. The sample illustrates the general layout rather than guaranteed character-for-character output.
🧠 Concepts Demonstrated
🔹 Functions

The program separates tasks into functions:

mainmenu() — Displays the main menu.
takeinput() — Reads an integer menu selection.
cinbugfix() — Clears a failed input stream and discards the remaining input line.
receipt() — Calculates the receipt width and displays the receipt.
wait() — Pauses the program before continuing.
🔹 Strings

The program uses std::string to store names and item descriptions.

Example:

string name;
string item1;


String concatenation is used to construct receipt fields:

string("Name: " + name)

🔹 Input with getline()

The program uses getline() to accept text containing spaces.

getline(cin, name);
getline(cin, item1);


This allows input such as:

John Smith
Wireless Gaming Mouse

🔹 Numeric Input

The purchase amount is stored in a double.

double amount {};
cin >> amount;


A double supports fractional numeric values, unlike an integer type.

🔹 Dynamic Memory Allocation

The receipt function allocates an integer array:

int *p = new int[3];


It stores the lengths of the three receipt fields and uses them to calculate the width.

The memory is released after the receipt is printed:

delete[] p;
p = nullptr;

🔹 Output Formatting

The program uses <iomanip> to format the receipt.

setw(width)
setfill('-')
left
right


These manipulators control field width, fill characters, and text alignment.

🔍 Code Overview
mainmenu()

Displays the application title and menu options.

takeinput()

Reads an integer from standard input and returns it to the calling function.

cinbugfix()

Clears the stream's failure state and ignores remaining characters on the current line.

void cinbugfix() {
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}

receipt()

Accepts the customer's name, monetary amount, and item name.

void receipt(string name, double amount, string item)


The function:

Calculates the lengths of the receipt fields.
Finds the longest field.
Uses that length to determine the receipt width.
Prints the top border.
Prints the receipt heading and information.
Prints the bottom border.
Releases its dynamically allocated array.
wait()

Displays a prompt and waits for Enter.

void wait() {
    cout << "Press ENTER..." << endl;
    cin.ignore(1000, '\n');
    cin.get();
}


The function is intended to pause after receipt generation. Its behavior depends on the state of the input stream, so input handling can be improved to make the pause more reliable.

📏 Receipt Formatting

The program calculates the length of each receipt field.

int sizeofname =
    string("Name: ").size() + name.size();

int sizeofitem =
    string("Item Bought: ").size() + item.size();

int sizeofamount =
    string("Amount: $").size() + to_string(amount).size();


It then identifies the longest field and uses the result to determine the receipt width.

Formatting Tools
Tool	Purpose
setw()	Sets the minimum width of the next formatted field.
setfill()	Sets the fill character used by width formatting.
left	Left-aligns the next formatted field.
right	Right-aligns the next formatted field.
string::size()	Returns the number of characters in a string.
to_string()	Converts a numeric value to a string.
[!TIP]
The receipt function can be improved by accounting for border characters consistently and using fixed-point formatting to display monetary amounts with exactly two decimal places.
💰 Amount Handling

The program accepts a double amount rather than an integer.

double amount {};
cin >> amount;


It rejects values that are zero or negative:

if (amount <= 0) {
    cout << "Amount can't be negative or zero" << endl;
}

Examples
Input	Expected validation
100	🟢 Accepted
49.99	🟢 Accepted
0	🔴 Rejected
-25	🔴 Rejected

The current code does not explicitly check whether reading the amount succeeded. Consequently, non-numeric input can cause a stream failure that is not handled correctly.

It also does not enforce a two-decimal currency format. For example, 49.99 may be printed as 49.990000 because of std::to_string().

🛡️ Input Validation

The current implementation performs basic validation.

Validated Conditions
Empty customer name.
Empty item name.
Amount less than or equal to zero.
Invalid integer menu input.
Menu choices outside the supported range.
Known Validation Gaps
Non-numeric amount input is not handled robustly.
Extremely large numeric values are not explicitly checked.
Names containing only whitespace are not considered empty.
The input recovery function uses a fixed limit of 1,000 characters.
Failed input extraction can affect subsequent prompts.
Example of the Existing Recovery Function
void cinbugfix() {
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}


This function is called when the menu input stream enters a failed state.

[!IMPORTANT]
The amount input should also check cin.fail() and recover from invalid input before attempting to generate a receipt.
💾 Data Storage

The current application does not store receipt information permanently.

Current Behavior
Receipt details are entered by the user.
The receipt is generated in the console.
The application does not create a receipt file.
No database is used.
No receipt history is maintained.
Data Fields
Field	Data Type	Purpose
Customer name	string	Stores the customer's name.
Item name	string	Stores the purchased item's description.
Amount	double	Stores the purchase amount.

The information is passed to the receipt() function when generating the receipt.

⚠️ Known Limitations
🧾 Single Item per Receipt

The application supports only one item name and one amount per receipt.

💾 No Persistent Storage

Receipts are displayed in the terminal but are not saved to disk.

💰 Basic Currency Formatting

The amount is converted using std::to_string(), which does not guarantee the desired two-decimal currency presentation.

🛡️ Incomplete Amount Validation

The program does not fully handle invalid or non-numeric amount input.

📐 Basic Border Alignment

The receipt width is calculated dynamically, but the border and content widths are not consistently managed for every possible input.

🧠 Manual Memory Management

The receipt function uses new[] and delete[] for an array of three integers. This allocation is unnecessary for such a small, fixed set of values and could be replaced with std::array or ordinary local variables.

🧪 No Automated Tests

The program has no automated unit or integration tests.

🌐 No External Integrations

The application does not connect to payment services, databases, or external systems.

🧪 Testing

Automated testing has not yet been implemented. The application can be tested manually through the console.

Recommended Test Cases
Main Menu
Select option 1 to create a receipt.
Select option 2 to exit.
Enter an unsupported menu number.
Enter alphabetic input at the menu.
Enter a negative menu number.
Customer Information
Enter a normal customer name.
Enter a name containing spaces.
Submit an empty name.
Enter a name containing only spaces.
Enter a normal item name.
Enter an item name containing spaces.
Submit an empty item name.
Amount Handling
Enter a positive integer amount.
Enter a positive decimal amount.
Enter zero.
Enter a negative amount.
Enter alphabetic input.
Enter an extremely large amount.
Verify the displayed decimal formatting.
Receipt Formatting
Generate a receipt with short names.
Generate a receipt with long customer names.
Generate a receipt with long item descriptions.
Verify that the border width matches the content.
Verify that the receipt remains readable for different input lengths.
Navigation
Return to the main menu after a receipt is generated.
Verify that the Enter prompt behaves correctly.
Exit the program successfully.
🚀 Future Improvements
🧾 Receipt Features
Support multiple items per receipt.
Add item quantities.
Calculate subtotals and totals.
Add tax calculations.
Add discounts.
Generate unique receipt numbers.
Include dates and timestamps.
Add customer contact information.
💰 Monetary Formatting
Display amounts with exactly two decimal places.
Validate numeric input robustly.
Handle monetary precision consistently.
Add currency selection.
Prevent invalid or out-of-range monetary values.
💾 Storage
Save receipts to text files.
Export receipts as CSV files.
Add receipt history.
Load previously generated receipts.
Add optional database support.
🛡️ Validation
Improve input stream recovery.
Reject whitespace-only names.
Handle end-of-file conditions.
Validate non-numeric amount input.
Replace fixed-size input ignoring with more robust stream handling.
🏗️ Code Quality
Replace unnecessary dynamic memory allocation.
Use const references where appropriate.
Separate receipt formatting from business logic.
Use std::fixed and std::setprecision(2) for monetary display.
Add automated tests.
Improve error messages.
🎨 User Experience
Improve the console interface.
Add optional colored terminal output.
Add receipt preview functionality.
Improve menu navigation.
Allow users to cancel receipt creation.
🤝 Contributing

Suggestions, bug reports, and improvements are welcome.

🐛 Reporting Bugs

When reporting an issue, include:

A description of the problem.
Steps to reproduce it.
Expected behavior.
Actual behavior.
Compiler and operating system information.
Relevant error messages.
📋 Development Guidelines
Keep the code compatible with C++11 or newer.
Validate user input before using it.
Keep functions focused on specific tasks.
Avoid unnecessary dynamic memory allocation.
Test changes before submitting them.
Update the README when functionality changes.
⚖️ Disclaimer
[!NOTE]
This application is an educational receipt generator and is not a complete point-of-sale or accounting system.

The application does not currently:

Process payments.
Connect to payment terminals.
Save receipts permanently.
Calculate taxes or discounts.
Provide accounting or bookkeeping services.
Guarantee financial compliance.

Receipts generated by the program are console output and should not be treated as verified proof of payment.

📄 License

No license has currently been specified for this project.

If you plan to publish or distribute the project, consider adding an appropriate LICENSE file.

🏷️ Version
v1.0.0 — Initial Release

The current version includes:

🧾 Console-based receipt generation.
👤 Customer name input.
🛍️ Item name input.
💰 Positive decimal amount input.
📏 Dynamically calculated receipt width.
🛡️ Basic input validation.
🔁 Interactive menu.
⏸️ Pause before returning to the menu.

Future versions can focus on better currency formatting, stronger input validation, persistent storage, and support for multiple items.

📊 Project Status
Component	Status
Main menu	🟢 Implemented
Receipt generation	🟢 Implemented
Customer information	🟢 Implemented
Item information	🟢 Implemented
Decimal amount input	🟢 Supported
Dynamic receipt width	🟢 Implemented
Currency formatting	🟡 Basic
Amount input recovery	🟡 Needs improvement
Multiple items	🔴 Planned
File storage	🔴 Planned
Automated testing	🔴 Planned

<p align="center"> <strong>🧾 Receipt Creator v1.0.0</strong> <br> Built with C++ · Educational Console Project </p>

<p align="center"> ⭐ If you found this project useful, consider giving it a star! </p>
