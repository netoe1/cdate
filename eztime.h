#include <stdio.h>
#include <time.h>

/*CONST's*/


#define __SM_DC 1900
#define __MAMT 1

/*Global*/



typedef struct
{
	int day;
	int month;
	int year;
} MDY;

typedef struct 
{
	int hour;
	int minutes;
	int seconds;
}HMS;


MDY mdy; 
HMS hms;

void _initalizeStruct(){
	mdy.day = mdy.month = mdy.year = 0;
}

void _request()
{
	_initalizeStruct();
	time_t rtime;
	struct tm *timei;

	time(&rtime);
	timei = localtime(&rtime);

	mdy.day = timei->tm_mday;
	mdy.month = timei->tm_mon +__MAMT;
	mdy.year = timei->tm_year + __SM_DC;
	
	hms.hour = timei->tm_hour;
	hms.minutes = timei->tm_min;
	hms.seconds = timei->tm_sec;

}

void showFullMDY()
{
	_initalizeStruct();
	_request();
	printf("\n%d/%d/%d\n",mdy.day,mdy.month,mdy.year);
}

void showTimeNow(){
	_initalizeStruct();
	_request();
	printf("\n%dh::%dmin::%dsec\n",hms.hour,hms.minutes,hms.seconds);
}

void CL_showTimeNow(){
	_initalizeStruct();
	_request();
	printf("\n%d::%d:%d\n",hms.hour,hms.minutes,hms.seconds);
}

