#ifndef CLOCKTIME_H
#define CLOCKTIME_H

#pragma region structs

typedef struct
{
	int day;
	int month;
	int year;
	int hour;
	int min;
	int sec;
} CDATE_Date;

#pragma endregion structs

#pragma region functions
CDATE_Date getDateNow();
char *getDateAsString_dynamic(); // Dinamic pointer allocation, remember to release memory.
#pragma endregion functions

#endif
