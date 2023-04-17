#include <stdio.h>

int main() {
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5;
    int total;

    printf("    Welcome to Quiz Night\n\n");

    printf("> Press 7 to start\n");
    printf("> Press 0 to quit\n");

    scanf("%d", &i);

    if(i==7)
    {
        printf("The Game has started\n\n");
    }
    else if (i==0)
    {
        printf("The Game has ended\n\n");
    }
    else
    {
        printf("Invalid Input");
    }

    if(i==7)
    {
        // Question 1
        printf("Q) Which one is the first search engine in the internet?\n\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");

        printf("Enter Your Answer :\n");
        if (scanf("%d", &ans1) != 1)
        {
            fflush(stdin);
            printf("You have to a Number, Next Question!\n\n");
            point1 = -1;
        }
        else if(ans1==2)
        {
            printf("Correct Answer\n");
            point1 = 5;
            printf("You have scored %d point\n\n", point1);
        }
        else
        {
            printf("Wrong Answer\n");
            point1 = 1;
            printf("You have scored %d point\n\n", point1);
        }
        // Question 2
        printf("Q) Which one is the first web browser invented in 1990?\n\n");
        printf("1) Internet Explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");

        printf("Enter Your Answer :\n");
        if (scanf("%d", &ans2) != 1)
        {
            fflush(stdin);
            printf("You have to a Number, Next Question!\n\n");
            point2 = -1;
        }
        else if(ans2==4){
            printf("Correct Answer\n");
            point2 = 5;
            printf("You have scored %d point\n\n", point2);
        }
        else
        {
            printf("Wrong Answer\n");
            point2= 0;
            printf("You have scored %d point\n\n", point2);
        }
        // Question 3
        printf("Q) First computer virus is known as?\n\n");
        printf("1) Rabbit\n");
        printf("2) Creeper Virus\n");
        printf("3) Elk Cloner\n");
        printf("4) SCA Virus\n");

        printf("Enter Your Answer :\n");

        if (scanf("%d", &ans3) != 1)
        {
            fflush(stdin);
            printf("You have to a Number, Next Question!\n\n");
            point3 = -1;
        }
        else if (ans3==2)
        {
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d point\n\n", point3);
        }
        else
        {
            printf("Wrong Answer\n");
            point3 = 0;
            printf("You have scored %d point\n\n", point3);
        }
    }
    // Question 4
    printf("Q) Firewall in a computer is used for?\n\n");
    printf("1) Security\n");
    printf("2) Data Transmission\n");
    printf("3) Monitoring\n");
    printf("4) Authentication\n");

    printf("Enter Your Answer :\n");

    if (scanf("%d", &ans4) != 1)
    {
        fflush(stdin);
        printf("You have to a Number, Next Question!\n\n");
        point4 = -1;
    }
    else if(ans4==1){
        printf("Correct Answer\n");
        point4 = 5;
        printf("You have scored %d point\n\n", point4);
    }
    else
    {
        printf("Wrong Answer\n");
        point4 = 0;
        printf("You have scored %d point\n\n", point4);
    }
    // Question 5
    printf("Q) Which of the following is not a database management software?\n\n");
    printf("1) MySql\n");
    printf("2) Oracle\n");
    printf("3) cobal\n");
    printf("4) Sybase\n");

    printf("Enter Your Answer :\n");

    if (scanf("%d", &ans5) != 1)
    {
        fflush(stdin);
        printf("You have to a Number, Next Question!\n\n");
        point5 = -1;
    }
    else if(ans5==3){
        printf("Correct Answer\n");
        point5 = 5;
        printf("You have scored %d point\n\n", point5);
    }
    else {
        printf("Wrong Answer\n");
        point5 = 0;
        printf("You have scored %d point\n\n", point5);
    }

    total = point1 + point2 + point3 + point4 + point5;

    printf("  End of Game\n\n");
    printf("You scored a total of %d points", total);
    return 0;
}
