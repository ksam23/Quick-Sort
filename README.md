Implement quick sort (write the code from scratch); it should operate in a manner similar to the example sort programs.  Input will be the number of numbers to sort, followed by a bunch of integers, one per line.  Print out the number of numbers, and then the numbers in sorted order (or the range, if indicated on the command line arguments).

Test your code to make sure it sorts correctly -- and try test cases where all the numbers are equal, or the numbers are already in sorted order.

A few things to get absolutely right in your implementation:

- Use the Hoare partition function (one that moves in i and j from the left and right).

- Implement randomization - pick a random element, not the first or last
When you pick the random pivot element... make sure that's the one the partition function looks at.

- The recursive calls to quick sort are a little bit different with the Hoare partition function.  Check the slides for the gotcha