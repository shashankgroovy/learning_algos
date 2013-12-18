Key Idea
========

A union-find algorithms has the following methods:
-  `union`     --> Add connection between p and q
-  `find`      --> Component identifier for p(0 to N-1)
-  `connected` --> return trye if p and q are in the same component

Both quick-find and quick-union algorithms are easy to implement approaches of
union find operations that solve the dynamic connectivity problem. But these
two algorithms can't support large dynamic connectivity problems. And thus
improvements on them were made.



>*Improvement 1:* Weighted
##Weighted quick-union##
*  Avoid tall trees like in quick-union algorithm.
*  Keep track of size of each tree.
*  Balance by linking root of smaller tree to root of larger tree.
*  Depth of any node x is at most log<sub>2</sub> n.


>*Improvement 2:* Path Compression
##Weighted quick-union with path compression (WQUPC)##
After computing the root of any node p, the id of each examined node is set to
point to that root.
###Running time *of WQUPC*:###
*  in practice, is close to linear
*  but in theory, it's not quite linear.

Mathematical Analysis
=====================

> Order of growth for M union-find operations on a set of N objects

| **Algorithm** | **worst-case time** |
| --------- | ---------- |
| Quick-find |  M N  |
| Quick-union | M N  |
| Weighted QU | N + M log N  |
| QU + path compression | N + M log N |
| Weighted QU + path compression | N + M lg\* N |



Union-find Applications
=======================

*  [Percolation]('http://en.wikipedia.org/wiki/Percolation_theory')
*  Dynamic connectivity.
*  Equivalence of finite state automata.
*  [Kruskal's minimum spanning tree algorithm.]('http://en.wikipedia.org/wiki/Kruskal%27s_algorithm')
*  In image processing - Matlab's `bwlabel()` function.
*  Compiling equivalence statements in Fortran.
