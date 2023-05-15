/*How to write the product of two matrices in c++

 GPT : To write a program to multiply two matrices in C++, you can follow these steps:

Declare the two matrices and their dimensions: First, declare two matrices A and B with their dimensions. The dimensions of A are m x n, and the dimensions of B are n x p. The resulting matrix C will have dimensions m x p.

Initialize the matrices: Initialize the matrices A and B with some values. You can use nested loops to traverse the matrices and assign values to their elements.

Multiply the matrices: Use nested loops to multiply the matrices A and B and store the resulting values in the matrix C. The formula for multiplying two matrices is: C[i][j] = sum(A[i][k] * B[k][j]), where k varies from 0 to n-1.

Print the resulting matrix: Finally, use nested loops to print the resulting matrix C to the console.

Here's an example code that demonstrates how to multiply two matrices in C++:
*/

#include <iostream>

using namespace std;

const int MAX = 100;

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int m, n, p;

    cout << "Enter the dimensions of matrix A (m x n): ";
    cin >> m >> n;

    cout << "Enter the dimensions of matrix B (n x p): ";
    cin >> n >> p;

    // initialize matrix A
    cout << "Enter the elements of matrix A: " << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // initialize matrix B
    cout << "Enter the elements of matrix B: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    // multiply matrices A and B
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // print the resulting matrix
    cout << "The resulting matrix C is:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//In this example, the program prompts the user to enter the dimensions and values of two matrices A and B, multiplies them, and then prints the resulting matrix C to the console.
