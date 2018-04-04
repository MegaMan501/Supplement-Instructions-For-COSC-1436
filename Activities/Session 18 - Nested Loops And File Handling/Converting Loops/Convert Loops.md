# Covert the loops:
Convert the given loops to the indicated loop. 

## 1. Convert the following while loop to a do-while loop:

```c++
int x = 1;

while (x > 0)
{
    cout << "enter a number: ";
    cin >> x;
}
```
<!--
### 1. Solution: 
```c++
int x = 1;

do
{
    cout << "enter a number: ";
    cin >> x;
} while (x > 0);
```
-->

## 2. Convert the following do-while loop to a while loop:

```c++
char sure;

do
{
    cout << "Are you sure you want to quit? ";
    cin >> sure;
} while (sure != 'Y' && sure != 'N');
```
<!--
### 2. Solution
```c++
char sure;

cout << "Are you sure you want to quit? ";
cin >> sure;

while (sure != 'Y' && sure != 'N')
{
    cout << "Are you sure you want to quit? ";
    cin >> sure;
}
```
-->

## 3. Convert the following while loop to a for loop:

```c++
int count = 0;

while (count < 50)
{
    cout << "count is " << count << endl;
    count++;
}
```
<!--
### 3. Solution
```c++
for(int count = 0, count < 50; count++)
{
    cout << "count is " << count << endl;
}
```
-->

## 4. Convert the following for loop to a while loop:

```c++
for (int x = 50; x > 0; x−−)
{
    cout << x << " seconds to go.\n";
}
```
<!--
### 4. Solution
```c++
int x = 50; 
while(x > 0)
{
    cout << x << " seconds to go.\n";
    x−−; 
}
```
-->
