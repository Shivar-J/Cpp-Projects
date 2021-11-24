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

## RotateMatrix
[RotateMatrix](https://github.com/Shivar-J/Cpp-Projects/blob/RotateMatrix/RotateMatrix/main.cpp) is a program that rotates a 3x3 matrix clockwise or counter-clockwise.

### Snippet of Code
```cpp
void transpose(vector<vector<int>> &mat){
    if(mat.size() == 0){
        return;
    }
    vector<vector<int>> transposeVec(mat[0].size(), vector<int>());

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            transposeVec[j].push_back(mat[i][j]);
        }
    }

    mat = transposeVec;
}
```

## QueueStructures Part 1
[QueueStructures](https://github.com/Shivar-J/Cpp-Projects/blob/QueueStructuresP1/main.cpp) uses queues to add an element to a queue only if it's bigger than the last element.

## Snippet of Code
```cpp
void print(queue<int> q){
    cout << "Current Queue: " << endl;
    queue<int> tempQueue = q;
    while(!tempQueue.empty()){
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << "\n";
}
```

## FibonacciSequence
[Fibonacci Sequence](https://github.com/Shivar-J/Cpp-Projects/blob/Fibonacci/OddEvenFibonacci/main.cpp) creates the fibonacci sequence up to the users inputed number.

## Snippet of Code
```cpp
for(int i = 1; i <= userNum+1; i++){
    if(i == 1){
        continue;
    }
    if(i == 2){
        cout << secondNum << " ";
        continue;
    }
    if(tempNum % 2 == 0){
        evenNum += tempNum;
    }
    tempNum = firstNum + secondNum;
    firstNum = secondNum;
    secondNum = tempNum;
    cout << tempNum << " ";
}
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.
