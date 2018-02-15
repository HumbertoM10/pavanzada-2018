#Proyecto 1

##***Problem***
To check the speed of JCN Corporation new supercomputer it was decided to figure out the sum of first N (N < 10600) positive integers. Unfortunately, by the time the calculation was finished the Chief Programmer forgot the value of N he entered. Your task is to write the program (for personal computer), which would determine the value of N by the result calculated on supercomputer.

Note: JCN Corporation manufactures only reliable computers, and its programmers write only correctly working programs.
----------------------------------------------------------------------------------------------------------------------------------
Input:
One line containing the result of calculations on the supercomputer.

Output
Выведите N, the number entered by Chief Programmer.

Sample
-------------------------------------------------------------
Input 		Output
28			7
-------------------------------------------------------------
##***Context***
-Ask the user for an input
-Recieve the input in an unsigned long long int to process up to 18,446,744,073,709,551,615 (the biggest number we can recieve), since we know the input is a positive integer
-Use math.h to do calculations

##***Break-down***
-We need to know the number of consecutive numbers that were summed to get the input number.
-We know that the representation of the consecutive sum of the first n natural numbers is n(n+1)/2.
-Using the formula input=n(n+1)/2 we can obtain n, which is our desired output.
-We end up with: 	(n^2+n)/2=input
					n^2+n=input*2
					n=floor(sqrt(input*2))
-But if we use integers we can get rid of the floor function having: n=sqrt(input(2))

##***Análisis***
-Runtime analysis is O(1) because the output is obtained by doing just one operation.