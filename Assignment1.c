#include <stdio.h>
int main()
{
    // 1.	Write a program to print Hello Students on the screen.
    printf("Hello\n");


    // 2.	Write a program to print Hello in the first line and Students in the second line.
    printf("Hello \n Students");


    // 3.	Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
    printf("\n\"MySirG\"\n");


    // 4.	WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
    // Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.
    float Pi = 3.14159;
    int R;
    float A;
    printf("Please enter your radius R =");
    scanf("%d", &R);
    A = Pi * R * R;
    printf("\"Area of circle is %f having the radius %d\"\n", A, R);


    // 6.	WAP to print the name of the user in double quotes.
    // Expected output format – “Hello , Amit Kumar”
    printf("\"Hello , Abhishek Gajanan Khodke\"\n");


    // 7.	WAP to print “%d” on the screen.
    printf("%%d \n");


    // 8.	WAP to print “\n” on the screen.
    printf("\\n \n");


    // 9.	WAP to print “\\” on the screen.
    printf("\\ \n");


    // 10.	WAP to take date as an input in below given format and convert the date format and
    // display the result as given below.
    // User Input date format – “DD/MM/YYYY”  (27/11/2022)
    // Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    int D, M, Y;
    printf("Enter Day, Month, Year\n");
    scanf("%d%d%d", &D, &M, &Y);
    printf("(Day - %d , Month - %d , Year - %d)\n", D, M, Y);


    // 11.	WAP to take time as an input in below given format and
    //  convert the time format and display the result as given below.
    // User Input date format – “HH:MM”
    // Output format – “HH hour and MM Minute”
    // Example –
    // “11:25” converted to “11 Hour and 25 Minute”
    int T, H;
    printf("Enter your Hour and Minute\n");
    scanf("%d%d", &T, &H);
    printf("\"%d:%d\" converted to \"%d Hour and %d Minute\"\n", T, H, T, H);
    printf("%d hour and %d Minute\n", T, H);


    // 12.
    int x = printf("ineuron");
    printf("%d", x); //    OUTPUT OF THIS PROGRAM IS "7". 
    //(THIS CODE IS COUNTING NO. OF ALPHABATES)

    return 0;
}