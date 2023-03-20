// C++ program to print all combination
// of size r in an array of size n
#include <bits/stdc++.h>
using namespace std;

void comb(int a[], int data[],
          int start, int end,
          int index, int r);

// The main function that prints
// all combinations of size r
// in arr[] of size n. This function
// mainly uses combinationUtil()
void printComb(int a[], int n, int r)
{
    // A temporary array to store
    // all combination one by one
    int data[r];

    // Print all combination using
    // temporary array 'data[]'
    comb(a, data, 0, n - 1, 0, r);
}

/* arr[] ---> Input Array
data[] ---> Temporary array to
store current combination
start & end ---> Starting and
Ending indexes in arr[]
index ---> Current index in data[]
r ---> Size of a combination to be printed */
void comb(int a[], int data[],
          int start, int end,
          int index, int r)
{
    // Current combination is ready
    // to be printed, print it
    if (index == r)
    {
        for (int j = 0; j < r; j++)
            cout << data[j] << " ";
        cout << endl;
        return;
    }

    // replace index with all possible
    // elements. The condition "end-i+1 >= r-index"
    // makes sure that including one element
    // at index will make a combination with
    // remaining elements at remaining positions
    for (int i = start; i <= end &&
                        end - i + 1 >= r - index;
         i++)
    {
        data[index] = a[i];
        comb(a, data, i + 1,
             end, index + 1, r);
    }
}

// Driver code
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int r = 2;
    int n = sizeof(a) / sizeof(a[0]);
    printComb(a, n, r);
}

// This code is contributed by rathbhupendra
