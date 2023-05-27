#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	ifstream FileIn;
	FileIn.open("PTIT.in", ios::in);
	ofstream FileOut;
	FileOut.open("PTIT.out", ios::out);
	string data;
	while (!FileIn.eof()) {
		getline(FileIn, data);
		FileOut << data << endl;
	}
	FileIn.close();
	FileOut.close();
	system("pause");
	return 0;

}
