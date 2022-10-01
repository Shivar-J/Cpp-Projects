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

## TransposingMatrix
[TransposingMatrix](https://github.com/Shivar-J/Cpp-Projects/blob/TransposingMatrix/TransposingMatrix/main.cpp) transposes a given matrix.

### Snippet of Code
```cpp
void Transpose(vector<vector<int>> matrix, int size) {
    vector<vector<int>> tempVec (size, vector<int> (size));
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            tempVec[i][j] = matrix[j][i];
            cout << tempVec[i][j] << " ";
        }
        cout << endl;
    }
}
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

## CharacterCounter
[CharacterCounter](https://github.com/Shivar-J/Cpp-Projects/blob/CharacterCounter/CharacterCounter/main.cpp) takes a user input and counter the number of each characters in the input.

## Snippet of Code
```cpp
unordered_map<char, int> letterCount;
    
for(int i = 0; i < input.size(); i++){
    if(letterCount.find(input[i]) == letterCount.end()){
        letterCount.insert(make_pair(input[i], 1));
    } else {
        letterCount[input[i]]++;
    }
}
```

## PerfectNumbers
[PerfectNumbers](https://github.com/Shivar-J/Cpp-Projects/blob/PerfectNumbers/PerfectNumbers/main.cpp) takes a input and finds all the divisors except for itself and adds them together, if it is equal to the input it is a perfect number otherwise it is not. (This codes a bit messy, not my best work)

### Snippet of Code
```cpp
for(int i = 0; i < number; i++){
    if(number % i == 0){
        cout << i << " ";
        tempNums.push_back(i);
    }
}
```

## ParsingPixels
[ParsingPixels](https://github.com/Shivar-J/Cpp-Projects/blob/ParsingPixels/ParsingPixels/main.cpp) takes a single input and splits into 3 ints red, green, and blue. Then checks if it is greater than 256.

### Snippet of Code
```cpp
for(int i = 0; i < iter; i++) {
    vector<int> tempVec;
    string str;
    getline(cin, str);
    istringstream split(str);

    string num;

    while(split >> num) {
        tempVec.push_back(stoi(num));
    }

    red.push_back(tempVec[0]);
    green.push_back(tempVec[1]);
    blue.push_back(tempVec[2]);
    tempVec.clear();
}
```

## ExceptionHandling Part 1
[ExceptionHandling Part 1](https://github.com/Shivar-J/Cpp-Projects/blob/ExceptionHandling1/ExceptionHandling/main.cpp) displays basic error handling.

### Snippet of Code
```cpp
for(int i = 0; i < stringNums.size(); i++) {
    try {
        if(stof(stringNums[i])) {
            float tempNum = stof(stringNums[i]);
            nums.push_back(tempNum);
        } else {
            throw 505;
        }
    } catch (...) {
        cout << "Invalid Input!" << endl;
        continue;
    }
}
```

## ExceptionHandling Part 2
[ExceptionHandling Part 2](https://github.com/Shivar-J/Cpp-Projects/blob/ExceptionHandling2/ExceptionHandling2/main.cpp) displays basic error handling.

### Snippet of Code
```cpp
try {
    if(stof(addNum)) {
        float tempNum = stof(addNum);
        nums.push_back(tempNum);
    } else {
        throw (addNum);
    }
} catch(string numAdd) {
    cout << "Invalid Input!" << endl << "Input was " << numAdd << endl;
}
```

## Challenge Problem 'Sentences'
[Setences](https://github.com/Shivar-J/Cpp-Projects/blob/Sentences/Sentences/main.cpp) is a challenge problem where you have to add commas after every other word without the use of vectors or arrays.

### Snippet of Code
```cpp
replace(sentence.begin(), sentence.end(), ',', '\0');
replace(sentence.begin()+start, sentence.begin()+(start + 1), ' ', '*');
start = sentence.find(" ");
replace(sentence.begin()+start, sentence.begin()+(start + 1), ' ', '*');
replace(sentence.begin(), (sentence.begin() + end), ' ', ',');
```

## Poker Functions
[Poker Functions](https://github.com/Shivar-J/Cpp-Projects/tree/PokerFunctions) recreates some basic poker functions ie. reading cards from file, sorting, checking cards, etc.
