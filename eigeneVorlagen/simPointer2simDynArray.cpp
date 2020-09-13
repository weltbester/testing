/*
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart
 * File: classicalArrays.cpp
 * -------------------------
 * Description
 */

#include <iostream>
#include <array>

using namespace std;

/* CONSTANTS */


/* STRUCTS */

/* PROTOTYPES */



int main() {
  /* Simple Pointer to a single variable */
  int *zi = new int;
  *zi = 42;
  cout << "Variable: " << *zi << endl;
  delete zi;

  /* Simple Pointer to a simple, dynamic array */
  int *zf, n;
  cout << "Number of elements: ";
  cin >> n;

  zf = new int[n];
  cout << "Werte: ";
  for (int i = 0; i < n; ++i) {
    zf[i] = 10 * i;
    cout << zf[i] << " ";
  }
  cout << endl;
  delete[] zf;
  
  cout << endl;
  return EXIT_SUCCESS;
} // main {} [] \ |

/* Functions */
