#ifndef CLOCKTIME_H
#define CLOCKTIME_H

#pragma region namespaces

typedef char *pDATE;
#define CDATE_free(pdate) free(pdate)

#pragma endregion namespaces

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
pDATE getDateAsString(); // Dinamic ptr allocation, free memory with CDATE_free() or free() function availble in stdlib.h namespace.
pDATE getFullDateAsString();	 // Dinamic ptr allocation, free memory with CDATE_free() or free() function availble in stdlib.h namespace.

#pragma endregion functions

#endif
