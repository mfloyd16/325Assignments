/**
 * @file main.cpp
 * @author Michael Floyd
 * @date 2025-01-30
 * @brief Creating a vector class from scratch
 * 
 * A program that uses the Class vector, which will act like a vector built from scratch.
 */



#include <iostream>
#include <fstream>
#include "Vector.h"

using namespace std;

int main() {
  
  Vector vec("Hello, World");

  vec.printMessage();
  
  return 0;
}
