# Chapter 6 Quiz - Functions

1. A `_______` is a statement that causes a function to execute.<br>
    a.	definition<br>
    b.	call<br>
    c.	argument<br>
    d.	body<br>
2. A function `_____` contains the statements that make up the function.<br>
    a.	definition<br>
    b.	parameter<br>
    c.	return type<br>
    d.	body<br>
3. Function declarations are also known as `_____ _____`.<br>
    a.	function definitions<br>
    b.	function parameters<br>
    c.	function prototypes<br>
    d.	function name<br>
4. A program contains the following function<br>
    ```c++
    int cube(int num)
    {
        return num * num * num;
    }
    ```
    Write a statement that passes the value 4 to this function and assigns its return value to the variable result.

### __True__ or __False__
5. __T F__ Arguments are passed to the function parameters in the order they appear in the function call.
6. __T F__ The scope of a parameter is limited to the function which uses it.
7. __T F__ Changes to a function parameter always affect the original argument as well.
8. __T F__ In a function prototype, the names of the parameter variables may be left out.
9. __T F__ Many functions may have local variables with the same name.
10. __T F__ Overuse of global variables can lead to problems.

<!--
# Chapter 6 Quiz Answers
1. b, function call
2. a, definition
3. c, function prototypes
4. it should look something like this:
```c++
int main()
{
    int value = 4, result;  

    result = cube(value);
}
```
5. T
6. T
7. F
8. T
9. T
10. T
-->
