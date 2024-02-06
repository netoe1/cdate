#include "../include/clocktime.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "");
    pDATE data = getFullDateAsString();
    printf(data);
    freeDate(data);
    return 0;
}