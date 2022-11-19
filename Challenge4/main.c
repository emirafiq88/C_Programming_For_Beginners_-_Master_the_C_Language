/********************************************************************/
/* This program is about showing name at output                     */
/* Author by : Emir Afiq Ridzuan                                    */
/********************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MinuteEntered = 0;
    double year = 0.0;
    double day = 0.0;
    double MinuteInYear = 0;

    printf("Please enter the number of minutes: ");

    // get input from user
    scanf("%d", &MinuteEntered);

    MinuteInYear = (60 * 24 * 365);

    year = (MinuteEntered / MinuteInYear);
    day = (MinuteEntered / 60.0) / 24.0;

    printf("%d minutes is approximately %f years and %f days\n", MinuteEntered, year, day);

    return 0;
}
