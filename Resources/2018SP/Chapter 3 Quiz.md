# Chapter 3 Quiz - Expressions and Interactivity

1. What header files must be included in the following program?
    ```c++
    int main()
    {
        double amount = 89.7;
        cout << showpoint << fixed;
        cout << setw(8) << amount << endl;
        return 0;
    }
    ```
2. Assume that qty and salesReps are both integers. Use a type cast expression to rewrite the following statement so it will no longer perform integer division.<br>
    ```c++
    unitsEach = qty / salesReps;
    ```
    
3. Assume value is an integer variable. If the user enters 3.14 in response to the following programming statement, what will be stored in value?<br>
    ```c+
    cin >> value;
    ```
    A) 3.14<br>
    B) 0<br>
    C) 3<br>
    D) Nothing. An error message is displayed.<br>

### Fill in the blank
4. The `_____` object can be used to read data typed at the keyboard.
5. When the user types values at the keyboard, those values are first stored in an area of memory known as the `_______ _______`.
6. An ________ is a programming statement that has a value. Usually, consisting of an operator and its operands.
7. When C++ is working with an operator, it strives to convert the operands to the same type, this automatic conversion is known as `_______ _________`.
8. When a variable is assigned a value that is too large or too small in range for that variable’s data type, the variable `_________` or `__________`.
9. `______ ________` allows you to perform manual data type conversion.

### Find The Match Terms
| Stream | Manipulator |
| --- | --- |
| `____` | Establishes a print field of n spaces. |
| `____` | Displays floating-point numbers in fixed point notation. |
| `____` | Causes a decimal point and trailing zeroes to be displayed, even if there is no fractional part. |
| `____` | Sets the precision of floating-point numbers. |
| `____` | Causes subsequent output to be left justified. |
| `____` | Causes subsequent output to be right justified. |
| Choices |  showpoint, left, setw(n), fixed, right, setprecision(n) |

<!--
# Chapter 3 Quiz - Answers
1. iomanip
2. unitsEach = static_cast<double>(qty) / static_cast<double>(salesReps);
3. C
4. cin
5. keyboard buffer
6. expression
7. type coercion
8. overflows, underflows
9. Type casting
10. setw(n), fixed, showpoint, setprecision(n), left, right
-->
