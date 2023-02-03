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
    else
    {
        return new EthernetPacket(packet);
    }
}