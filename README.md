# 🚀 Assiut University Training - Complete Solutions

<div align="center">

![C++](https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Problems Solved](https://img.shields.io/badge/Problems%20Solved-300+-success?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)
![Contributions Welcome](https://img.shields.io/badge/Contributions-Welcome-brightgreen?style=for-the-badge)

**A comprehensive collection of C++ solutions for Assiut University Training problems**

[📚 Problem Set](https://codeforces.com/group/MWSDmqGsZm/contests) • [👨‍💻 My Profile](https://github.com/mahmoudabozied4) • [🤝 Contributing](#contributing) • [📖 Documentation](#documentation)

</div>

---

## 📋 Table of Contents

- [About](#about)
- [Repository Structure](#repository-structure)
- [Problem Index](#problem-index)
- [Getting Started](#getting-started)
- [Topics Covered](#topics-covered)
- [Usage Guide](#usage-guide)
- [Learning Path](#learning-path)
- [Contributing](#contributing)
- [Resources](#resources)
- [License](#license)

---

## 🎯 About

This repository contains **300+ solved problems** from the Assiut University Training program, designed to help newcomers master competitive programming using C++. Each solution is carefully crafted with:

✅ **Clean, readable code**  
✅ **Detailed comments**  
✅ **Optimal time complexity**  
✅ **Educational value**

### 🏆 Progress Tracker

| Category | Problems | Status |
|----------|----------|--------|
| **Sheet #1** - Data Types & Conditions | 26/26 | ✅ Complete |
| **Contest #1** | 9/9 | ✅ Complete |
| **Sheet #2** - Loops | 26/26 | ✅ Complete |
| **Contest #2** | 8/8 | ✅ Complete |
| **Sheet #3** - Arrays | 26/26 | ✅ Complete |
| **Contest #3** | 7/7 | ✅ Complete |
| **Sheet #4** - Strings | 26/26 | ✅ Complete |
| **Sheet #5** - Functions | 15/15 | ✅ Complete |
| **Sheet #6** - Math & Geometry | 14/14 | ✅ Complete |
| **Sheet #7** - Recursion | 26/26 | ✅ Complete |
| **Sheet #8** - General Easy | 26/26 | ✅ Complete |
| **Sheet #9** - General Medium | 26/26 | ✅ Complete |
| **Sheet #10** - General Hard | 26/26 | ✅ Complete |
| **Total** | **300+** | ✅ **Complete** |

---

## 📁 Repository Structure

```
Assiut-University-Training-Newcomers/
│
├── 📂 01 Sheet #1 (Data type - Conditions)/
│   ├── README.md                    # Sheet overview & problem links
│   ├── A. SayHelloWithCpp.cpp
│   ├── B. BasicDataTypes.cpp
│   └── ...
│
├── 📂 02 Contest #1/
│   ├── README.md
│   └── ...
│
├── 📂 03 Sheet #2 (Loops)/
│   ├── README.md
│   └── ...
│
├── 📂 [Additional sheets...]
│
├── 📂 templates/
│   ├── competitive_template.cpp     # Standard CP template
│   └── fast_io_template.cpp         # Optimized I/O template
│
├── 📂 utils/
│   ├── common_algorithms.cpp        # Reusable functions
│   └── debugging_tools.cpp          # Debugging macros
│
├── 📄 CMakeLists.txt
├── 📄 CONTRIBUTING.md               # Contribution guidelines
├── 📄 LEARNING_PATH.md              # Recommended learning order
└── 📄 README.md                     # This file
```

---

## 📊 Problem Index

### Sheet #1: Data Types & Conditions (26 Problems)

| # | Problem | Difficulty | Topics | Time | Space | Solution |
|---|---------|------------|--------|------|-------|----------|
| A | Say Hello With C++ | ⭐ Easy | I/O | O(1) | O(1) | [View](01%20Sheet%20%231%20(Data%20type%20-%20Conditions)/A.%20SayHelloWithCpp.cpp) |
| B | Basic Data Types | ⭐ Easy | Data Types | O(1) | O(1) | [View](01%20Sheet%20%231%20(Data%20type%20-%20Conditions)/B.%20BasicDataTypes.cpp) |
| C | Simple Calculator | ⭐ Easy | Math | O(1) | O(1) | [View](01%20Sheet%20%231%20(Data%20type%20-%20Conditions)/C.%20SimpleCalculator.cpp) |
| D | Difference | ⭐ Easy | Math | O(1) | O(1) | [View](01%20Sheet%20%231%20(Data%20type%20-%20Conditions)/D.%20Difference.cpp) |
| ... | ... | ... | ... | ... | ... | ... |

### Sheet #2: Loops (26 Problems)

| # | Problem | Difficulty | Topics | Time | Space | Solution |
|---|---------|------------|--------|------|-------|----------|
| A | 1 to N | ⭐ Easy | Loops | O(N) | O(1) | [View](03%20Sheet%20%232%20(Loops)/A.%201toN.cpp) |
| B | Even Numbers | ⭐ Easy | Loops | O(N) | O(1) | [View](03%20Sheet%20%232%20(Loops)/B.%20EvenNumbers.cpp) |
| ... | ... | ... | ... | ... | ... | ... |

### Sheet #3: Arrays (26 Problems)

| # | Problem | Difficulty | Topics | Time | Space | Solution |
|---|---------|------------|--------|------|-------|----------|
| A | Summation | ⭐ Easy | Arrays | O(N) | O(N) | [View](05%20Sheet%20%233%20(Arrays)/A.%20Summation.cpp) |
| ... | ... | ... | ... | ... | ... | ... |

*For complete problem index with links, see individual sheet READMEs*

---

## 🚀 Getting Started

### Prerequisites

- **C++ Compiler**: GCC 7.0+ or Clang 5.0+
- **CMake**: 3.10+ (optional)
- **Code Editor**: VS Code, CLion, or any C++ IDE
- **Basic C++ Knowledge**: Variables, loops, conditions

### Installation & Setup

1. **Clone the repository**
   ```bash
   git clone https://github.com/mahmoudabozied4/Assiut-University-Training-Newcomers.git
   cd Assiut-University-Training-Newcomers
   ```

2. **Compile a solution**
   ```bash
   # Method 1: Direct compilation
   g++ -std=c++17 -O2 "01 Sheet #1 (Data type - Conditions)/A. SayHelloWithCpp.cpp" -o solution
   ./solution
   
   # Method 2: Using CMake
   mkdir build && cd build
   cmake ..
   make
   ```

3. **Test with input**
   ```bash
   # Interactive input
   ./solution
   
   # From file
   ./solution < input.txt
   
   # Save output
   ./solution < input.txt > output.txt
   ```

---

## 📚 Topics Covered

### 1️⃣ **Fundamentals** (Sheets 1-2)
- Data types (int, long long, double, char, string)
- Input/Output operations
- Conditional statements (if, else, switch)
- Loops (for, while, do-while)
- Nested loops and patterns

### 2️⃣ **Data Structures** (Sheets 3-4)
- Arrays and matrices
- String manipulation
- Character operations
- 2D arrays

### 3️⃣ **Programming Concepts** (Sheets 5-7)
- Functions and modular programming
- Mathematical operations
- Number theory (GCD, LCM, primes)
- Geometry basics
- Recursion and backtracking

### 4️⃣ **Advanced Problem Solving** (Sheets 8-10)
- Greedy algorithms
- Sorting and searching
- Dynamic programming basics
- Mixed difficulty challenges

---

## 📖 Usage Guide

### For Learners

1. **Start with Sheet #1** - Build strong fundamentals
2. **Solve problems yourself first** - Only check solutions when stuck
3. **Understand the logic** - Don't just copy code
4. **Practice variations** - Modify problems to test understanding
5. **Track your progress** - Mark completed problems

### For Contributors

1. **Follow the coding style** - Clean, commented code
2. **Include complexity analysis** - Time and space
3. **Add explanations** - Help others learn
4. **Test thoroughly** - Verify edge cases
5. **Update documentation** - Keep READMEs current

---

## 🗺️ Learning Path

### Beginner Track (Weeks 1-4)
1. ✅ Sheet #1: Data Types & Conditions
2. ✅ Contest #1
3. ✅ Sheet #2: Loops
4. ✅ Contest #2

### Intermediate Track (Weeks 5-8)
5. ✅ Sheet #3: Arrays
6. ✅ Contest #3
7. ✅ Sheet #4: Strings
8. ✅ Sheet #5: Functions

### Advanced Track (Weeks 9-12)
9. ✅ Sheet #6: Math & Geometry
10. ✅ Sheet #7: Recursion
11. ✅ Sheet #8-10: Mixed Problems

*For detailed learning path with daily goals, see [LEARNING_PATH.md](LEARNING_PATH.md)*

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

- 🐛 **Report bugs** - Open an issue
- 💡 **Suggest improvements** - Share better solutions
- 📝 **Add explanations** - Help others learn
- ✨ **Fix typos** - Keep documentation clean
- 🎯 **Add test cases** - Improve solution quality

See [CONTRIBUTING.md](CONTRIBUTING.md) for detailed guidelines.

---

## 📚 Resources

### Official Links
- [Assiut University Training - Codeforces Group](https://codeforces.com/group/MWSDmqGsZm/contests)
- [Problem Sets](https://codeforces.com/group/MWSDmqGsZm/contests)

### Learning Materials
- [C++ Reference](https://en.cppreference.com/)
- [CP-Algorithms](https://cp-algorithms.com/)
- [Codeforces Tutorials](https://codeforces.com/blog/entry/57282)
- [USACO Guide](https://usaco.guide/)

### Competitive Programming Platforms
- [Codeforces](https://codeforces.com/)
- [AtCoder](https://atcoder.jp/)
- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/)

---

## 👨‍💻 Author

**Mahmoud Abozied**

- GitHub: [@mahmoudabozied4](https://github.com/mahmoudabozied4)
- LinkedIn: [Connect with me](https://linkedin.com/in/mahmoudabozied4)

---

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

```
MIT License - Copyright (c) 2024 Mahmoud Abozied
```

---

## 🌟 Acknowledgments

- **Assiut University** - For creating this excellent training program
- **Codeforces** - For hosting the problem sets
- **The CP Community** - For continuous learning and support
- **Contributors** - Everyone who helps improve this repository

---

## 💬 Support

Found this helpful? Give it a ⭐ and share with others learning competitive programming!

Have questions? Open an [issue](https://github.com/mahmoudabozied4/Assiut-University-Training-Newcomers/issues) or start a [discussion](https://github.com/mahmoudabozied4/Assiut-University-Training-Newcomers/discussions).

---

<div align="center">

**Happy Coding! 🚀**

Made with ❤️ by competitive programming enthusiasts

</div>
