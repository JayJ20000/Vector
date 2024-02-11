#include "Vector.h"
#include <fstream>
#include <iostream>

using namespace std;

  Vector::Vector(){
    vec_ptr = new int[vec_capacity];
    vec_size = 0;
    vec_capacity = 0;
  }
  /* Description:
   *    Default constructor.  Initializes an empty vector.
   * Post-conditions:
   *    vec_ptr is NULL, vec_size=0, and vec_capacity=0.
   */


   Vector::Vector(const Vector &other){
        vec_ptr = new int[vec_size];
        vec_ptr = new int[other.vec_capacity];
        vec_size = other.vec_capacity;
        for (int i = 0; i < vec_size; i++){
            vec_ptr[i] = other.vec_ptr[i];//Complete
        }
   }
  /* Description:
   *    Copy constructor.  Initializes a dynamic array of the appropriate
   *    size/capacity and copies data from other's array to the new array.
   * Post-conditions:
   *    vec_ptr is initialized, and its array contains other.vec_ptr's data,
   *    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
   */


  Vector::~Vector(){
    delete[] vec_ptr;
    vec_size = 0;
    vec_capacity = 0;
  }
  /* Description:
   *    Destructor.  Deallocates vec_ptr.
   * Postconditions:
   *    vec_ptr has been deallocated, current_size=0, and capacity=0.
   */

 
   Vector::Vector& operator=(const Vector &other){
        int *similar = new int[other.vec_capacity];
        vec_size = other.vec_size;
        vec_capacity = other.vec_capacity;
        for (int i = 0; i < vec_size; i++)
        {
            similar[i] = other.vec_ptr[i];
        }
    return *similar;
   }
  /* Description:
   *    Assignment operator.  Initializes a dynamic array of the appropriate
   *    size/capacity and copies data from other's array to the new array.
   * Post-conditions:
   *    vec_ptr is initialized, and its array contains other.vec_ptr's data,
   *    vec_size=other.vec_size, and vec_capacity=other.vec_capacity.
   */
 
 
  int Vector::size(){
      return vec_size;
  }
  /* Description:
   *    Returns the current number of elements in the vector.
   */

 

   int Vector::capacity(){
       return vec_capacity;
   }
  /* Description:
   *    Returns the currently allocated storage capacity of the vector.
   */



  void Vector::push_back(int element){
    //if (vec_size == vec_capacity) resize();
    for (int i = vec_size; i > 0; i--){
        vec_ptr[i] = vec_ptr[i - 1];
    }
    vec_ptr[0] = element;
    vec_size++;
  }
  /* Description:
   *    Similar to std::vector.push_back(int element), stores element at the end of the vector.
   * Postconditions:
   *    Item element has is stored at the end of the vector.
   * Notes:
   *    If necessary, calls reserve() before adding element to the end of the vector.
   *    This reserve doubles the current capacity of the vector.
   */


  void Vector::reserve(int n){
    int *newVectr = new int[vec_capacity];
    for (int n = 0; n < vec_size; n++){
    newVectr[n] = vec_ptr[n];
    }
    if (n > vec_capacity){
        
    }
    if (n <= vec_capacity){
        
    }
  }
  /* Description:
   *    Requests that the vector capacity be resized at least enough to contain n elements.
   *
   *    If n is greater than the current capacity, the function causes the container to reallocate
   *    its storage increasing its capacity to n (or greater).
   *
   *    If n is less than or equal to the current capacity, the call does nothing (no reallocation
   *    or change in vector capacity).
   *
   *    This function has no effect on vector size and cannot alter its elements.
   *
   * Postconditions:
   *    Vector capacity is now n.  Vector size (and contents) remains the same.
   *
   */


 int& operator[](unsigned int index); 
  /* Description:
   *    Returns a reference to the element at position index.
   */

    return 0;
}