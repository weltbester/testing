/*
 * Function: permutations(n, k)
 * Usage int result = permutations(n, k);
 * -------------------------------------
 * This function calculates the number of possible
 * permutations for ordering k elements from a
 * collection of size n.
 * This approach is a simplification of the formula
 *
 * P(n, k) = n! / (n - k)!
 *
 * to avoid very large integer values. Therefore the
 * formula is shrinked from e. g.:
 *
 * P(52, 2) = 52! / (52 - 2)!
 *
 * to: 52 * 51
 *
 * The result is the product of a for-loop running
 * k-times decreasing n by 1 in every circle.
 */

int permutations(int n, int k) {
    int result = 1;
    for (int i = 0; i < k; ++i) {
        result *= n;
        n--;
    }
    return result;
}
