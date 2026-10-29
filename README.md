# 🧾 Receipt Creator

<p align="center">
  <strong>A simple, interactive receipt generator written in C++</strong>
  <br>
  Create receipts with multiple items, discounts, tax calculations, and formatted totals directly in your terminal.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-11%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++11+">
  <img src="https://img.shields.io/badge/Version-1.2.0-2ea44e?style=for-the-badge" alt="Version 1.2.0">
</p>

---

## ✨ Features

- 🧾 Generate formatted receipts in the console.
- 👤 Enter a customer's name.
- 🛒 Add multiple items to a single receipt.
- 💰 Enter individual item prices.
- 🏷️ Apply percentage discounts to individual items.
- 🧮 Automatically calculate the subtotal after discounts.
- 📊 Add a configurable tax rate to the subtotal.
- 💵 Calculate tax amounts and grand totals.
- 📏 Dynamically adjust receipt width based on the content.
- 🛡️ Validate empty customer and item names.
- ⚠️ Detect some invalid numeric inputs.
- 🔁 Navigate through an interactive menu.
- 🧹 Use dynamic memory allocation to store item names and prices.

## ⚙️ Requirements

- A C++ compiler, such as GCC, Clang, or MSVC.
- C++11 or newer.
- A terminal or command-line interface.

## 📥 Installation and Build

### 1. Clone the repository

```bash
git clone <repository-url>
cd assassin-cloud-cake
````

Replace `<repository-url>` with the URL of your repository.

### 2. Compile the program

The source file is named `cake.cpp`.

Using GCC:

bash

```
g++ cake.cpp -std=c++11 -Wall -Wextra -o receipt
```

Using Clang:

bash

```
clang++ cake.cpp -std=c++11 -Wall -Wextra -o receipt
```

### 3. Run the program

Linux / macOS

bash

```
./receipt
```

Windows (PowerShell)

powershell

```
.\receipt.exe
```

## 🖥️ Example Usage

### Main Menu

text

```
+=======================+
+    RECEIPT CREATOR    +
+=======================+
1. Create Receipt
2. Exit
Input:
```

### Creating a Receipt

For example, suppose a customer named John buys a keyboard and a mouse.

text

```
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
```

### Applying Discounts

The program asks whether any item has a discount.

For example, apply a 10% discount to the keyboard:

text

```
Does any item have discount(y) or no discount(n):
y
1.Keyboard
2.Mouse
Input the index of item which you wanna add discount to:
1
Input the discount percentage e.g 10%(don't include percentage sign in input just type e.g 10):
10
```

The keyboard's discounted price becomes $45.00, while the mouse remains $25.00.

You can repeat the discount prompt to apply discounts to other items. Enter `n` when you are finished.

### Adding Tax

The program then asks whether to add tax.

For example, apply an 18% tax rate:

text

```
Type (y) to add tax or (n or any char character) to not add tax:
y
Please input tax rate e.g 18%(don't include % sign) or default(5%):
18
```

The subtotal after discounts is $70.00.

- Subtotal: $70.00
- Tax rate: 18%
- Tax amount: $12.60
- Grand total: $82.60

> Note: These amounts are illustrative. The current program typically displays six decimal places because it uses `std::to_string()`.

## 🧾 Receipt Preview

A simplified illustration of the generated receipt:

text

```
|-----------------------------------|
|RECEIPT                            |
|Name: John                         |
|Items:                      Cost:  |
|***********************************|
|1.Keyboard:              $50.000000|
|Discount:                10.000000%|
|Discounted Price:        $45.000000|
|                                   |
|2.Mouse:                 $25.000000|
|                                   |
|***********************************|
|Subtotal: $70.000000               |
|Tax Rate: 18.000000%               |
|Tax Amount: $12.600000             |
|Grand Total: $82.600000            |
|-----------------------------------|
```

> Note: This is an illustrative example, not an exact reproduction of the console output. The current receipt formatting has some alignment inconsistencies, and its width is calculated using string lengths that include six-decimal-place monetary values.

## 🧠 Concepts Practiced

- Functions: Separating menu display, input handling, receipt generation, and waiting for user input.
- Strings: Using `std::string` and `getline()` to read customer and item names.
- Arrays and pointers: Storing item names, prices, and discounts in dynamically allocated arrays.
- Dynamic memory management: Allocating arrays with `new[]` and releasing them with `delete[]`.
- Input validation: Checking stream errors and rejecting empty names and non-positive item counts, although validation is incomplete.
- Arithmetic operations: Calculating discounted prices, subtotals, tax amounts, and grand totals.
- Console formatting: Using `std::setw()`, `std::setfill()`, `std::left`, and `std::right`.
- Loops and conditionals: Processing multiple items, applying discounts, and handling menu choices.

## ⚠️ Current Limitations

- Receipts are displayed in the console and are not saved to files.
- Monetary values typically display six decimal places instead of two-decimal currency formatting.
- Invalid input for item counts and some numeric fields is not handled robustly.
- Very large item counts may cause excessive memory allocation.
- Some invalid discount and tax inputs can lead to incorrect calculations or misleading receipts.
- The program uses raw pointers and dynamic arrays, which require careful memory management.
- The discount workflow allows repeated discounts on an item, but the displayed discount percentage does not          represent the combined discount accurately.
- The default 5% tax rate is mentioned in the prompt but is not automatically applied.
- Currency is fixed to the dollar symbol (`$`).
- The program does not support tax exemptions, configurable currencies, or receipt numbering.

## 🚀 Future Improvements

- [ ]Format monetary values to exactly two decimal places.
- [ ]Improve validation for menu choices, item counts, prices, discounts, and tax rates.
- [ ]Replace dynamic arrays with `std::vector`.
- [ ]Use safer input handling and prevent invalid input from disrupting the program.
- [ ]Save generated receipts to text files.
- [ ]Add receipt dates and unique receipt numbers.
- [ ]Support configurable currencies and tax rates.
- [ ]Allow users to edit or remove items.
- [ ]Improve receipt layout and column alignment.
- [ ]Handle repeated discounts consistently.
- [ ]Add unit tests for calculations and input validation.

## 📁 Project Structure

text

```
assassin-cloud-cake/
├── README.md
└── cake.cpp
```

- `cake.cpp` — Contains the interactive menu, input handling, discount logic, tax calculations, and receipt generation.
- `README.md` — Provides project documentation, build instructions, examples, and a list of planned improvements.