#include <iostream>
#include <vector>

using namespace std;

//intVecExtended.join()
//intVecExtended.subvector(0, 1)
//get range of indexes and push back into new vector
//intvectexntede.insert(0, vector<T> tempVec)
//https://www.geeksforgeeks.org/vector-insert-function-in-c-stl/
template<class T>
T Square(T val)
{
    return val * val;
}

template <typename T>
class VectorExtension{
private:
  vector<T> vec;
  vector<T> vec2;
  vector<T> tempVec;
public:
  VectorExtension(vector<T> values);
  void print();
  void join(vector<T> vec, vector<T> tempVec);
  void subvector(int a, int b);
  void insert(int a, int b);
};

template <typename T>
VectorExtension<T>::VectorExtension(vector<T> values){
  for(T val: values){
    vec.push_back(val);
  }
}

template <typename T>
void VectorExtension<T>::print(){
  for(int i=0;i<vec.size();i++){
    cout << vec[i] << "," << endl;
  }
}

template <typename T>
void VectorExtension<T>::join(vector<T> vec, vector<T> tempVec){
  for(int i=0; i<tempVec.size(); i++){
    vec.push_back(tempVec[i]);
  }
}

template <typename T>
void VectorExtension<T>::subvector(int a, int b){
  if(b > vec.size()){
    cout << "error";
  }
  else{
    for(int i =a; i < b; i++){
      tempVec.push_back(vec[i]);
    }
  }
}

template <typename T>
void VectorExtension<T>::insert(int a, vector<T> ){
  if(a > vec.size()){
    cout << "error";
  }
  else{
    for(int i = a; i < vec.size())
  }
}

int main() {
  
}