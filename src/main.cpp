#include <iostream>
#include "PacketAnalyzer.h"
using namespace std;

int main(int argc, char *argv[])
{
	PacketAnalyzer packetAnalyzer("input_packets", "output.txt");
	packetAnalyzer.analyze();
	packetAnalyzer.print();
}