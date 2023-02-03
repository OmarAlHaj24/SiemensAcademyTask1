#include "EthernetPacket.h"
#include <iostream>
#include <string>
using namespace std;

EthernetPacket::EthernetPacket(string packet)
{
    // initialize the variables in bytes and hexadecimals
    this->packet = packet;
    preamble = packet.substr(0, 16);
    destinationAddress = packet.substr(16, 12);
    sourceAddress = packet.substr(28, 12);
    type = packet.substr(40, 4);
    int start = 44;
    int end = packet.size() - 8;
    data = packet.substr(start, end - start);
    fcs = packet.substr(packet.size() - 8, 8);
}

void EthernetPacket::print()
{
    cout << packet << endl;
    cout << "CRC: " << fcs << endl;
    cout << "Destination Address: " << destinationAddress << endl;
    cout << "Source Address: " << sourceAddress << endl;
    cout << "Type: " << type << endl;
}
