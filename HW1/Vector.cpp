/**
 * @file Vector.cpp
 * @author Michael Floyd
 * @date 2025-01-30
 * @brief Vector.cpp file for implamenting methods from Vector.h
 * 
 * The constructors and main methods from Vector.h will be implemanted here.
 */



#include <iostream>
#include <fstream>
#include "Vector.h"

using namespace std;

  // Constructor implementation
  Vector::Vector(const string& message) : message(message) {}

  // Method implementation
  void Vector::printMessage() const {
    cout << message << endl;
  }
