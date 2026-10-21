# 🧾 Receipt Creator

<p align="center">
  <strong>A simple console-based receipt generator written in C++</strong>
  <br>
  Built to practice C++ programming, input validation, and console formatting.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-11%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++11+">
  <img src="https://img.shields.io/badge/Version-1.0.0-2ea44e?style=for-the-badge" alt="Version 1.0.0">
</p>

---

## ✨ Features

- 🧾 Generate formatted receipts.
- 👤 Enter customer and item names.
- 💰 Accept decimal amounts.
- 📏 Calculate receipt width dynamically.
- 🛡️ Validate empty names and non-positive amounts.
- 🔁 Simple interactive menu.

## ⚙️ Requirements

- C++ compiler (GCC, Clang, or MSVC).
- C++11 or newer.

## 📥 Installation & Build

Clone the repository:

```bash
git clone <repository-url>
cd Receipt-Creator
```

Compile with GCC:

```bash
g++ main.cpp -std=c++11 -Wall -Wextra -o receipt
```

Run the program:

**Linux / macOS**
```bash
./receipt
```

**Windows**
```powershell
.\receipt.exe
```

## 🖥️ Example Output

```text
+=======================+
+    RECEIPT CREATOR    +
+=======================+
1. Create Reciept
2. Exit
Input:
```

Example receipt:

```text
|----------------------|
|RECEIPT               |
|Name: John             |
|Item Bought: Keyboard  |
|Amount: $50.000000     |
|----------------------|
```

> **Note:** The amount currently uses `std::to_string()`, which typically displays six decimal places.

## 📁 Project Structure

```text
Receipt-Creator/
├── main.cpp
└── README.md
```

## ⚠️ Limitations

- Receipts are not saved to files.
- bad formatting of items.
- Invalid monetary input needs better handling.
- Currency formatting is not limited to two decimal places.

## 🚀 Future Improvements

- [ ] Format amounts to two decimal places.
- [ ] Save receipts to files.
- [ ] Improve input validation.
- [ ] Add tax and discount calculations.

## 📄 License

No license has been specified yet.

---

<p align="center">
  <strong>🧾 Receipt Creator</strong>
  <br>
  <sub>Made with C++ for learning and practice.</sub>
</p>
````
