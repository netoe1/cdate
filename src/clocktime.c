#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "clocktime.h"

#pragma region conts
#define UNDEFINED -1
#define TO_SUM 1900
#pragma endregion conts
/*--------------------*/
#pragma region structs
static struct CDATE_string
{
    char day[2];
    char month[2];
    char year[2];
    char hour[2];
    char min[2];
    char sec[2];
};

#pragma endregion structs
/*--------------------*/
#pragma region implementation
CDATE_Date getDateNow()
{
    CDATE_Date convert;
    time_t currentTime = time(&currentTime);
    struct tm *localTime = localtime(&currentTime);

    convert.day = localTime->tm_mday;
    convert.month = localTime->tm_mon + 1;
    convert.year = localTime->tm_year + TO_SUM;
    convert.hour = localTime->tm_hour;
    convert.sec = localTime->tm_sec;
    return convert;
}
char *getDateAsString() // Dinamic pointer allocation, remember to free memory!
{
    time_t currentTime;
    time(&currentTime);

    // Converte o tempo para a estrutura tm (struct tm)
    struct tm *localTime = localtime(&currentTime);

    // Aloca espaço para a string formatada
    char *formattedDate = (char *)malloc(11 * sizeof(char)); // 10 caracteres para a data + 1 para o caractere nulo

    // Verifica se a alocação foi bem-sucedida
    if (formattedDate == NULL)
    {
        fprintf(stderr, "Erro na alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    return formattedDate;
}
#pragma endregion implementation