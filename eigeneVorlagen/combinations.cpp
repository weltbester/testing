/*
 * Function: combinations(n, k)
 * Usage int result = combinations(n, k);
 * -------------------------------------
 * Returns the mathematical combinations
 * function C(n, k), which is the number
 * of ways one can choose k elements from
 * a set of size n.
 */

int combinations(int n, int k) {
	int fac = 1;
	for (size_t i = 1; i <= k; ++k) {
		fac *= i;
	}
	return permutations(n) / fac;
}