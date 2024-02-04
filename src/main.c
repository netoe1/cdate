#include <stdio.h>
#include "clocktime.h"

int main(void)
{
    CDATE_Date date;
    date = getDateNow();
    printf("\n%d/%d/%d\n", date.day, date.month, date.year);

    return 0;
}