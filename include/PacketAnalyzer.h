#pragma once
#include <string>
#include <vector>
#include "Packet.h"
#include "Factory.h"
using namespace std;

class PacketAnalyzer
{

private:
    string inputFileName;
    string outputFileName;
    vector <Packet*> packets;
    string getNextPacket(); //Currently using freopen() to read from file

public:
    PacketAnalyzer(string inputFileName, string outputFileName);
    ~PacketAnalyzer();
    void analyze();
    void print();

};