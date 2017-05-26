// Serial.h

#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <stdio.h>      // standard input / output functions
#include <stdlib.h>
#include <string.h>     // string function definitions
#include <unistd.h>     // UNIX standard function definitions
#include <fcntl.h>      // File control definitions
#include <errno.h>      // Error number definitions
#include <termios.h>

class Serial
{

public:
    Serial();
    ~Serial();


    void myWrite(char * data,int length);
    void myRead(char *returnBuf, int &returnLength, char);



private:
    int USB;



};

#endif
