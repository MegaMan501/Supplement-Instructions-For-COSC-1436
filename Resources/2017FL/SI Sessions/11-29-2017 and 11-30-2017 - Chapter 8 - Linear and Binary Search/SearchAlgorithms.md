# Searching Algorithms

![Binary vs Linear Search](/Resources/Pictures/binary-and-linear-search-animations.gif)

source: `https://blog.penjee.com/wp-content/uploads/2015/04/binary-and-linear-search-animations.gif`

## 1. Linear Search

The **_linear_** search uses a loop to sequentially step through an array, starting with the first element.

It compares each element with the value being searched for and stops when either the value is found or
the end of the array is encountered. If the value being searched for is not in the array, the
algorithm will unsuccessfully search to the end of the array.

### Pseudo-Code

```
Set found to false.
Set position to −1.
Set index to 0.

While found is false and index < number of elements
{
    If list[index] is equal to search value
    {
        found = true.
        position = index.
    }
    Add 1 to index.
}

Return position.

```

## 2. Binary Search
The **_binary_** search is a clever algorithm that is much more efficient than the linear search.
Its only requirement is that the values in the array be sorted in order. Instead of testing the
array’s first element, this algorithm starts with the element in the middle. If that element hap-
pens to contain the desired value, then the search is over. Otherwise, the value in the middle
element is either greater than or less than the value being searched for. If it is greater, then
the desired value (if it is in the list) will be found somewhere in the first half of the array.
If it is less, then the desired value (again, if it is in the list) will be found somewhere in the
last half of the array. In either case, half of the array’s elements have been eliminated from
further searching.

If the desired value was not found in the middle element, the procedure is repeated for the
half of the array that potentially contains the value. For instance, if the last half of the array
is to be searched, the algorithm immediately tests its middle element. If the desired value
is not found there, the search is narrowed to the quarter of the array that resides before or
after that element. This process continues until either the value being searched for is found
or there are no more elements to test.

### Pseudo-Code
```
Set first index to 0.
Set last index to the last subscript in the array.
Set found to false.
Set position to −1.

While found is not true and first is less than or equal to last
{
    Set middle to the subscript halfway between array[first] and array[last].

    If array[middle] equals the desired value
    {
        Set found to true.
        Set position to middle.
    }
    Else If array[middle] is greater than the desired value
    {
        Set last to middle − 1.
    }
    Else
    {
        Set first to middle + 1.
    }


}

Return position.
```
