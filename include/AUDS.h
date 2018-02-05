
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

  //take in a contant T reference
  void push(T element){


    if(size == 0){
      data[0] = element;
      ++size;
    }
    else{
      ++size;
      data[size] = element;
    }

  }


  T pop(){
    size--;
    if(size != 0){
     temp = data[size];

    }




  }


private:

  int initialSize = 100;
  int size = 0;
  T* data;
  T* temp;





};
