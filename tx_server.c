#include <stdio.h>
#include "tx_server.h"

void TxSrv_init(TxServer* server, char ad, 
    void(*responce_func) (char* buf, size_t lenght),
    void(*get_data) (char id, char* args, size_t args_lenght, 
        char* responce, size_t max_responce_lenght, char* error)){}

void TxSrv_write_data(TxServer* server, char* buf, size_t lenght){}


int main ()
{
    return(0);
}