//CODE SAMPLE IS NOT MINE: ACCESSED FROM https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/
#include <iostream>
using namespace std;

void swap(int *x, int *y) //void so no return values.
{
    //*x = 45 and *y = 35
    int z = *x; // z = 45
    *x = *y; //*x = 35
    *y = z; //*y =  = 45
    //*x = 35 and *y = 45
    //*a = 35 and *b  45
    //the memory values were swapped. addressed kept same. so a and b values are swapped.
}

// Driver Code
int main()
{
    int a = 45, b = 35; //a = 45 and b = 35
    cout << "Before Swap \n";
    cout << "a = " << a << " b = " << b << "\n";

    swap(&a, &b); //passed by reference (original values modified - no copy made).
    //so a=45 and b=35 passed by reference so any changes made to them via x and y will apply to them: they will be passed as
    // swap (int *a, int *b) - which is int 45, int 35 bc of *
    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";
    //a = 35 and b = 45
}
//the above is passing by pointer (still uses reference passing)
//the reference & symbols are when in the function call

/*|||||||||||||||||||||||||||||||
 * ||||||||||||||||||||||||||||||
 * ||||||||||||||||||||||||||||||
 * ||||||||||||||||||||||||||||||
 * BREAK
 * ||||||||||||||||||||||||||||||
 * ||||||||||||||||||||||||||||||
 * ||||||||||||||||||||||||||||||
 * ||||||||||||||||||||||||||||||*/

//below is passing by reference
//the end product is the same, but we do not use pointers, instead the ref symbols are in the parameters of the function
/*
 #include <iostream>
using namespace std;
void swap(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";

    swap(a, b);

    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";
}
 */
