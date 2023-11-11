
// CPP program to find Narayana number N(n, k)
#include<bits/stdc++.h>

using namespace std;
 
// Return product of coefficient terms in formula

int productofCoefficient(int n, int k)
{

    int C[n + 1][k + 1];
 

    // Calculate value of Binomial Coefficient

    // in bottom up manner

    for (int i = 0; i <= n; i++)

    {

        for (int j = 0; j <= min(i, k); j++)

        {

            // Base Cases

            if (j == 0 || j == i)

                C[i][j] = 1;
 

            // Calculate value using previously

            // stored values

            else

                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];

        }

    }
 

    return C[n][k] * C[n][k - 1];
}
 
// Returns Narayana number N(n, k)

int findNN(int n, int k)
{

    return (productofCoefficient(n, k)) / n;
}
 
// Driven Program

int main()
{

    int n = 8, k = 5;

    cout << findNN(n, k) << endl;

    return 0;
}
