# 🧠 C++ OOP Concepts Simulator – Lab 4

This lab demonstrates **various types of inheritance** in C++ through real-world inspired simulations. It includes:

- ✅ Single Inheritance in a Student Information System
- ✅ Multi-Level Inheritance in a Payroll Management System
- ✅ Hierarchical Inheritance in an Organization Model
- ✅ Multiple Inheritance in a Device (Photocopier) Simulation

---

## 📚 Table of Contents

- [Project Structure](#-project-structure)  
- [How to Compile & Run](#-how-to-compile-and-run)  
- [Highlights](#-concepts-covered)  
- [Author](#-author)

---

## 📂 Project Structure

```
.
├── main.cpp                        # Looped Menu-driven demo for Inheritance Types
├── SingleInheritance.h            # Student inherits from Person (Student Info System)
├── MultiLevelInheritance.h        # Manager → Employee → Person (Payroll System)
├── HierarchicalInheritance.h      # Developer & Designer ← Employee (Org Structure)
├── MultipleInheritance.h          # Photocopier ← Printer & Scanner (Device Simulation)
```

---

## 🚀 How to Compile and Run

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/your-repo-name.git
   cd your-repo-name
   ```

2. **Compile the code**:
   ```bash
   g++ main.cpp -o inheritance_lab
   ```

3. **Run the program**:
   ```bash
   ./inheritance_lab
   ```

---

## 💡 Concepts Covered

- **Single Inheritance**  
  ➤ `Student` inherits from `Person` to simulate a Student Information System.

- **Multi-Level Inheritance**  
  ➤ `Manager` inherits from `Employee`, which in turn inherits from `Person`, modeling a Payroll System.

- **Hierarchical Inheritance**  
  ➤ `Developer` and `Designer` both inherit from the common base class `Employee`, representing an organization structure.

- **Multiple Inheritance**  
  ➤ `Photocopier` inherits functionalities from both `Printer` and `Scanner` classes to demonstrate a multi-functional device.

- **Constructor Execution Order**  
- **Class Reusability & Design**  
- **Menu-Driven Demonstration for User Interaction**

---

## 👨‍💻 Author

**Curated By** – [Shahzad Ahmed Awan](https://github.com/Shahzad-Ahmed-Awan)
