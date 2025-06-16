# 🛒 SmartCart — Deep Dive in C 

Welcome to **SmartCart**, a C terminal-based shopping simulator and tax calculator.  
This project is part of my **Deep Dive in C** series, where I build logic-driven apps using pure C without external libraries.

---

## 📌 Project Description

**SmartCart** allows a user to:
- 🧑‍💻 Sign in with name, age, email, and password
- 🛍️ Choose from 3 shopping categories:
  - 🍏 **Apple**: Tablet, iPhone, Watch
  - 📦 **Amazon**: T-shirt, Shoes, Shirt
  - 📺 **Netflix**: Basic, Standard, Pro
- 🔢 Select item quantity
- 💸 Automatically calculate subtotal, tax, and total
- 🧾 View a clear CLI-based receipt with all details

---

## 🧠 What I Learned

- Handling `scanf()` and user input
- Implementing multi-option logic with `if/else`
- Calculating percentage-based taxes
- Formatting terminal output
- Using arrays and characters in a practical flow

---

## 💡 How It Works

1. ✅ **User logs in** with personal info
2. 🎯 **Chooses a category**
3. 🧾 **Selects an item**
4. 🧮 **Calculates subtotal + tax**
5. 📄 **Displays the total bill with tax**

---

## ⚙️ Tech Stack

| Tool     | Description            |
|----------|------------------------|
| 🧠 C      | Programming language   |
| 💻 CLI   | Terminal interaction   |
| 🛠️ gcc   | C Compiler             |

---

## 📂 File Structure
```
SmartCart/
│
├── smartcart.c # Main C file
└── README.md # This documentation
```

---

## 🚀 Run This Project

### 📦 Compile
```
gcc smartcart.c -o smartcart

▶️ Run

./smartcart
```

## 🧾 Example Output
```
Welcome to SmartCart!
Enter your name: Muaddh
Enter your age: 25
Email: muaddh@example.com
Password: ********

✅ Signed in!

Choose a category:
a. Apple
b. Amazon
c. Netflix

Your choice: a

🛒 Apple Store
Choose an item:
a. Tablet ($450)
b. iPhone ($650)
c. Watch ($350)

Choice: b
Quantity: 1

Subtotal: $650.00
Tax (15%): $97.50
Total: $747.50
```

## 🏗️ Future Improvements

    ✅ Support multiple category selections with increasing tax

    📁 Save receipt as a .txt file

    🔐 Improve login system with masking and validation

    🧩 Use struct for better data handling

## 👤 Author

Muaddh Alsway
Front-End Developer & C Programmer

  <a href="https://mail.google.com/mail/muaddhalsway.com" target="_blank">
    <img src="https://img.shields.io/static/v1?message=Gmail&logo=gmail&label=&color=D14836&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="gmail logo"  />
  </a>
  <a href="https://www.linkedin.com/in/muaddh-alsway/" target="_blank">
    <img src="https://img.shields.io/static/v1?message=LinkedIn&logo=linkedin&label=&color=0077B5&logoColor=white&labelColor=&style=for-the-badge" height="35" alt="linkedin logo"  />
  </a>

## 🪪 License

This project is open-source and available under the MIT License.

## 🌟 Special Tagline

    "From logic to life — building C projects that simulate the real world."

## qlink Project


## 🔖 Hashtags (For Discoverability)

#CProgramming #DeepDiveInC #TerminalApp #SmartCart #BeginnerProject #CLIApp #TaxCalculator #CodeNewbie
