// Serial.cpp

#include "Serial.h"

Serial::Serial()
{
    USB=open("/dev/ttyACM0",O_RDWR| O_NOCTTY| O_NONBLOCK);

    struct termios tty;
    struct termios tty_old;
    memset (&tty, 0, sizeof tty);

    /* Error Handling */
    if ( tcgetattr ( USB, &tty ) != 0 ) {
        exit(5);
    }

    /* Save old tty parameters */
    tty_old = tty;

    /* Set Baud Rate */
    cfsetospeed (&tty, (speed_t)B9600);
    cfsetispeed (&tty, (speed_t)B9600);

    /* Setting other Port Stuff */
    tty.c_cflag     &=  ~PARENB;            // Make 8n1
    tty.c_cflag     &=  ~CSTOPB;
    tty.c_cflag     &=  ~CSIZE;
    tty.c_cflag     |=  CS8;

    tty.c_cflag     &=  ~CRTSCTS;           // no flow control
    tty.c_cc[VMIN]   =  1;                  // read doesn't block
    tty.c_cc[VTIME]  =  5;                  // 0.5 seconds read timeout
    tty.c_cflag     |=  CREAD | CLOCAL;     // turn on READ & ignore ctrl lines

    /* Make raw */
    cfmakeraw(&tty);

    /* Flush Port, then applies attributes */
    tcflush( USB, TCIFLUSH );
    if ( tcsetattr ( USB, TCSANOW, &tty ) != 0) {
        exit(6);
    }



}

void Serial::myWrite(char * data,int length){
    int n_written = 0;


    do {
        n_written = write( USB,data, length );

    } while (n_written != length);
}

void Serial::myRead(char *returnBuf, int &returnLength, char endChar){
    char response[1024];
    memset(response, '\0', sizeof response);
    int n=0,spot=0;
    char buf;

    read(USB,&buf,1);
    while(buf!='S')
        read(USB,&buf,1);
    do {
        n = read( USB, &buf, 1 );
        sprintf( &response[spot], "%c", buf );
        spot += n;
    } while( buf != '\r' && n > 0 && buf !=endChar);



    memcpy(returnBuf,response,spot+1);
    returnLength=spot;
}


