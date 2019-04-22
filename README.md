# Quicksort Implementation
C++ implementation of quicksort. Will sort N randomly generated integers and analyze various charactersitics.

### Part A
1. User inputs value for N.
2. Program generates N integers - one set that is already sorted in increasing order, and another with a normal distribution in a range.
3. Program sorts the N intengers using quicksort and randomized quicksort. It will output a file with the original and the sorted values.
4. Program also outputs the computation time, but only the computation time.

### Part B
1. Compute the average over five quicksort runs for four different N values.
2. Repeat 1, but for randomized quicksort.
3. Repeat 1, but for an array with sorted in increasing order values.
4. Repeat 3, but using randomized quicksort.

### To Run
* Simply run `make` to run.

Note: the rebuild function will destroy any output file named `output.txt`, which is the default file output name. Consider changing the name of `output.txt` before running again if you wish to keep results. Alternately, simply remove the `cleanout` command from the makefile - the program is built to append results to the file.
