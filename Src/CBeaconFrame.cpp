#include "CBeaconFrame.h"

C80211BeaconFrame::C80211BeaconFrame(const u_char* packet)
{
    u_char temp[6];
    // DestinationAddress 복사
    memcpy(&temp, &packet[4], 6);
    this->macDestinationAddress = Mac(temp);

    // Transmitter 복사
    memcpy(&temp, &packet[10], 6);
    this->macTransmitterAddress = Mac(temp);

    // BSSID 복사
    memcpy(&temp, &packet[16], 6);
    this->macBSSID = Mac(temp);
}

C80211BeaconFrame::~C80211BeaconFrame()
{

}

Mac C80211BeaconFrame::getTransmitterAddress()
{
    return this->macTransmitterAddress;
}