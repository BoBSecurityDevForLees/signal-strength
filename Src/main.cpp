#include "CSignal-Strength.h"
#include "HelpFunc.h"
#include <pcap.h>

int main(int argc, char* argv[])
{
    // 만약 인자가 정상적으로 들어오지 않았다면?
    if(argc < 3)
    {
        usage();
        return -1;
    }

    char* interface = argv[1];
    char strErr[PCAP_ERRBUF_SIZE];
    pcap_t* handle = pcap_open_live(interface, BUFSIZ, 1, 1, strErr);
    
    // 해당 인터페이스가 없거나 권한이 없는 경우우
    if(handle == nullptr)
    {
        printErrorInterface(strErr);
        return -1;
    }

}