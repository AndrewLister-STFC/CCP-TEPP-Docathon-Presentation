/// \file
/// Demo file for doxygen

#include <stdio.h>

/// @brief Compute and return the root mean square (rms) error between
///        an expected value and the actual value.
/// @param n         Length of the vectors
/// @param actual    Computed values to compare
/// @param expected  Values expected from the computation
/// @return          Root mean square error
double rms_error(int n, int *actual, int *expected)
{
    double error = 0; // Running total of errors
    // Add contributions from each index to error
    for (int i = 0; i < n; i++)
    {
        int error_i = actual[i] - expected[i];
        error += error_i * error_i / n;
    }
    return sqrt(error);
}

int main() {
  
    printf("Hello, World!\n");
    return 0;
}
