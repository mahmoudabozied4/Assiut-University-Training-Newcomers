# 📘 Sheet #4: Strings

[⬅️ Back to Main](../README.md) | [➡️ Next: Sheet #5](../08%20Sheet%20%235%20(Functions)/README.md)

## 📋 Overview

Master string manipulation in C++:
- String input/output operations
- Character manipulation
- String algorithms and searching
- Parsing and conversion
- Advanced string techniques

**Total Problems:** 26  
**Difficulty:** ⭐ Easy to ⭐⭐⭐ Hard  
**Estimated Time:** 6-8 hours

## 🎯 Learning Objectives

- ✅ Work with C++ strings and characters
- ✅ Implement string algorithms
- ✅ Master string parsing
- ✅ Solve pattern matching problems
- ✅ Handle string transformations

## 📊 Key Problems

| Problem | Title | Topics | Difficulty |
|---------|-------|--------|------------|
| A | Create A New String | I/O | ⭐ Easy |
| B | Let's use Getline | Input | ⭐ Easy |
| C | Compare | Comparison | ⭐ Easy |
| F | Way Too Long Words | Transformation | ⭐ Easy |
| G | Conversion | Case Conversion | ⭐ Easy |
| I | Palindrome | Checking | ⭐ Easy |
| J | Count Letters | Frequency | ⭐⭐ Medium |
| M | Subsequence String | Two Pointers | ⭐⭐ Medium |
| W | Encrypt-Decrypt Message | Algorithms | ⭐⭐⭐ Hard |
| Z | Clean Code | Parsing | ⭐⭐⭐ Hard |

## 💡 Key Concepts

### String Basics
```cpp
// Declaration
string s = "Hello";
string s(5, 'a');  // "aaaaa"

// Input
cin >> s;           // Reads until whitespace
getline(cin, s);    // Reads entire line

// Length
int len = s.length();  // or s.size()

// Access characters
char c = s[0];      // First character
char last = s[s.length() - 1];  // Last character
```

### String Operations
```cpp
// Concatenation
string s1 = "Hello";
string s2 = "World";
string s3 = s1 + " " + s2;  // "Hello World"

// Comparison
if (s1 == s2) // Equal
if (s1 < s2)  // Lexicographical comparison

// Substring
string sub = s.substr(start, length);
string sub = s.substr(start);  // From start to end

// Find
int pos = s.find("abc");  // Returns position or string::npos
```

### Character Functions
```cpp
#include <cctype>

islower(c)  // Check if lowercase
isupper(c)  // Check if uppercase
isdigit(c)  // Check if digit
isalpha(c)  // Check if letter

tolower(c)  // Convert to lowercase
toupper(c)  // Convert to uppercase
```

### Common Patterns

**Check Palindrome:**
```cpp
bool isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) return false;
    }
    return true;
}
```

**Count Character Frequency:**
```cpp
int freq[26] = {0};
for (char c : s) {
    freq[c - 'a']++;
}
```

**Convert Case:**
```cpp
// To lowercase
for (char& c : s) {
    c = tolower(c);
}

// To uppercase  
for (char& c : s) {
    c = toupper(c);
}
```

**Check Subsequence:**
```cpp
bool isSubsequence(string s, string t) {
    int j = 0;
    for (int i = 0; i < s.length() && j < t.length(); i++) {
        if (s[i] == t[j]) j++;
    }
    return j == t.length();
}
```

## 🎓 Study Tips

1. **Master getline()** - For reading strings with spaces
2. **Use string functions** - Don't reinvent the wheel
3. **Watch for edge cases** - Empty strings, spaces, special chars
4. **Practice character operations** - Common in many problems
5. **Learn string algorithms** - Pattern matching, parsing

## ⚠️ Common Mistakes

- Forgetting `cin.ignore()` after reading numbers before `getline()`
- Using `cin >>` when you need `getline()`
- Not handling empty strings
- Wrong string indexing (0-based)
- Not clearing input buffer

## 📚 Resources

- [C++ String Reference](https://en.cppreference.com/w/cpp/string/basic_string)
- [String Algorithms](https://cp-algorithms.com/string/string-hashing.html)

---

**Happy Coding! 🚀**
