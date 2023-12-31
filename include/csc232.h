/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2023
 *
 * @file    csc232.hpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Macros, libraries and definitions for use in csc232 assignments.
 * @version 0.2023.07.27
 * @date    07/27/2023
 *
 * @copyright Copyright (c) 2023 James R. Daehn
 */

#ifndef MSU_CSC232_H_
#define MSU_CSC232_H_

#define FALSE 0
#define TRUE 1

#define TEST_TASK1 TRUE
#define TEST_TASK2 TRUE
#define TEST_TASK3 TRUE

#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <memory>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

#include "expanded_templates.h"

/** Common iostream objects */
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

/** Common iomanip objects */
using std::left;
using std::right;
using std::setprecision;
using std::setw;

// TODO: 1.1 Declare a named constant ROSTER_SIZE initialized to the integer value 5.
const int ROSTER_SIZE{5};

// TODO: 1.3 Declare a named constant NUM_COURSES initialized to the integer value of 3.
const int NUM_COURSES{3};

// TODO: 1.2 Declare an array named testGrades whose size is ROSTER_SIZE that stores floating-point numbers (e.g., double)
double testGrades[ROSTER_SIZE];

// TODO: 1.4 Declare a two-dimensional array named gradeBook that has NUM_COURSES rows and ROSTER_SIZE columns that
//  stores floating point numbers (e.g., double)
double gradeBook[NUM_COURSES][ROSTER_SIZE];

// TODO: 2.1 Declare a function named maxGrade that specifies two parameters. The first parameter is an integer that
//  specifies the number of elements in the array to process and the second parameter is an array of doubles.
double maxGrade( int size, double array[]);




// TODO: 2.2 Declare function named indexOfMaxGrade that specifies three parameters. The first parameter is an integer
//  that corresponds to the number of rows in the given table, the second parameter is an integer that corresponds to
//  the number of columns in the table, and the third parameter is for a two-dimensional array of double values.
double indexOfMaxGrade( int rowSize, int colSize, double array[][ROSTER_SIZE]);

// TODO: 3.1 - Implement the maxGrade function below
/**
 * @brief Find the maximum grade from an array of grades.
 *
 * @param size The number of elements in the array.
 * @param array An array of doubles representing grades.
 * @return The maximum grade found in the array.
 */
double maxGrade(int size, double array[]) {


    double max = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}


// TODO: 3.2 Implement indexOfMaxGrade function below
/**
 * @brief Find the maximum grade from a two-dimensional grade book.
 *
 * @param rowSize The number of rows in the grade book.
 * @param colSize The number of columns in the grade book.
 * @param array A two-dimensional array of double values representing grades.
 * @return The maximum grade found in the grade book.
 */
double indexOfMaxGrade(int rowSize, int colSize, double array[][ROSTER_SIZE]) {
    double max = maxGrade(colSize, array[0]);

    for (int i = 1; i < rowSize; i++) {
        double rowMax = maxGrade(colSize, array[i]);
        if (rowMax > max) {
            max = rowMax;
        }
    }

    return max;
}




#endif // MSU_CSC232_H_