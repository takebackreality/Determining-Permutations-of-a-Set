## Determining-Permutations-of-a-Set

Permutations are useful because they show us all the possible ways to arrange or order a set of elements. For instance, imagine you’re helping organize a group photo, and you want to figure out every possible way people can line up. This is exactly what permutations aim to solve.  In this repository, I show you how to write a program that reads a list of names (one word each) into a vector called nameList until the user types -1 to stop. Then, using a recursive function, our program will generate and print every possible way those names can be lined up, with each ordering on its own line and names separated by commas.

For example, if the input is:

Julia Lucas Mia -1

the program should output:

Julia, Lucas, Mia
Julia, Mia, Lucas
Lucas, Julia, Mia
Lucas, Mia, Julia
Mia, Julia, Lucas
Mia, Lucas, Julia
