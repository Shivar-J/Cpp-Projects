//
//  main.cpp
//  BasicGenerics
//
//  Created by Shivar Jadoonanan on 2021-10-02.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
T Square(T val)
{
    return val * val;
}

template<typename T>
class VectorExtension{
private:
    vector<T> vec;
    vector<T> vec2;
    vector<T> tempVec;
    int counter = 0;
public:
    VectorExtension(vector<T> values);
    void print();
    void join(vector<T> tempVec);
    void subvector(int a, int b);
    void insert(vector<T> vec, int b);
};

template<typename T>
VectorExtension<T>::VectorExtension(vector<T> values){
    for(T val: values){
        vec.push_back(val);
    }
}

template<typename T>
void VectorExtension<T>::print(){
    for(int i = 0; i < vec.size();i++){
        cout << vec[i] << ", ";
    }
}

template<typename T>
void VectorExtension<T>::join(vector<T> tempVec){
    for(int i = 0; i < tempVec.size(); i++){
        vec.push_back(tempVec[i]);
    }
}

template<typename T>
void VectorExtension<T>::subvector(int a, int b){
    if(b > vec.size()){
        cout << "err";
    }
    else{
        for(int i = a; i <= b; i++){
            tempVec.push_back(vec[i]);
            
            for(int j = 0; j < tempVec.size(); j++){
                if(j == 0){
                    vec.clear();
                }
                vec.push_back(tempVec[j]);
            }
        }
    }
}

template<typename T>
void VectorExtension<T>::insert(vector<T> vec2, int b){
    if(b > vec.size()){
        cout << "error" << endl;
    }
    else{
        for(int i = 0; i <= b; i++){
            tempVec.push_back(vec[i]);
        }
        for(int j = 0; j < vec2.size(); j++){
            tempVec.push_back(vec2[j]);
        }
        for(int k = b+1; k < vec.size(); k++){
            tempVec.push_back(vec[k]);
        }
        for(int m = 0; m < tempVec.size(); m++){
            if(m == 0){
                vec.clear();
            }
            vec.push_back(tempVec[m]);
        }
    }
}

int main(int argc, const char * argv[]) {
    vector<int> intVec;
    intVec.push_back(100);
    intVec.push_back(200);
    intVec.push_back(300);
    intVec.push_back(400);
    intVec.push_back(500);
    intVec.push_back(600);
    
    VectorExtension<int> intVecExtended(intVec);
    //intVecExtended.print();
    
    vector<int> tempVec;
    tempVec.push_back(150);
    tempVec.push_back(250);
    tempVec.push_back(350);
    tempVec.push_back(450);
    tempVec.push_back(550);
    tempVec.push_back(650);
    
    VectorExtension<int> tempVecExtended(tempVec);
    //tempVecExtended.print();
    
    vector<char> charVec;
    charVec.push_back('a');
    charVec.push_back('b');
    charVec.push_back('c');
    charVec.push_back('d');
    charVec.push_back('e');
    charVec.push_back('f');
    
    VectorExtension<char> charVecExtended(charVec);
    //charVecExtended.print();
    
    intVecExtended.insert(tempVec, 2);
    intVecExtended.print();
    //cout << "New Vector" << endl;
    //intVecExtended.print();
    //intVecExtended.insert();
}
