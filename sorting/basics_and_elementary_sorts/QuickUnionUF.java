/**********************************************************
* Compilation: javac QuickUnionUF.java
* Execution: java QuickUnionUF
*
* Given n, finds if union of two numbers exist using Quick union, a lazy
* approach to unionfind.
*
**********************************************************/

public class QuickUnionUF 
{
    private int[] id;

    public QuickUnionUF(int N)
    {
        // Set id of each object to itself.
        id = new int[N];
        for (int i =0; i<N; i++) id[i] = i;
    }

    private int root(int i)
    { 
        // Chase parent pointers until reach root (depth of i array accesses)
        while( i != id[i]) i = id[i];
        return i;
    }

    public boolean connected(int p, int q)
    { return root(p) == root(q); }

    public void union(int p, int q)
    {
        // Change root of p to point to root of q.
        int i = root(p);
        int j = root(q);
        id[i] = j;
    }
}
