/* 
 * Copyright 2020: Georg Pohl, 70174 Stuttgart
 * File: .c
 * --------
 * Description
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */
int sum(int *arr, int n);
int *getPrimes(int n);
int isPrime(int x);

int main(int argc, const char **argv) {
  int n = 10;
  if (argc = 2) {
    atoi(argv[2]);
  }
  int *primes = getPrimes(n);
  int s = sum(primes, n);
  printf("The sum of the first %d primes is %d\n", n, s);
  
  
  printf("\n");
  return EXIT_SUCCESS;
} /* main  [] {} \n */

/* FUNCTIONS */
int sum(int *arr, int n) {
  int total;
  for (int i = 0; i < n; ++i) {
    total =+ arr[i];
  }
  return total;
}
int *getPrimes(int n) {
  int result[n];
  int i = 0;
  int x = 2;
  while (i < n) {
    if (isPrime(x)) {
      result[i] = x;
      i++;
      x += 2;
    }
  }
  return result;
}
int isPrime(int x) {
  if (x % 2 == 0) {
    return 0;
  }
  for (int i = 3; i <= sqrt(x); i+=2) {
    if (x % i == 0) {
      return 0;
    }
  }
  return 1;
}
