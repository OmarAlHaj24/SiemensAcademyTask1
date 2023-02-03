#include "Factory.h"

string Factory::getPacketType(string packet)
{
    string packetType = packet.substr(40, 4);
    return packetType;
}

Packet* Factory::createPacket(string packet)
{
    string packetType = getPacketType(packet);
    if (packetType == "AEFE")
    {
        return new EcpriEthernetPacket(packet);
    }
    else if(packetType == "88F7")
    {
        return new EthernetPacket(packet);
    }
    else
    {
        return nullptr;
    }
}