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

## MatrixV2
[MatrixV2](https://github.com/Shivar-J/Cpp-Projects/blob/MatrixV2/main.cpp) is a program that normalises a matrix or multiply two (2x2) matrices together.

### Snippet of Code
```cpp
vector<vector<int>> multiplyMatrix2x2(vector<vector<int>> vec, vector<vector<int>> vec2){
    int rw = 2;
    int cl = 2;
    vector<vector<int>> tempVec(rw, vector<int> (cl));
    
    cout << "multiply matrix: " << endl;
    for(int i = 0; i < rw; i++){
        for(int j = 0; j < cl; j++){
            int value = vec[i][j] * vec2[i][j];
            //cout << value << endl;
            tempVec[i][j] = value;
            //tempVec[i].push_back(value);
        }
    }
    return tempVec;
}
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
