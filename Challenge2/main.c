/********************************************************************/
/* This program is about calculation to find the area of rectangle  */
/* Author by : Emir Afiq Ridzuan                                    */
/********************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    //region variable
    double width = 45.8;
    double height = 78.9;
    double perimeter = 0.0;
    double area = 0.0;

    //perimeter and area calculation
    perimeter = 2.0 * (height + width);
    area = height * width;

    //display output
    printf("Height is: %.2f, Width is: %.2f, Perimeter is: %f\n", height, width, perimeter);
    printf("Area is: %f\n ", area);

    return 0;
}
