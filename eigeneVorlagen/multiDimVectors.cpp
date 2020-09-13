/*
 * Copyright April 2020: Georg Pohl, 70174 Stuttgart
 * File: chapter05_excercise07.cpp
 * ------------------
 * Description
 */

#include <iostream>
#include <vector>

using namespace std;

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */

int main() {
  
  vector< vector<int> > vec (4, vector<int>(4));
  vec[2][3] = 16;
  int a = vec[2][3];
  cout << a << endl;

  vector< vector<int> > v1;
  for (size_t i = 0; i < 10; ++i) {
    vector<int> row;  // create an empty row
    for (size_t j = 0; j < 20; ++j) {
      row.push_back(i * j);  // add elements (colums) to the row
    }
    v1.push_back(row);  // add the row to the main vector
  }

  vector< vector<int> > v2;
  for (size_t i = 0; i < 10; ++i) {
    v2.push_back(vector<int>());  // add an empty row
  }
  for (size_t j = 0; j < 20; ++j) {
    for (size_t i = 0; i < v2.size(); ++i) {
      v2[i].push_back(i * j);  // add column to all rows
    }
    // You  can also use iterators
    for (vector< vector<int> >::iterator it = v2.begin(); it != v2.end();  ++it) {
      it->push_back(j);  // add column to all rows
    }
  }

  const int rows = 10;
  const int columns = 20;

  vector<int> v3;
  v3.resize(rows * columns);

  for (int row = 0; row < rows; row++) {
    for (int col = 0; col < columns; col++) {
        v3[row * columns + col] = row * col;
    }
  }
  return EXIT_SUCCESS;
} // main {} [] \ |

/* FUNCTIONS */

