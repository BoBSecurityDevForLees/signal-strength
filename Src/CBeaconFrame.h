#pragma once

#include <iostream>
#include <cstring>
#include "mac.h"

class C80211BeaconFrame
{
private:
    Mac macDestinationAddress;
    Mac macTransmitterAddress;
    Mac macBSSID;

public:
    C80211BeaconFrame(const u_char* packet);
    ~C80211BeaconFrame();
    Mac getTransmitterAddress();
};