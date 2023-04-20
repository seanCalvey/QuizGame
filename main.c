#include <stdio.h>

int calculateTotal(const int *pointsTotal){
    int total = 0;

    for (int i = 0; i < 5; ++i){
        total += pointsTotal[i];
    }

    return total;
}

struct Question{
    char * question;
    char * answer;
    char * options[4];
};

void startupMenu(){
    int i;
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
}

int askQuestion(struct Question question){
    int input = 0;
    printf("%s", question.question);
    for (int i = 0; i < 4; i++){
        printf("%d) %s", i + 1, question.options[i]);
    }
    printf("Enter Your Answer :\n");
    if (scanf("%d", &input) != 1){
        fflush(stdin);
        printf("You have to a Number, Next Question!\n\n");
        return -1;
    } else if (question.answer == question.options[input - 1]){
        printf("Correct Answer\n");
        printf("You have scored 5 point\n\n");
        return 5;
    } else {
        printf("Wrong Answer\n");
        printf("You have scored 1 point\n\n");
        return 1;
    }
}

int main() {
    int points[5];
    int total;
    struct Question question;

    startupMenu();

    // Question 1
    question.question = "Q) Which one is the first search engine in the internet?\n\n";
    question.answer = "Archie\n";
    question.options[0] = "Google\n";
    question.options[1] = "Archie\n";
    question.options[2] = "Wais\n";
    question.options[3] = "Altavista\n";

    points[0] = askQuestion(question);
    // Question 2
    question.question = "Q) Which one is the first web browser invented in 1990?\n\n";
    question.answer = "Nexus\n";
    question.options[0] = "Internet Explorer\n";
    question.options[1] = "Mosaic\n";
    question.options[2] = "Mozilla\n";
    question.options[3] = "Nexus\n";

    points[1] = askQuestion(question);
    // Question 3
    question.question = "Q) First computer virus is known as?\n\n";
    question.answer = "Creeper Virus\n";
    question.options[0] = "Rabbit\n";
    question.options[1] = "Creeper Virus\n";
    question.options[2] = "Elk Cloner\n";
    question.options[3] = "SCA Virus\n";

   points[2] = askQuestion(question);
    // Question 4
    question.question = "Q) Firewall in a computer is used for?\n\n";
    question.answer = "Security\n";
    question.options[0] = "Security\n";
    question.options[1] = "Data Transmission\n";
    question.options[2] = "Monitoring\n";
    question.options[3] = "Authentication\n";

    points[3] = askQuestion(question);
    // Question 5
    question.question = "Q) Which of the following is not a database management software?\n\n";
    question.answer = "cobal\n";
    question.options[0] = "MySql\n";
    question.options[1] = "Oracle\n";
    question.options[2] = "cobal\n";
    question.options[3] = "Sybase\n";

   points[4] = askQuestion(question);

    total = calculateTotal(points);

    printf("  End of Game\n\n");
    printf("You scored a total of %d points", total);
    return 0;
}
