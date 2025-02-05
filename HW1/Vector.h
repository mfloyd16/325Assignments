/**
 * @file Vector.h
 * @author Michael Floyd
 * @date 2025-01-30
 * @brief Vector.h will hold the class Vector and its prototypes
 * 
 * Class Vector will orginize the methods we wish to incorparate so that we can make methods that work as a vector.
 */



#ifndef VECTOR_H
#define VECTOR_H

#include <string>
using namespace std;

class Vector {
 public:

  // Constructor
  Vector(const string& message);

  // Method to print the message
  void printMessage() const;
  
 private:
  string message;
  
};

#endif
