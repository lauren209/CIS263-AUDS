#include <algorithm>
#include <random>

template <typename T>
class AUDS{
public:

	AUDS(){
		data = new T[maxSize];
	}

	AUDS(const AUDS &other){
		currentSize = other.currentSize;
		maxSize = other.maxSize;
		data = new T[maxSize];
		for(int i=0; i<currentSize; i++){
			data[i] = other.data[i];
		}
	}

	AUDS& operator=(AUDS other){
		swap(*this, other);
		return *this;
	}

	~AUDS(){
		delete[] data;
	}

	int size(){
		return currentSize;
	}

	void push(T x){
		T* tmp;
		if(currentSize >= maxSize){
			maxSize = maxSize * 2;
			tmp = new T[maxSize];
			for(int i=0; i<currentSize; i++){
				tmp[i] = data[i];
			}
			delete[] data;
			data = tmp;
		}
		data[currentSize++] = x;
	}

	T pop(){
		std::random_device rd;
		std::mt19937 mt( rd() );
		std::uniform_int_distribution<int> i(0,currentSize);
		int index = i(mt);
		T tmp = data[index];
		data[index] = data[currentSize - 1];
		currentSize--;
		return tmp;		
	}

private:
	int maxSize = 10;
	int currentSize = 0;
	T* data;
	void swap(AUDS& first, AUDS& second){
		std::swap(first.data, second.data);
		std::swap(first.currentSize, second.currentSize);
		std::swap(first.maxSize, second.maxSize);
	}
}; 
