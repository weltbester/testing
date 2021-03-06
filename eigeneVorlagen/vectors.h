/**
 * Copyright September 2020: Georg Pohl, 70174 Stuttgart
 * File: vectors.h
 * ---------------
 * This library provides interfaces for vector calculation.
 *
 */

#pragma once

typedef struct vector_type {
  double wc;
  double xc;
  double yc;
  double zc;
} vector_t;

int isParallel(vector_t v1, vector_t v2);
int isOrthogonal(vector_t v1, vector_t v2);
vector_t projection(vector_t v, vector_t b);
vector_t crossProduct(vector_t v1, vector_t v2);
double areaOfTwoVectors(vector_t v1, vector_t v2);
double triangleOfTwoVectors(vector_t v1, vector_t v2);

/*
 * Implementation notes: angleRadVector
 * Usage: double theta = angleRadVector(vector_t v1, vector_t v2) 
 * --------------------------------------------------------------
  * This function calculates the (smaller) angle of two 3-dimensional
 * vectors in radians.
 */

double angleRadVector(vector_t v1, vector_t v2);

/*
 * Implementation notes: normalizationVector
 * Usage: double theta = normalizationVector(vector_t v1) 
 * ------------------------------------------------------
 * This function returns a normalization vector. It a Zero-
 * Vector is provided an error message is returned:
 */

vector_t normalizationVector(vector_t v);

/*
 * Implementation notes: angleDegVector
 * Usage: double theta = angleDegVector(vector_t v1, vector_t v2) 
 * --------------------------------------------------------
 * This function calculates the (smaller) angle of two 3-dimensional
 * vectors in degrees.
 */

double angleDegVector(vector_t v1, vector_t v2);

/*
 * Implementation notes: angleRadVector
 * Usage: double theta = angleRadVector(vector_t v1, vector_t v2) 
 * --------------------------------------------------------
 * This function calculates the (smaller) angle of two 3-dimensional
 * vectors in radians.
 */

double angleRadVector(vector_t v1, vector_t v2);

/*
 * Implementation notes: dotProduct
 * Usage: double dp = dotProduct(vector_t v1, vector_t v2) 
 * -------------------------------------------------
 * This function returns the inner product (dot product)
 * of two 3-dimensional vectors.
 */

double dotProduct(vector_t v1, vector_t v2);

/*
 * Implementation notes: magnitudeVector
 * Usage: double mag = magnitudeVector(vector_t v1) 
 * ---------------------------------------------
 * This function returns the magnitude of a
 * 3-dimensional vector.
 */

double magnitudeVector(vector_t v);

/*
 * Implementation notes: printVector
 * Usage: printVector(vector_t v1) 
 * -----------------------------------------------------
 * This function prints a 3-dimensional vector to 'stdout'.
 */

void printVector(vector_t v);

/*
 * Implementation notes: addVectors
 * Usage: struct vector_t = addVectors(vector_t v1, vector_t v2) 
 * -----------------------------------------------------
 * This function adds two 3-dimensional vectors.
 */

vector_t addVectors(vector_t v1,vector_t v2);

/*
 * Implementation notes: substractVectors
 * Usage: struct vector_t = substractVectors(vector_t v1, vector_t v2) 
 * -----------------------------------------------------
 * This function substracts two 3-dimensional vectors.
 */

vector_t substractVectors(vector_t v1,vector_t v2);

/*
 * Implementation notes: scalarVectors
 * Usage: struct vector_t = scalarVectors(vector_t v1, int scalar) 
 * ---------------------------------------------------------
 * This function mulitplies a 3-dimensional vector wiht a scalar.
 */

vector_t scalarVectors(double scalar, vector_t v);

// {} [] || \n */
