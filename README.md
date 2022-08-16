# Hopping_Tommy
You will be given t arrays of size n (which is less than or equal to 20) with all the entries greater than 500, let x= {max(Array) + min(Array)}/n. Let 'Z' denote the number of steps Tommy has to cover to reach his final destination, so the initial value of 'Z' is 'x'. If the number of steps left to cover is even then Tommy hops Z/2 steps and if they are odd he hops Z/3 steps. Eventually when only 1 or 2 steps are left then he hops directly to his destination. Calculate the number of hops Tommy made to reach his destination for each given array and print them in distinct lines.


Input:
Line 1 - value of t 
Next two lines for each test case will have 2 lines of input 
L1- size of array
L2- elements separated by spaces


Sample Input

2
 5
 500 502 430 536 992
 4
 1002 601 539 1193


Sample Output


