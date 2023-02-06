#include "CSignal-Strength.h"

CSignalStregth::CSignalStregth()
{
    initscr();
    move(0,0);
}

CSignalStregth::~CSignalStregth()
{

}

bool CSignalStregth::getPacketInfo(const u_char* packet, char* macTransmitterAddress)
{
    this->radioHeader = new C80211RadioHeader(&packet[0]);
    int radioHeaderSize = this->radioHeader->get80211Size();
    
    // 만약 BeaconFrame이 아니라면 실패를 리턴
    if(packet[radioHeaderSize] != 0x80)
        return false;

    this->macSendedTransmitterAddress = Mac(macTransmitterAddress);
    this->beaconframe = new C80211BeaconFrame(&packet[radioHeaderSize]);
    if(this->macSendedTransmitterAddress != beaconframe->getTransmitterAddress())
        return false;

    this->packetPWR = radioHeader->getsignalPower();
    return true;
}

void CSignalStregth::printPacketPWR()
{
    clear();
    printw("TransmitterAddr\t\tPWR\n");
         
    printw("%s\t%d\n", std::string(this->macSendedTransmitterAddress).data(), this->packetPWR);
    refresh();
}