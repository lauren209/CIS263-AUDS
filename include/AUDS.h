
#include <iostream>

template <typename T>

class AUDS{
public:
  //constructor
  AUDS(){
    data = new T[initialSize];


  }

  //destructor
  ~AUDS(){
    delete[] data;
  }


  void push(T element){


  }


  T pop(){


  }


private:

  int initialSize = 100;
  int size = 0;
  T* data;





}
