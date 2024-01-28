# Algorithms

## Linear Search
Array: Contiguous data in the computers memory...
Linear search: simply searching from left to right.

## Binary Search
log2n algorithm

## Big O Notation
O Represents the uppper bound.

O(n^2) - Quadratic
O(n_log_n) - 
O(n) - Linear Time. Linear search. 
O(log_n) - Logarithmic. Example Binary search.
O(1) - Constant number of steps.

## Omega - represents the lower bound
As few as...

O(n^2) - Quadratic
O(n_log_n) - 
O(n) - Linear Time. 
O(log_n) - Logarithmic. 
O(1) - If lucky with linear search, can get Omega(1)

## Pheta - Big O and Omega are the same
e.g. counting a bunch of people 1 by 1.

## Sorting Algorithms
1. Selection Sort
- Go through whole array to find smallest value. Swap that value with value at index 0.
- Go from index 1. Find smallest value in array. Swap with value at index 1.
- etc etc

Mathematically the steps in the selection sort are as follows... 
(n - 1) + (n - 2) + ... + 1
Which is the same as n^2/2 - n/2
==> algorithm is on the order of... O(n^2)

2. Bubble Sort
- Take index 0 and index 1. If index 1 is smaller, swap with index 0.
- Take index 1 and index 2. If index 2 is smaller, swap with index 1.
- etc etc.
- Loop again as many times as needed. Will find end of array will slowly start sorting in the opposite way as the selection sort.

==> O(n^2)

## Recursion - A function that calls itself
A function that calls itself is 're-called' or 're-cursed'
