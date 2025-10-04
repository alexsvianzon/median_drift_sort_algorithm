# Median Drift Sort

**Median Drift Sort** is a simple, portable sorting algorithm designed to be easy to implement, visualizable, and robust even with duplicates.


---

## Specifications

- **Time Complexity:** Averages O(n log n), worst O(n^2).
- **Memory:** Uses the original list, so O(n).
- **Relatively Small:** Takes up around 20 lines of code for a one function implementation
- **Duplicates:** Lots of duplicates do not faze this algorithm, only slight slow may occur.

---

## How it Works

Take a list, for example [4, 7, 1, 8, 3, 9, 2]. Pick out the center pivot, in this case 8. For each number, check if it is greater or less than the pivot.

The general rules are:
- If the number is less than the pivot and is in a position less than that of the pivot, nothing changes.
- If the number is greater than the pivot and is in a position greater than that of the pivot, nothing changes.
- If the number is less than the pivot and is in a position greater than that of the pivot, move that number to a position one before the pivot.
- If the number is greater than the pivot and is in a position less than that of the pivot, move that number to a position one after the pivot.

4 < 8 so it stays. 7 < 8 so it stays.

After a pass is completed, the list is split down the pivot and this is repeated on the sublists. 

For example:

Original list: [4, 7, 1, 8, 3, 9, 2]  
After first pass: [4, 7, 1, 3, 2, 8, 9]  
After second pass: [1, 2, 3, 4, 7, 8, 9]  

---
# Contributing to this Algorithm

Right now, I am accepting issues and pull requests to advance the speed or ability (i.e. handling duplicates better, better with larger lists) of this algorithm. Feel free to add or suggest changes for the betterment of this algorithm!
