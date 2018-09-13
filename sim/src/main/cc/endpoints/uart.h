#ifndef __UART_H
#define __UART_H

#include "serial.h"
#include <signal.h>

class uart_t: public endpoint_t
{
    public:
        uart_t(simif_t* sim);
        void send();
        void recv();
        virtual void init() {};
        virtual void tick();
        virtual bool terminate() { return false; }
        virtual int exit_code() { return 0; }

    private:
        serial_data_t<char> data;
};

#endif // __UART_H
