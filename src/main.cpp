#include <iostream>
#include "PacketAnalyzer.h"
using namespace std;

int main(int argc, char *argv[])
{
	//inputFileName = "input_packets";
	//outputFileName = "output_packets";
	cout << "Please enter the name of the input file: ";
	string inputFileName;
	cin >> inputFileName;
	cout << "Please enter the name of the output file: ";
	string outputFileName;
	cin >> outputFileName;
	PacketAnalyzer packetAnalyzer(inputFileName, outputFileName);
	packetAnalyzer.analyze();
	packetAnalyzer.print();
}