/** 
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: main.c
 * ------------
 * Description
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "eigeneVorlagen/vectors.h"

/* CONSTANTS */

/* STRUCTS */

/* PROTOTYPES */


int main(int argc, const char **argv) {
  vector_t v1 = {8.218, -9.341, 0}, v2 = {-1.129, 2.111, 0}, v3 = {7.119, 8.215, 0}, v4 = {-8.223,  0.878, 0}, v5 = {1.671, -1.012, -0.318}, result;
  double scalar = 7.41, mag;

  result = addVectors(v1, v2);
  printVector(result);

  result = substractVectors(v3, v4);
  printVector(result);

  result = scalarVectors(scalar, v5);
  printVector(result);

  printf("Coding Magnitude ...\n");
  vector_t v6 = {-0.221, 7.437, 0};
  mag = magnitudeVector(v6);
  printf("Magnitude of: \n");
  printVector(v6);
  printf("Magnitude = %f\n", mag);

  vector_t v7 = {8.813, -1.331, -6.247};
  mag = magnitudeVector(v7);
  printf("Magnitude of: \n");
  printVector(v7);
  printf("Magnitude = %f\n", mag);

  printf("... and Direction\n");
  vector_t v8 = {5.581, -2.136, 0};
  mag = magnitudeVector(v8);
  printf("Magnitude of: \n");
  printVector(v8);
  printf("Magnitude = %f\n", mag);
  result = scalarVectors((1/mag), v8);
  printf("Normalization: ");
  result = normalizationVector(v8);
  printVector(result);

  vector_t v9 = {1.996, 3.108, -4.554};
  mag = magnitudeVector(v9);
  printf("Magnitude of: \n");
  printVector(v9);
  printf("Magnitude = %f\n", mag);
  result = scalarVectors((1/mag), v9);
  printf("Normalization: ");
  result = normalizationVector(v9);
  printVector(result);
  
  vector_t v11 = {7.887, 4.138, 0};
  vector_t v12 = {-8.802, 6.776, 0};
  printf("Dot Product of two vectors:\n");
  printVector(v11);
  printVector(v12);
  double innerProduct = dotProduct(v11, v12);
  printf("Inner Product 11 & 12: %.3f\n", innerProduct);

  vector_t v13 = {-5.955, -4.904, -1.874};
  vector_t v14 = {-4.496, -8.755, 7.103};
  printf("Dot Product of two vectors:\n");
  printVector(v13);
  printVector(v14);
  innerProduct = dotProduct(v13, v14);
  printf("Inner Product 13 & 14: %.3f\n", innerProduct);

  vector_t v15 = {3.183, -7.627, 0};
  vector_t v16 = {-2.668, 5.319, 0};
  printVector(v15);
  printVector(v16);
  printf("Angle of two vectors in radians:\n");  
  double th = angleRadVector(v15, v16);
  printf("Angle (radians) 15 & 16: %.3f\n", th);

  vector_t v17 = {7.35, 0.221, 5.188};
  printf("Mag. v17: %.3f\n", magnitudeVector(v17));
  vector_t v18 = {2.751, 8.259, 3.985};
  printf("Mag. v18: %.3f\n", magnitudeVector(v18));
  printVector(v17);
  printVector(v18);
  printf("Angle of two vectors in degress:\n");
  double thDeg = angleDegVector(v17, v18);
  printf("Angle (degrees) 17 & 18: %.3f\n", thDeg);

  vector_t v19 = {-7.579, -7.88, 0};
  vector_t v20 = {22.737, 23.64, 0};
  printVector(v19);
  printVector(v20);
  printf("Theta: %.3f\n", angleRadVector(v19, v20));
  printf("Parallel, Orthogonal? %d/%d\n", isParallel(v19, v20), isOrthogonal(v19, v20));
  vector_t v21 = {-2.029, 9.97, 4.172};
  vector_t v22 = {-9.231, -6.639, -7.245};
  printVector(v21);
  printVector(v22);
  printf("Theta: %.3f\n", angleRadVector(v21, v22));
  printf("Parallel, Orthogonal? %d/%d\n", isParallel(v21, v22), isOrthogonal(v21, v22));
  vector_t v23 = {-2.328, -7.284, -1.214};
  vector_t v24 = {-1.821, 1.072, -2.94};
  printVector(v23);
  printVector(v24);
  printf("Theta: %.3f\n", angleRadVector(v23, v24));
  printf("Parallel, Orthogonal? %d/%d\n", isParallel(v23, v24), isOrthogonal(v23, v24));
  vector_t v25 = {2.118, 4.827, 0};
  vector_t v26 = {0, 0, 0};
  printVector(v25);
  printVector(v26);
  printf("Theta: %.3f\n", angleRadVector(v25, v26));
  printf("Parallel, Orthogonal? %d/%d\n", isParallel(v25, v26), isOrthogonal(v25, v26));
  vector_t v27 = {3.039, 1.879};
  vector_t v28 = {0.825, 2.036};
  printVector(v27);
  printVector(v28);
  printf("Projection: ");
  printVector(projection(v27, v28));
  vector_t v29 = {-9.880, -3.264, -8.159, 0};
  vector_t v30 = {-2.155, -9.353, -9.473, 0};
  printVector(v29);
  printVector(v30);
  printf("Orthogonal Vector: ");
  vector_t proj1 = projection(v29, v30);
  printVector(substractVectors(v29, proj1));
  vector_t v31 = {3.009, -6.172, 3.692, -2.510};
  vector_t v32 = {6.404, -9.144, 2.759, 8.718};
  printVector(v31);
  printVector(v32);
  vector_t proj2 = projection(v31, v32);
  printf("Projection: ");
  printVector(proj2);
  printf("Orthogonal Vector: ");
  printVector(substractVectors(v31, proj2));
  printf("\n");
  return EXIT_SUCCESS;
} /* main {} [] || \n */

/* FUNCTIONS */
