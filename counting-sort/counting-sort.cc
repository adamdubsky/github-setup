#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/**
 * Csort
 * @brief sorts vector of negative and positive integers
 */
vector<int> CSort(vector<int>& A, vector<int> B, int k)
{
    int minimum = *min_element(A.begin(), A.end());
    vector<int> C(k);

    // initalize counting vector
    for (unsigned long i = 1; i < C.size(); i++)
        C[i] = 0;

    // count the number of instances of an integer
    for (unsigned long i = 0; i < A.size(); i++)
        C[A[i] - minimum]++;
        // C[A[i]] = C[A[i]] + 1;
 
    // add total amount of instances from previous instances
    for (unsigned long i = 1; i < C.size(); i++)
        C[i] += C[i - 1];

    // sort numbers based on C vector
    // decrement C vector when instance is placed
    for (int i = A.size() - 1; i >= 0; i--) {
        B[C[A[i] - minimum] - 1] = A[i];
        C[A[i] - minimum]--;
    }
    return B;
}
/**
 * main
 * @brief calls counting sort on a vector of integers
 */
int main()
{
    vector<int> A = { 3, 63, 84, 3, 45, 8, 25, 77, 3, 32, -54, 34, -343 };
    int minimum = *min_element(A.begin(), A.end());
    int k = *max_element(A.begin(), A.end()) - minimum + 1;
    vector<int> B(A.size());
    A = CSort(A, B, k);
    return 0;
}