/*WAP to convert given second into its equivalent hour,
 minute and second as per the following format*/

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;
    // Prompt user for input
    printf("Enter the Time: ");
    scanf("%d", &total_seconds);
    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;
    total_seconds %= 3600; // Remaining seconds after extracting hours
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;
    // Display the result in the format HH:MM:SS
    printf("Equivalent time: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}