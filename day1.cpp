#include <iostream>
#include <string>
#include <cstddef>
#include <fstream>
using namespace std;

int main() {
	string input;
	int total = 0, next = 0;
	ifstream fin("input");
	fin >> input;
	for(int i = 0; i < input.size(); i++) {
		next = i + 1;
		if(next == input.size()) 
			next = 0;
		if(input[i] == input[next]) 
			total += (int)input[i] - '0';
	}

	cout << total << endl;	
	return 0;
}
