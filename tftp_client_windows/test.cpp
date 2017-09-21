
#include "tftp.h"

// ============
// Main Program
// ============

int main(int argc, char **argv)
{
	int ret;
	ret = tftp_winsock_init();
	if(ret) {
		return -1;
	}

	//ret = tftp_get_file("192.168.0.27", "rtsp-h264");
	//printf("tftp_get_file ret %d\n", ret);

	ret = tftp_put_file("192.168.0.27", "tfile");
	printf("tftp_put_file ret %d\n", ret);

	tftp_winsock_end();
	system("pause");
	return 0;
}