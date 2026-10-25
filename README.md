# 🧾 Receipt Creator

<p align="center">
  <strong>A simple console-based receipt generator written in C++</strong>
  <br>
  Built to practice C++ programming, dynamic memory allocation, input validation, and console formatting.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-11%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++11+">
  <img src="https://img.shields.io/badge/Version-1.0.0-2ea44e?style=for-the-badge" alt="Version 1.0.0">
</p>

---

## ✨ Features

- 🧾 Generate formatted receipts directly in the console.
- 👤 Enter a customer's name.
- 🛒 Add multiple items to a single receipt.
- 💰 Enter individual item prices using decimal amounts.
- ➕ Automatically calculate the total amount.
- 📏 Dynamically adjust receipt width based on the content.
- 🛡️ Validate empty customer and item names.
- ⚠️ Detect invalid numeric input for menu selections and item prices.
- 🔁 Use a simple interactive menu to create receipts or exit.
- 🧹 Manage dynamically allocated arrays for item names and prices.

## ⚙️ Requirements

- A C++ compiler, such as GCC, Clang, or MSVC.
- C++11 or newer.
- A terminal or command-line interface.

## 📥 Installation & Build

### 1. Clone the repository

~~~bash
git clone <repository-url>
cd Receipt-Creator
~~~

Replace `<repository-url>` with the URL of your Git repository.

### 2. Compile the program

Using GCC:

~~~bash
g++ main.cpp -std=c++11 -Wall -Wextra -o receipt
~~~

### 3. Run the program

**Linux / macOS**

~~~bash
./receipt
~~~

**Windows**

~~~powershell
.\receipt.exe
~~~

## 🖥️ Example Usage

### Main Menu

~~~text
+=======================+
+    RECEIPT CREATOR    +
+=======================+
1. Create Reciept
2. Exit
Input:
~~~

### Creating a Receipt

For example, suppose a customer named John buys a keyboard and a mouse.

~~~text
Input Name:
John
How many items bought:
2
Type the name of item:
Keyboard
Type the name of item:
Mouse
Input the cost of Keyboard:
50
Input the cost of Mouse:
25
~~~

### Example Receipt

~~~text
|----------------------|
|RECEIPT               |
|Name: John            |
|Items:          Cost: |
|**********************|
|1.Keyboard: $50.000000|
|2.Mouse: $25.000000   |
|**********************|
|Total Amount: $75.000000|
|----------------------|
~~~

> **Note:** The exact alignment and receipt width depend on the entered names and prices. The amounts currently use `std::to_string()`, which typically displays six decimal places. Spacing in this illustrative output may differ from the actual output.

## 📁 Project Structure

~~~text
Receipt-Creator/
├── main.cpp
└── README.md
~~~

- `main.cpp` — Contains the menu, input handling, receipt generation, and total calculation.
- `README.md` — Provides project documentation and build instructions.

## 🧠 Concepts Practiced

- **Functions:** Separating menu display, input handling, receipt generation, and waiting for user input.
- **Strings:** Using `std::string` and `getline()` to read customer and item names.
- **Arrays and pointers:** Storing item names and prices in dynamically allocated arrays.
- **Dynamic memory management:** Allocating arrays with `new[]` and releasing them with `delete[]`.
- **Input validation:** Checking stream errors and rejecting empty names and non-positive item counts.
- **Arithmetic operations:** Calculating the total cost of all items.
- **Console formatting:** Using `std::setw()`, `std::setfill()`, `std::left`, and `std::right`.
- **Loops and conditionals:** Managing the interactive menu and processing multiple items.

## ⚠️ Current Limitations

- Receipts are displayed in the console and are not saved to files.
- Monetary values display six decimal places instead of standard two-decimal currency formatting.
- Invalid input for the number of items is not fully handled.
- Very large item counts can cause excessive memory allocation.
- Dynamic arrays could be replaced with `std::vector` for safer memory management.
- Taxes, discounts, and configurable currencies are not supported.

## 🚀 Future Improvements

- [ ] Format monetary values to exactly two decimal places.
- [ ] Reject negative and invalid item prices.
- [ ] Improve validation for the number of items.
- [ ] Replace dynamic arrays with `std::vector`.
- [ ] Save generated receipts to text files.
- [ ] Add tax and discount calculations.
- [ ] Include receipt dates and receipt numbers.
- [ ] Allow users to edit or remove items.
- [ ] Improve the receipt layout and menu interface.

## 📄 License

No license has been specified yet. Add a license file if you intend to distribute or reuse the project publicly.

---

<p align="center">
  <strong>🧾 Receipt Creator</strong>
  <br>
  <sub>Made with C++ for learning and practice.</sub>
</p>