/*
 * main.cpp
 *
 *  Created on: Aug 24, 2017
 *      Author: Kexin
 */
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &input) {
	for (unsigned int i=0; i<input.size(); i++) {
		cout<< input[i] << " ";
	}
	cout << endl;
}

class Solution {
	const int SENTINEL = 100;

public:
	vector<int> merge(vector<int> &input) {
		int mid = input.size()/2;
		vector<int> leftArray(input.begin(),input.begin() + mid);
		vector<int> rightArray(input.begin() + mid, input.end());
		vector<int> result;
		leftArray.push_back(SENTINEL);
		rightArray.push_back(SENTINEL);
		printVector(leftArray);
		printVector(rightArray);
		int i = 0;
		int j = 0;
		int count = 0;
		while (leftArray[i] != SENTINEL and rightArray[j] != SENTINEL) {
			if (leftArray[i] <= rightArray[j]) {
				result.push_back(leftArray[i]);
				count++;
				i++;
			} else {
				result.push_back(rightArray[j]);
				count++;
				j++;
			}
		printVector(result);

		}

		return result;
	}
};



int main(){
	Solution s1;
	cout << "first line of MergeSort!" << endl;
	vector<int> test = {4,5,6,1,2,3,4};
	vector<int> result = s1.merge(test);
	printVector(test);
	return 0;
}



