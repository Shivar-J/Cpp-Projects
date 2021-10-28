# C++ Projects

A Collection of my C++ Projects

## BasicGenerics

[BasicGenerics](https://github.com/Shivar-J/Cpp-Projects/blob/BasicGenerics/BasicGenerics/main.cpp) is a program that utilities generics to add additional functionality to vectors.

### Snippet of Code
```cpp
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
```

## CompetingTables 

[CompetingTables](https://github.com/Shivar-J/Cpp-Projects/blob/CompetingTables/CompetingTables/main.cpp) is a simple guessing game using vectors featuring various difficulties.


### Snippet of Code
```cpp
for(int l =0; l < twoBytwo.size(); l++){
      cout << "Enter " << l+1 << " number: " << endl;
      int tempNum;
      cin >> tempNum;
      twoGuess.push_back(tempNum);
    }
    for(int k = 0; k < 4; k++){
      if(twoBytwo[k] == twoGuess[k]){
        cout << "Guess Correct!" << endl;
        twoTemp.push_back(0);
      }
      else{
        cout << "Guess Incorrect!" << endl;
        twoTemp.push_back(twoBytwo[k]);
      }
    }
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
