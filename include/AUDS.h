
#include <iostream>

template <typename T>

class AUDS{
public:

/**
*integer to hold the size
*/
  int size = 0;


/**
*constructor to set all the variables
*/
  AUDS(){
    size = 0;
    data = new T[initialSize];
  }

/**
* delete all the elements in the structure
*/
  ~AUDS(){
    size = 0;
    delete[] data;
  }

/**
* add a new element into the structure
*/
  void push(T element){


    if(size == 0){
      data[size] = element;
      size++;
    }
    else{
      size++;
      data[size] = element;
    }

  }


/**
*remove the first element in the structure
*/
  T pop(){
    if(size != 0){
     temp = data[size];
     size--;
    }


/**
*method to return the size of the data structure
*/
int size(){
  return size;
  // std::cout << size << std:endl;

}

};


private:

/**
*setting the initial size of structure
*/
  int initialSize = 100;
  // int size;
  T* data;
  T* temp;
};
