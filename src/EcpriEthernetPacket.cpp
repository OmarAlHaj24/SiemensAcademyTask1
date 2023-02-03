#include "EcpriEthernetPacket.h"

EcpriEthernetPacket:: EcpriEthernetPacket(string packet) : EthernetPacket(packet)
{
    //initialize the variables in bytes and hexadecimals
    protcolVersion = data.substr(0, 1);
    reserved = "0";
    concatinationIndicator = data.substr(1, 1);
    messageType = data.substr(2, 2);
    payloadSize = data.substr(4, 4);
    RtcID = data.substr(8, 4);
    sequenceID = data.substr(12, 4);
    newData = data.substr(16, data.size() - 16);
}

void EcpriEthernetPacket::print()
{
    cout << packet << endl;
    cout << "CRC: " << fcs << endl;
    cout << "Concatenation Indicator: " << concatinationIndicator << endl;
    cout << "Destination Address: " << destinationAddress << endl;
    cout << "Message Type: " << messageType << endl;
    cout << "Payload Size: " << payloadSize << endl;
    cout << "Protocol Version: " << protcolVersion << endl;
    cout << "RTC ID: " << RtcID << endl;
    cout << "Sequence ID: " << sequenceID << endl;
    cout << "Source Address: " << sourceAddress << endl;
    cout << "Type: " << type << endl;
}
