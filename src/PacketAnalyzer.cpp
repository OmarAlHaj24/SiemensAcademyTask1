#include <iostream>
#include "PacketAnalyzer.h"

PacketAnalyzer::PacketAnalyzer(string inputFileName, string outputFileName)
{
    this->inputFileName = inputFileName;
    this->outputFileName = outputFileName;
    freopen(inputFileName.c_str(), "r", stdin);
    freopen(outputFileName.c_str(), "w", stdout);
}

PacketAnalyzer::~PacketAnalyzer()
{
    for (int i = 0; i < packets.size(); i++)
    {
        delete packets[i];
    }
}

string PacketAnalyzer::getNextPacket()
{
    // Currently using freopen() to read from file
    // Will be replaced with a function that reads from a file
    // and returns a string containing the next packet
    string packet = "";
    cin >> packet;
    return packet;
}

void PacketAnalyzer::analyze()
{
    string packet = getNextPacket();
    while (packet != "")
    {
        Packet* tempPacket = Factory::createPacket(packet);
        if(tempPacket != nullptr)
        {
            packets.push_back(tempPacket);
        }
        else
        {
            cout << "Packet is not supported" << endl;
        }
        packet = getNextPacket();
    }
}

void PacketAnalyzer::print()
{
    for (int i = 0; i < packets.size(); i++)
    {
        cout << "Packet # " << i << ":" << endl;
        packets[i]->print();
        cout << endl;
        cout << "**************************************************************************************************************************************************************************************************************************************" << endl;
        cout << endl;
    }
}
