# Sorting Algorithms

This repository contains implementations of three basic sorting algorithms: Selection Sort, Bubble Sort, and Insertion Sort. Each sorting algorithm is explained with its process, steps, and examples.

## 1. Selection Sort

### Process

1. Iterate through the array.
2. For each position, find the smallest element in the remaining unsorted portion of the array.
3. Swap the smallest element found with the element at the current position.
4. Move to the next position and repeat until the array is sorted.

### Steps

1. Start with the first element (index 0).
2. Find the smallest element from index 0 to the end of the array.
3. Swap it with the element at index 0.
4. Move to the next element (index 1) and repeat the process.
5. Continue until the end of the array.

### Example

For an array: `[64, 25, 12, 22, 11]`

1. Find the smallest element from `[64, 25, 12, 22, 11]` -> `11`
2. Swap `11` with `64`: `[11, 25, 12, 22, 64]`
3. Find the smallest element from `[25, 12, 22, 64]` -> `12`
4. Swap `12` with `25`: `[11, 12, 25, 22, 64]`
5. Continue this process.

## 2. Bubble Sort

### Process

1. Iterate through the array and repeatedly swap adjacent elements if they are in the wrong order.
2. Each pass through the array "bubbles" the largest unsorted element to its correct position.
3. Repeat until no more swaps are needed.

### Steps

1. Compare each pair of adjacent elements.
2. If the elements are out of order, swap them.
3. Continue this process for all elements.
4. Repeat until the array is sorted.

### Example

For an array: `[64, 25, 12, 22, 11]`

1. Compare `64` and `25`, swap: `[25, 64, 12, 22, 11]`
2. Compare `64` and `12`, swap: `[25, 12, 64, 22, 11]`
3. Compare `64` and `22`, swap: `[25, 12, 22, 64, 11]`
4. Compare `64` and `11`, swap: `[25, 12, 22, 11, 64]`
5. Repeat this process until the array is sorted.

## 3. Insertion Sort

### Process

1. Iterate through the array and build the sorted portion one element at a time.
2. For each element, compare it to the elements in the sorted portion and insert it in the correct position.
3. Repeat until the entire array is sorted.

### Steps

1. Start with the second element (index 1).
2. Compare it with the elements in the sorted portion (elements before it).
3. Insert it into the correct position in the sorted portion.
4. Move to the next element and repeat the process.

### Example

For an array: `[64, 25, 12, 22, 11]`

1. Take `25` (index 1) and insert it into the sorted portion `[64]`: `[25, 64, 12, 22, 11]`
2. Take `12` (index 2) and insert it into the sorted portion `[25, 64]`: `[12, 25, 64, 22, 11]`
3. Take `22` (index 3) and insert it into the sorted portion `[12, 25, 64]`: `[12, 22, 25, 64, 11]`
4. Take `11` (index 4) and insert it into the sorted portion `[12, 22, 25, 64]`: `[11, 12, 22, 25, 64]`