//
//  main.cpp
//  CompetingTables
//
//  Created by Shivar Jadoonanan on 2021-10-05.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main(){
    cout << "2x2, 3x3, 4x4 matrix?" << endl;
    string userInput;
    cin >> userInput;
    
    vector<int> twoBytwo;
    vector<int> twoGuess;
    vector<int> twoTemp;
    vector<int> threeBythree;
    vector<int> threeGuess;
    vector<int> threeTemp;
    vector<int> fourByfour;
    vector<int> fourGuess;
    vector<int> fourTemp;

    int counter = 0;

    if(userInput == "2x2")
    {
    srand((unsigned) time(0));
    int randomNumber;
    for (int i = 0; i < 4; i++) {
      randomNumber = (rand() % 100) + 1;
      //cout << randomNumber << endl;
      twoBytwo.push_back(randomNumber);
    }
    for(int j = 0; j < twoBytwo.size(); j++)
    {
      cout << " | " << "*" << " | ";
      counter++;
      if(counter % 2 == 0){
        cout << endl;
      }
    }

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
    if(all_of(twoTemp.begin(), twoTemp.end(), [](int n) { return n==0; }))
    {
      cout << "you won!" << endl;
    }
    else{
      cout << "you lost" << endl;
    }
    }
    else if(userInput == "3x3"){
    srand((unsigned) time(0));
    int randomNumber;
    for (int i = 0; i < 9; i++) {
      randomNumber = (rand() % 100) + 1;
      threeBythree.push_back(randomNumber);
    }
    for(int j = 0; j < threeBythree.size(); j++)
    {
      cout << " | " << "*" << " | ";
      counter++;
      if(counter % 3 == 0){
        cout << endl;
      }
    }
    for(int k = 0; k < 9; k++){
      cout << "Enter " << k+1 << " number: " << endl;
      int tempNum;
      cin >> tempNum;
      threeGuess.push_back(tempNum);
    }
    for(int l = 0; l < threeBythree.size(); l++){
      if(threeBythree[l] == threeGuess[l]){
        cout << "Guess Correct!" << endl;
        threeTemp.push_back(0);
      }
      else{
        cout << "Guess Incorrect!" << endl;
        threeTemp.push_back(threeBythree[l]);
      }
    }
    if(all_of(threeTemp.begin(), threeTemp.end(), [](int n) { return n==0; }))
    {
      cout << "you won!";
    }
    else{
      cout << "you lost";
    }
    }
    else if(userInput == "4x4"){
    srand((unsigned) time(0));
    int randomNumber;
    for (int i = 0; i < 16; i++) {
      randomNumber = (rand() % 100) + 1;
      fourByfour.push_back(randomNumber);
    }
    for(int j = 0; j < fourByfour.size(); j++)
    {
      cout << " | " << "*" << " | ";
      counter++;
      if(counter % 4 == 0){
        cout << endl;
      }
    }
    for(int k = 0; k < fourByfour.size(); k++){
      cout << "Enter " << k+1 << " number: " << endl;
      int tempNum;
      cin >> tempNum;
      fourGuess.push_back(tempNum);
    }
    for(int l = 0; l < fourByfour.size(); l++){
      if(fourByfour[l] == fourByfour[l]){
        cout << "Guess Correct!" << endl;
        fourTemp.push_back(0);
      }
      else{
        cout << "Guess Incorrect!" << endl;
        fourTemp.push_back(fourByfour[l]);
      }
    }
    if(all_of(fourTemp.begin(), fourTemp.end(), [](int n) { return n==0; }))
    {
      cout << "you won!";
    }
    else{
      cout << "you lost";
    }
    }
    else{
    return 0;
    }
}
