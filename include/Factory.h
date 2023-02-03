#pragma once
#include <string>
#include "EthernetPacket.h"
#include "EcpriEthernetPacket.h"

class Factory
{

private:
    static string getPacketType(string packet);

public:
    static Packet *createPacket(string packet);
};