
#include <stdio.h>
 
// Function to calculate the frequency of all elements in an array
void findFrequency(int A[], int n)
{
    // create a count array of size `n` to store the count of all array elements
    int freq[n];
 
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }
 
    // update frequency of each element
    for (int i = 0; i < n; i++) {
        freq[A[i]]++;
    }
 
    // iterate through the array to print frequencies
    for (int i = 0; i < n; i++)
    {
        if (freq[i]) {
            printf("%d appears %d times\n", i, freq[i]);
        }
    }
}
 
int main(void)
{
    int A[] = { 2, 3, 3, 2, 1 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findFrequency(A, n);
 
    return 0;
}
