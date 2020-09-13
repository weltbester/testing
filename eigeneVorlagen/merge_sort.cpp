/*
* Copyright: Georg Pohl, 70174 Stuttgart
* File: Uebung 2a.cpp
*
* Function: Konstanten in Enumerationen
*
*/
#include <iostream>
#include <vector>

using namespace std;

/* CONSTANTS */

/* Instance variables */

/* Prototypes */
void sort (vector<int> &v);
void merge (vector<int> &v, vector<int> &v1, vector<int> &v2);

int main() {
    vector<int> forSorting {32, 489, 149, -39, 0, 4, 83, -134, 4473, 23, 8};

    for (auto &i : forSorting) {
        cout << i << " ";
    }
    cout << endl;
    sort(forSorting);
  return EXIT_SUCCESS;
} // main {} [] \n |

/* FUNCTIONS */
/**
 * Implementation notes: sort
 * --------------------------
 * This function sorts the elements of the vector into increasing order
 *
 * 1. Divide the vector in two halfes.
 * 2. Sort each of these vectors recursively.
 * 3. Merge the two vectors back into the original one.
 */


void sort (vector<int> &v) {
    int n = v.size();
    if (n <= 1) {
        return;
    }
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; ++i) {
        if (i < n / 2) {
            v1.push_back(v.at(i));
        } else {
            v2.push_back(v.at(i));
        }
    }
    sort(v1);
    sort(v2);
    v.clear();
    merge(v, v1, v2);
}

/**
 * Implementation notes: merge
 * ---------------------------
 * This function merges two sorted vectors, v1 and v2, into the vector v,
 * which should be empty before this operation. Because the input vectors
 * are sorted, the implementation can always select the first unused element
 * on one of the input vectors to fill the next position.
 */

 void merge (vector<int> &v, vector<int> &v1, vector<int> &v2) {
     int n1 = v1.size();
     int n2 = v2.size();
     int p1 = 0;
     int p2 = 0;
     while (p1 < n1 && p2 < n2) {
         if (v1.at(p1) < v2.at(p2)) {
             v.push_back(v1.at(p1++));
         } else {
             v.push_back(v2.at(p2++));
         }
     }
     while (p1 < n1) {
         v.push_back(v1.at(p1++));
     }
     while (p2 < n2) {
         v.push_back(v1.at(p2++));
     }
 }
