#pragma once

#include <iostream>

void usage()
{
    std::cerr << "syntax : signal-strength <interface> <mac>" << std::endl;
    std::cerr << "sample : signal-strength mon0 00:11:22:33:44:55"<< std::endl;
}

void printErrorInterface(char* strErr)
{
    std::cerr << strErr << std::endl;
    std::cerr << "Check  Interface Or Permission" << std::endl;
}
