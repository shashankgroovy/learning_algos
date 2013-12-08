Mergesort
=========

Key Idea
--------
Mergesort is a [divide and conquer]["http://en.wikipedia.org/wiki/Divide_and_conquer_algorithm"]
algorithm and uses comparison based sorting. It has O(n log n) runtime.
It has two implementations :
* Top-down implementation
* Bottom-up implementation


Description
-----------
This sorting method uses following concepts:
1. If a list is empty or it contains only one element, then the list is already
   sorted. A list that contains only one element is also called singleton.
2. It uses 'Divide and Conquer' technique to recursively divide the list into
   sub-lists until it is left with either empty or singleton lists.
3. Finally, repeatedly merge sublists to produce new sorted sublists until there is
   only 1 sublist remaining which will be a sorted list.

Running Times
-------------
O(n Log n)

* Worst-cast performance - O(n log n)
* Average-case performance - O(n log n)
* Best-case performance - O(n log n) - typical and O(n) [natural
  variant][natural_variant]

  [natural_variant]:[A natural merge sort is similar to a bottom up merge sort except
  that any naturally occurring runs (sorted sequences) in the input are exploited]
