#pragma once

#include <iostream>
#include <ncurses.h>
#include "CRadioHeader.h"
#include "CBeaconFrame.h"
#include "mac.h"

class CSignalStregth{
private:
    C80211RadioHeader* radioHeader;
    C80211BeaconFrame* beaconframe;
    Mac macSendedTransmitterAddress;
    int packetPWR;

public:
    CSignalStregth();
    ~CSignalStregth();

    bool getPacketInfo(const u_char* packet, char* macTransmitterAddress);
    void printPacketPWR();
};