#include<iostream>
#include<fstream>

using namespace std;

int main() {
	std::ofstream file("output.txt");
	file << "hello world";
	file.close();
	return 0;
}