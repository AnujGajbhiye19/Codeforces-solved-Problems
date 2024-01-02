# Wrong Subtraction

- Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

- if the last digit of the number is non-zero, she decreases the number by one;
- if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

- You are given an integer number n. Tanya will subtract one from it ktimes. Your task is to print the result after all ksubtractions.

- It is guaranteed that the result will be positive integer number.

Input: 
The first line of the input contains two integer numbers nand k(2≤n≤109, 1≤k≤50) — the number from which Tanya will subtract and the number of subtractions correspondingly.

Output: 
Print one integer number — the result of the decreasing nby one ktimes.

- It is guaranteed that the result will be positive integer number.

Examples:

input:
512 4

output:
50

input:
1000000000 9

output:
1

Note: 
The first example corresponds to the following sequence: 512→511→510→51→50.
