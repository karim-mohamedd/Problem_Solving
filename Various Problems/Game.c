#include <stdio.h>

int main()
{
    int num;
    printf("-----------------------------------------------------------------\n");
    printf("My Name is Karim\n");
    printf("Let's play a game! Today is your lucky day. Enter 1 or 2: \n");
    printf("-----------------------------------------------------------\n");

    // Read user input
    scanf("%d", &num);

    // Validate input and handle responses
    while (num != 1 && num != 2)
    {
        printf("Invalid input. Please enter 1 or 2: \n");
        scanf("%d", &num);
    }

    if (num == 1)
    {
        printf("Good morning, sir! I wish you a lucky day <3\n");
    }
    else if (num == 2)
    {
        printf("Hello, sir! I hope you are fine. Enjoy your day.\n");
    }

    return 0;
}
