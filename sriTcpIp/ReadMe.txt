For Windows OS

1. Microsoft Visual Studio 2017 C++ project

//-----------------------------------------------------
//-----------------------------------------------------
//-----------------------------------------------------

For Linux OS
//-----------------------------------------------------
1. Need C++ 11 surport
//-----------------------------------------------------
2. change the line in the "sriCommDefine.h"
from

#define IS_WINDOWS_OS  0

to

//#define IS_WINDOWS_OS  0

//-----------------------------------------------------
3. Then buil the demo.

g++ -o SRI -Wall -std=c++11 -pthread sriRDTcpClientDemo.cpp sriCommTCPClient.cpp sriCommManager.cpp sriCommParser.cpp sriCommM8218Parser.cpp sriCommCircularBuffer.cpp sriCommATParser.cpp

