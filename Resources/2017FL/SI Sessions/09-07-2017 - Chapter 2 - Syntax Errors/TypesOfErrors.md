# The Three Major Types of **Errors**:

## 1. **Syntax** `(Compilation Error)`
* Caused from syntax and/or semantic errors
* Easiest errors to find because the program will not compile with these types of errors
    * Example:
    ```c++
    int main()
    {
        cout << "Hello there, " everyone << "." << endl;  
    }
    ```

## 2. **Run-Time** `(Semantic Error)`
* Caused when the program attempts to carry out and operation that is impossible to do.
* Invalid memory access, divide by zero.
* Sometimes difficult to find when intermittent.
    * Example:
    ```c++
    int main()
    {
        int num1 = 13, num2 = 0;

        cout << endl << num1 / num2 << endl;
    }
    ```

## 3. **Logical**
* Error caused by incorrect sequence of statements.
* Most difficult error to find because the program will continue to run but produce incorrect results.
* Most commonly due to an incorrect `boolean` expressions.
    * Example:
    ```c++
    int main()
    {
        int num1 = 18, num2 = 6;

        if ( num2 > num1)
            cout << "Logical Error";
    }
    ```
