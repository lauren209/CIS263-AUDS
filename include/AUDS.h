
#include <iostream>

template <typename T>

class AUDS{
public:
/**
*integer to hold the size
*/
  int currentsize = 0;

/**
*constructor to set all the variables
*/
  AUDS(){
    currentsize = 0;
    data = new T[capacity];
  }

/**
* delete all the elements in the structure
*/
  ~AUDS(){
    currentsize = 0;
    delete[] data;
  }

/**
* add a new element into the structure
*/
  void push(T element){


    if(currentsize == 0){
      data[currentsize] = element;
      currentsize++;
    }
    else if (currentsize == capacity){
      newData = new T[capacity * currentsize];

      for (int i = 0; i<currentsize; i++){
        newData[i] = data[i];
      }
      capacity = capacity * currentsize;
      delete[] data;
      data = newData;
      currentsize++;
      // data[currentsize] = element;
    }
    else{
      data[currentsize++] = element;
    }

  }


/**
*remove the first element in the structure
*/
  T pop(){
    int randNum = rand() % currentsize;
    if(currentsize != 0){
      // temp = data[currentsize];
      currentsize--;
    }
      return data[randNum];
  }

/**
*method to return the size of the data structure
*/
int size(){
  return currentsize;
}

private:
/**
*setting the initial size of structure
*/
  int capacity = 100;
  T* data;
  T* temp;
  T* newData;
};
