#include <iostream>
#include <vector>
#include <fstream>
#include <utility>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

vector<string> rData;
vector<pair<int, string>> sData, pocketCards, fiveCards;

void print(vector<pair<int, string>> data) {
	for (int i = 0; i < data.size(); i++) {
		cout << "First: " << data[i].first << " Second: " << data[i].second << endl;
	}
}

bool CheckPair(vector<pair<int, string>> pCards, vector<pair<int, string>> fCards) {
	for (int i = 0; i < pCards.size(); i++) {
		for (int j = 0; j < fCards.size(); j++) {
			if (pCards[i].first == fCards[j].first) {
				cout << "Pair Found" << endl;
				return true;
			}
		}
	}
	return false;
}

bool CheckTwoPair(vector<pair<int, string>> pCards, vector<pair<int, string>> fCards) {
	int counter = 0;

	for (int i = 0; i < pCards.size(); i++) {
		for (int j = 0; j < fCards.size(); j++) {
			if (counter == 2) {
				return true;
			}
			if (pCards[i].first == fCards[j].first) {
				counter++;
				//cout << "Pair Found" << endl;
			}
		}
	}
	if (counter != 2) {
		cout << "Two Pair not Found!" << endl;
	}
	return false;
}

map<int, unsigned int> counter(vector<int>& vals) {
	map<int, unsigned int> rv;

	for (auto val = vals.begin(); val != vals.end(); ++val) {
		rv[*val]++;
	}

	return rv;
}

vector<int> VectorPairToVector(vector<pair<int, string>> data) {
	vector<int> firstData;

	for (int i = 0; i < data.size(); i++) {
		firstData.push_back(data[i].first);
	}

	return firstData;
}

bool CheckThreeKind(vector<pair<int, string>> pCards, vector<pair<int, string>> fCards) {
	vector<pair<int, string>> temp;

	for (int i = 0; i < pCards.size(); i++)
		temp.push_back(pCards[i]);

	for (int i = 0; i < fCards.size(); i++)
		temp.push_back(fCards[i]);

	sort(temp.begin(), temp.end());
	vector<int> firstData = VectorPairToVector(temp);
	map<int, unsigned int> intCount = counter(firstData);

	for (auto&t : intCount) {
		//cout << t.first << " " << t.second << endl;
		if (t.second == 3) {
			cout << "Three of a Kind Found!" << endl;
			return true;
		}
	}
	cout << "Three of a Kind not Found!" << endl;
	return false;
}

map<string, unsigned int> counter(vector<string>& vals) {
	map<string, unsigned int> rv;

	for (auto val = vals.begin(); val != vals.end(); ++val) {
		rv[*val]++;
	}

	return rv;
}

vector<string> VectorPairToVecString(vector<pair<int, string>> data) {
	vector<string> stringData;

	for (int i = 0; i < data.size(); i++) {
		stringData.push_back(data[i].second);
	}

	return stringData;
}

bool CheckFlush(vector<pair<int, string>> pCards, vector<pair<int, string>> fCards) {
	vector<pair<int, string>> temp;

	for (int i = 0; i < pCards.size(); i++)
		temp.push_back(pCards[i]);

	for (int i = 0; i < fCards.size(); i++)
		temp.push_back(fCards[i]);

	vector<string> secondData = VectorPairToVecString(temp);
	map<string, unsigned int> stringCount = counter(secondData);

	for (auto& it : stringCount) {
		//cout << it.first << " " << it.second << endl;
		if (it.second = 5) {
			cout << "Flush Found!" << endl;
			return true;
		}
	}
	
	cout << "Flush not Found!" << endl;
	return false;
}

bool CheckFullHouse(vector<pair<int, string>> pCards, vector<pair<int, string>> fCards) {
	vector<pair<int, string>> temp;

	for (int i = 0; i < pCards.size(); i++)
		temp.push_back(pCards[i]);

	for (int i = 0; i < fCards.size(); i++)
		temp.push_back(fCards[i]);

	sort(temp.begin(), temp.end());
	vector<int> firstData = VectorPairToVector(temp);
	map<int, unsigned int> intCount = counter(firstData);

	int foundThree = 0;
	int foundTwo = 0;

	for (auto& it : intCount) {
		//cout << it.first << " " << it.second << endl;
		if (it.second == 2) {
			foundTwo++;
		}
		else if (it.second == 3) {
			foundThree++;
		}
	}

	if (foundTwo >= 1 && foundThree >= 1) {
		cout << "Full House Found!" << endl;
		return true;
	}

	cout << "Full House not Found!" << endl;
	return false;
}

int main() {
	//getting data
	ifstream file("card-data-1.txt");
	if (file.fail()) {
		cout << "Failed to open file!" << endl;
		return 0;
	}
	else {
		string temp;
		while (file >> temp) {
			rData.push_back(temp);
		}
	}
	
	//card pairs
	for (int i = 0; i < rData.size(); i++) {
		string delimiter = ":";

		size_t pos = 0;
		std::string token;
		while ((pos = rData[i].find(delimiter)) != std::string::npos) {
			token = rData[i].substr(0, pos);
			//std::cout << token << std::endl;
			rData[i].erase(0, pos + delimiter.length());
		}
		//std::cout << rData[i] << std::endl;
		sData.push_back(make_pair(stoi(token), rData[i]));
	}

	//splitting hand and others
	for (int i = 0; i < sData.size(); i++) {
		if (i < 2) {
			pocketCards.push_back(sData[i]);
		}
		else {
			fiveCards.push_back(sData[i]);
		}
	}

	print(pocketCards);
	print(fiveCards);
	CheckPair(pocketCards, fiveCards);
	CheckTwoPair(pocketCards, fiveCards);
	CheckThreeKind(pocketCards, fiveCards);
	CheckFlush(pocketCards, fiveCards);
	CheckFullHouse(pocketCards, fiveCards);
}