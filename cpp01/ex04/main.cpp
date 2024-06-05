#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Format error: <filename> <str1> <str2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];

	std::ifstream inputFile(filename);
	if (!inputFile) {
		std::cerr << "Error opening input file: " << filename << std::endl;
		return 1;
	}

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile) {
		std::cerr << "Error creating output file: " << filename << ".replace" << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(inputFile, line)) {
		std::size_t pos = 0;
		while ((pos = line.find(str1, pos)) != std::string::npos) {
			line.replace(pos, str1.length(), str2);
			pos += str2.length();
		}
		outputFile << line << std::endl;
	}

	inputFile.close();
	outputFile.close();

	return 0;
}
