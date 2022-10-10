#pragma once
#include"constants.h"

template<typename T>
int Sum(T arr[], const int n);
template<typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
int minValueIn(T arr[], const int n);

template<typename T>
int maxValueIn(T arr[], const int n);