/**********************************************************
* Compilation: javac PathCompressionQU.java
* Execution: java PathCompressionQU
*
* Weighted quick-union with path compression, makes every other node in path
* point to its grandparent (thereby halving path length) and a flat tree
* layout.
*
**********************************************************/

public class PathCompressionQU 
{
    private int[] id;

    public PathCompressionQU(int N)
    {
        // Set id of each object to itself.
        id = new int[N];
        for (int i =0; i<N; i++) id[i] = i;
    }

    private int root(int i)
    { 
        // Chase parent pointers until reach root (depth of i array accesses)
        while( i != id[i])
        {
            id[i] = id[id[i]]; // flattens the tree out
            i = id[i];
        }
        return i;
    }

    public boolean connected(int p, int q)
    { return root(p) == root(q); }

    public void union(int p, int q)
    {
        // Change root of p to point to root of q.
        int i = root(p);
        int j = root(q);
        if (size[i] < size[j]) {
            id[i] = j;
            size[j] += size[i];
        } else { 
            id[j] = i;
            size[i] += size[j];
        }
    }
}
