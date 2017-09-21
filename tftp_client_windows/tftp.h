

#ifndef YF_TFTP_H
#define YF_TFTP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <windows.h>



int tftp_winsock_init();
int tftp_winsock_end();

int tftp_get_file(char *ipaddr, char *file_name);
int tftp_put_file(char *ipaddr, char *file_name);


#endif