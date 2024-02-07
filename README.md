# clocktime.h

<h4>Static library who abstracts the use of time.h in C. It was made to be simple and fast.</h4>
<p>
    We are developing this library in GNU/Linux, so, at the first, all makefile sections are considering gcc for linux. If you're using Windows, we recommend you to compile binaries.
    For now, we don't want to make this library POSIX, the team will do this task when finish .
</p>

<h2>Clocktime header's file:</h2>

<p>

    ```c
    #pragma region namespaces

    typedef char \*pDATE;
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
    pDATE getDateAsString_dynamic(); // Dinamic ptr allocation, free memory with CDATE_free() or free() function availble in stdlib.h namespace.
    pDATE getFullDateAsString(); // Dinamic ptr allocation, free memory with CDATE_free() or free() function availble in stdlib.h namespace.

    #pragma endregion functions

    ```

</p>

<h1>Example code:</h1>
<ul>
<li>
    <h4>To storage data in a variable:</h4>

        ```c
        /*getDate.c*/
        #include <stdio.h>
        #include <stdlib.h>
        #include "clocktime.h" // Make sure that you include the right path


        int main(){
            CDATE_Date date_struct; // Init the structure.
            date_struct = getDateNow(); // The Data will be set in structure
            //  Use for whatever you want to do.
            //  Showing data.

            printf("The data now:%02d/%02d/%02d",date_struct.day,date_struct.month,date_struct.year);

            // Output be like:
            // The data now: 07/02/2024
            return 0;
        }
        ```

</li>

<li>
    <h4>To get the data parsed in a string:</h4>
    <h5>OBS: Use of dynamic memory allocation, remember to free!</h5>
        
    ```c
        #include <stdio.h>
        #include <stdlib.h>
        #include "clocktime.h"

        int main(void){
            setlocale(LC_ALL, "");

            // pDATE is a typedef to char*
            pDATE data = getFullDateAsString();
            printf(data);

            CDATE_free(data);   // CDATE_free() is a namespace for free() from stdlib.h
                                // This namespace exists avoid mistakes with the methods,
                                // but you can use free().

            // Output:
            // 23/02/2024 01:20:04

            return 0;
        }
    ```

</li>
<li>
    <h4>To get only date, without time:</h4>
    <h6>Careful with memory leaks, this uses dynamic memory alocation.</h6>

    ```c
        #include <stdio.h>
        #include <stdlib.h>
        #include "clocktime.h"

        int main(void){
            setlocale(LC_ALL, "");

            // pDATE is a typedef to char*
            pDATE data = getFullDate();
            printf(data);

            CDATE_free(data);   // CDATE_free() is a namespace for free() from stdlib.h
                                // This namespace exists avoid mistakes with the methods,
                                // but you can use free().

            // Output:
            // 23/02/2024

            return 0;
        }
    ```

</li>
</ul>

<h1>End.... May not.</h1>
<p>
    For while, these are the functions. Basic and simple.
</p>

<h4>Use with caution and responsability, enjoy!</h4>
