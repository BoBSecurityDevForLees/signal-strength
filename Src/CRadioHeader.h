#pragma once

#include <iostream>
#include <cstring>

class C80211RadioHeader
{
private:
    uint8_t it_version;
    uint8_t it_pad;
    uint16_t it_len;
    uint32_t it_present;
    int8_t it_signalPW;

public:
    C80211RadioHeader(const u_char* packet);
    ~C80211RadioHeader();

    uint get80211Length();
    int getsignalPower();
};