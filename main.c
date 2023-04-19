#include <stdio.h>

int calculateTotal(int pointsTotal[]){
    int total = 0;

    for (int i = 0; i < 5; ++i){
        total += pointsTotal[i];
    }

    return total;
}

int main() {
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int points[5];
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
            points[0] = -1;
        }
        else if(ans1==2)
        {
            printf("Correct Answer\n");
            points[0] = 5;
            printf("You have scored %d point\n\n", points[0]);
        }
        else
        {
            printf("Wrong Answer\n");
            points[0] = 1;
            printf("You have scored %d point\n\n", points[0]);
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
            points[1] = -1;
        }
        else if(ans2==4){
            printf("Correct Answer\n");
            points[1] = 5;
            printf("You have scored %d point\n\n", points[1]);
        }
        else
        {
            printf("Wrong Answer\n");
            points[1] = 0;
            printf("You have scored %d point\n\n", points[1]);
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
            points[2] = -1;
        }
        else if (ans3==2)
        {
            printf("Correct Answer\n");
            points[2] = 5;
            printf("You have scored %d point\n\n", points[2]);
        }
        else
        {
            printf("Wrong Answer\n");
            points[2] = 0;
            printf("You have scored %d point\n\n", points[2]);
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
        points[3] = -1;
    }
    else if(ans4==1){
        printf("Correct Answer\n");
        points[3] = 5;
        printf("You have scored %d point\n\n", points[3]);
    }
    else
    {
        printf("Wrong Answer\n");
        points[3] = 0;
        printf("You have scored %d point\n\n", points[3]);
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
        points[4] = -1;
    }
    else if(ans5==3){
        printf("Correct Answer\n");
        points[4] = 5;
        printf("You have scored %d point\n\n", points[4]);
    }
    else {
        printf("Wrong Answer\n");
        points[4] = 0;
        printf("You have scored %d point\n\n", points[4]);
    }

    total = calculateTotal(points);

    printf("  End of Game\n\n");
    printf("You scored a total of %d points", total);
    return 0;
}
