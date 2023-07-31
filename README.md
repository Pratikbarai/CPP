# CPP
# Linear Search in C++

This is a C++ program that demonstrates the implementation of linear search to find an element in an array.

## How it Works

The `linear_search` function takes three parameters:
1. `a[]`: The integer array in which we want to search for the element.
2. `size`: The size of the array.
3. `value`: The element we want to find in the array.

It then iterates through the array using a `for` loop to check if the given `value` is present. If found, it sets a flag `j` to 1 and breaks the loop. After the loop, the function checks the value of `j`, and if it is 1, it prints "Element found"; otherwise, it prints "Element not found."

In the `main` function, the user is prompted to enter the size of the array, followed by the elements of the array. Then, the user is asked to input the element they want to search for using linear search.

## How to Use

1. Clone the repository to your local machine:

```bash
git clone <repository_url>
g++ linear_search.cpp -o linear_search
