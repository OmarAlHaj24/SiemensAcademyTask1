#pragma once
#include <string>
using namespace std;

class Packet
{
    
protected:
    string packet;

public:
    virtual void print() = 0;

};