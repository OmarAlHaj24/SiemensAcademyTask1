#pragma once
#include <string>
#include "Packet.h"
using namespace std;

class EthernetPacket : public Packet
{
protected:
    string preamble;
    string destinationAddress;
    string sourceAddress;
    string type;
    string data;
    string fcs;

public:
    EthernetPacket(string packet);
    void print() override;
};