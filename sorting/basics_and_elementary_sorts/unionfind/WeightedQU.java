/**********************************************************
* Compilation: javac WeightedQU.java
* Execution: java WeightedQU
*
* Weighted quick-union without path compression, results in a O(log n) order of
* growth in worst case scenario.
*
**********************************************************/

public class WeightedQU 
{
    private int[] id;

    public WeightedQU(int N)
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
        if (size[i] < size[j]) {
            id[i] = j;
            size[j] += size[i];
        } else { 
            id[j] = i;
            size[i] += size[j];
        }
    }
}
