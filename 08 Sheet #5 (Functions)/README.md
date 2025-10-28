# 📘 Sheet #5: Functions

[⬅️ Back to Main](../README.md) | [➡️ Next: Sheet #6](../09%20Sheet%20%236%20(Math%20-%20Geometry)/README.md)

## 📋 Overview

Learn modular programming with functions:
- Function declaration and definition
- Parameters and return values
- Pass by value vs reference
- Function overloading
- Recursion basics

**Total Problems:** 15  
**Difficulty:** ⭐ Easy to ⭐⭐ Medium  
**Estimated Time:** 4-5 hours

## 🎯 Learning Objectives

- ✅ Write reusable functions
- ✅ Understand parameter passing
- ✅ Work with arrays in functions
- ✅ Implement common utilities
- ✅ Build modular solutions

## 📊 Key Problems

| Problem | Title | Topics | Difficulty |
|---------|-------|--------|------------|
| A | Add | Basic Functions | ⭐ Easy |
| B | Print | Parameters | ⭐ Easy |
| C | Wonderful Number | Return Values | ⭐ Easy |
| D | Prime Function | Algorithms | ⭐⭐ Medium |
| E | Swap | Pass by Reference | ⭐ Easy |
| G | Max and MIN | Multiple Returns | ⭐ Easy |
| I | Swapping With Matrix | 2D Arrays | ⭐⭐ Medium |
| M | Distinct Numbers | Arrays | ⭐⭐ Medium |
| O | Five in One | Multiple Operations | ⭐⭐ Medium |

## 💡 Key Concepts

### Function Basics
```cpp
// Declaration
return_type function_name(parameters);

// Definition
int add(int a, int b) {
    return a + b;
}

// Call
int result = add(5, 3);
```

### Pass by Value vs Reference
```cpp
// Pass by value - creates copy
void increment(int x) {
    x++;  // Original unchanged
}

// Pass by reference - modifies original
void increment(int& x) {
    x++;  // Original is modified
}

// Arrays always passed by reference
void modify(int arr[], int n) {
    arr[0] = 100;  // Original modified
}
```

### Function Overloading
```cpp
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}
```

### Common Utility Functions

**Prime Check:**
```cpp
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
```

**Swap Function:**
```cpp
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
```

**Array Operations:**
```cpp
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
```

## 🎓 Study Tips

1. **Start simple** - Basic functions first
2. **Understand scope** - Local vs global variables
3. **Practice parameters** - Value vs reference
4. **Build utilities** - Create reusable functions
5. **Test thoroughly** - Try different inputs

## ⚠️ Common Mistakes

- Forgetting to return a value
- Wrong parameter passing (value when need reference)
- Not declaring function before use
- Modifying array size in function
- Returning reference to local variable

## 📚 Resources

- [Functions in C++](https://www.learncpp.com/cpp-tutorial/introduction-to-functions/)
- [Pass by Reference](https://www.learncpp.com/cpp-tutorial/pass-by-lvalue-reference/)

---

**Happy Coding! 🚀**
