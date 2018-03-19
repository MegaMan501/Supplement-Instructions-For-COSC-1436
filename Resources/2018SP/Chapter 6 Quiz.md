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
    Write a statement that passes the value 4 to this function and assigns its return value<br>
    to the variable result.
    
## Chapter 6 Quiz Answers
1. b, function call
2. a, definition
3. c, function prototypes 
4. it should look something like this: 
```c++
int main()
{
    int c1=1, c2=2, c3=3, c4=4; 
    int r1, r2, r3, r4; 

    r1=cube(c1);
    r2=cube(c2);
    r3=cube(c3);
    r4=cube(c4);
}
```
