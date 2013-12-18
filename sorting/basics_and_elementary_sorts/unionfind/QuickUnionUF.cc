/**********************************************************
 * Compilation: g++ - Wall -o quickunion QuickUnionUF.cc
 * Execution: ./quickunion
 *
 * Description:
 * Quick union is a lazy approach to unionfind operation.
 * It has a different interpretation and can be depicted as a set of
 * trees(aka: forest) where each entry in the array is going to contain a
 * reference to its parent in the tree.
 *
 * Each of the union operations just involves changing one entry in the array
 * and hence is faster than quickfind.
 *
 **********************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

class QuickUnionUF {
    private:
        int *id;
        int size;

    public :
        QuickUnionUF(int size);
        ~QuickUnionUF();
        int root(int i);
        void connected(int p, int q);
        void union_do(int p, int q) {
};

//constuctor
QuickUnionUF :: QuickUnionUF(int size) {
    id = new int[size];
    for (int i=0; i<size; i++) id[i] = i;
}

//Destructor
QuickUnionUF :: ~QuickUnionUF() {
    delete id;
}

//methods
int QuickUnionUF :: root(int i) {
    while(i != id[i]) i = id[i];
    return i;
}

void QuickUnionUF :: connected(int p, int q) {
    if (root(p) == root(q)) cout << "yes\n";
    else cout << "no\n";
}

void QuickUnionUF :: union_do(int p, int q) {
    id[root(p)] = root(q);
}
/********************* End of class ***********************/



int main() {
    QuickUnionUF q(10);
    cout << "------------- Running program ----------------\n";
    cout << "union(4,3)\n"; q.union_do(4,3);
    cout << "union(3,8)\n"; q.union_do(3,8);
    cout << "union(6,5)\n"; q.union_do(6,5);
    cout << "union(9,4)\n"; q.union_do(9,4);
    cout << "union(2,1)\n"; q.union_do(2,1);

    cout << "connected(8,9)\n"; q.connected(8,9);
    cout << "connected(5,4)\n"; q.connected(5,4);
    cout << "------------- Terminating program -------------\n";

    return 0;
}
