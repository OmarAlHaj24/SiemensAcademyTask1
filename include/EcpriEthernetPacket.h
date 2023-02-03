#pragma once
#include <iostream>
#include <string>
#include "EthernetPacket.h"
using namespace std;

class EcpriEthernetPacket : public EthernetPacket
{
private:
    string protcolVersion;
    string reserved;
    string concatinationIndicator;
    string messageType;
    string payloadSize;
    string RtcID;
    string sequenceID;
    string newData;

public:
    EcpriEthernetPacket(string packet);
    void print() override;
};