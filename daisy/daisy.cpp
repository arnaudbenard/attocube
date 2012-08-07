// daisy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "daisybase.h"
#pragma comment ( lib,"daisybase")

using namespace std;

string check_error(int val);

string check_error(int val){

	string error;
	switch (val){
		case DYB_Ok: error="OK";break;
		case DYB_Error: error="Error";break;
		case DYB_Timeout: error="Timeout";break;
		case DYB_NotConnected: error="NotConnected";break;
		case DYB_DriverError: error="Driver Error";break;
		case DYB_FileNotFound: error="FileNotFound";break;
		case DYB_SrvNotFound: error="SrvNotFound";break;
		case DYB_ServerLost: error="ServerLost";break;
		case DYB_OutOfRange: error="OutOfRange";break;
		case DYB_WrongContext: error="WrongContext";break;
		case DYB_XmlError: error="XmlError";break;
		case DYB_OpenError: error="OpenError";break;
		default: error="What just did happen...";break;
	}

	return error;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char* address = ".";
	string error;
	int val = DYB_init(NULL,address,NULL,7900);
	switch(val){
		case DYB_Ok: printf("Init\n");\
			cout << "Error message " << check_error(DYB_run()) << endl;
			//DYB_getParameterAsync(0);

			break;
		case DYB_OutOfRange: printf("OutOfRange\n");break;
		default: printf("default value\n");
	}

	return 0;
}