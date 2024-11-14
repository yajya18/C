#include<stdio.h>
#include<ctype.h>
void main(){
    char guess;
    char score;
    //writing an array of questions
    char questions[][200]={"1. Who won the 2018 FIFA World Cup?", 
                            "2. Which club did Cristiano Ronaldo join in 2009 for a world record transfer fee at the time?",
                            "3. Which country hosted the 2014 FIFA World Cup?",
                            "4. Who is the all-time top scorer in the Premier League?",
                            "5. Which team won the 2020 UEFA Champions League?",
                            "6. Who is known as the Egyptian King in football?",
                            "7. Which footballer was nicknamed The Atomic Flea?",
                            "8. What year did the Premier League officially begin?",
                            "9. Which team has won the most UEFA Champions League titles?",
                            "10. Which country won the first-ever FIFA World Cup in 1930?",
                            "11. Who holds the record for the most goals in a calendar year (91 goals)?",
                            "12. Which country won the UEFA European Championship in 2016?",
                            "13. What is the maximum number of substitutions allowed in a football match as per the standard rules (excluding temporary rule changes during the COVID-19 pandemic)?",
                            "14. Which country has the most Copa America titles?",
                            "15. In which year did Zinedine Zidane retire from international football?"};
    //writing an array of options
    char options[][100]={"A) Argentina B) France C) Brazil D) Germany",
                        "A) Manchester United B) Juventus C) Real Madrid D) Barcelona",
                        "A) Brazil B) South Africa C) Germany D) Russia",
                        "A) Thierry Henry B) Sergio Aguero C) Wayne Rooney D) Alan Shearer",
                        "A) Bayern Munich B) Liverpool C) Paris Saint-Germain D) Manchester City",
                        "A) Ahmed Hegazi B) Amr Zaki C) Mahmoud Hassan Trezeguet D) Mohamed Salah",
                        "A) Neymar B) Lionel Messi C) Kylian Mbappe D) Ronaldinho",
                        "A) 1992 B) 1994 C) 1990 D) 1988",
                        "A) AC Milan B) Barcelona C) Real Madrid D) Bayern Munich",
                        "A) Uruguay B) Brazil C) Italy D) Argentina",
                        "A) Cristiano Ronaldo B) Lionel Messi C) Pele D) Gerd Muller",
                        "A) France B) Portugal C) Spain D) Italy",
                        "A) 3 B) 5 C) 4 D) 6",
                        "A) Argentina B) Brazil C) Uruguay D) Chile",
                        "A) 2006 B) 2008 C) 2010 D) 2004"};
    int NumberOfQuestions = sizeof(questions)/sizeof(questions[0]);
    //Selecting answers
    char answers[15] = {'B', 'C', 'A', 'D', 'A', 'D', 'B', 'A', 'C', 'A', 'B', 'B', 'A', 'C', 'B'};
    //printing the trivia
    for(int i=0; i<sizeof(questions)/sizeof(questions[0]); i++){
        printf("%s\n", questions[i]);

        for(int j=i; j<i+1; j++){
            printf("%s\n", options[j]);
        }
        printf("Answer: ");
        scanf("%c", &guess);
        getchar()!='\n';/*because scanf takes \n also as an input because of which
                         the next question's answer is always considered to be \n
                          be the program*/
        //checking the answer
        guess = toupper(guess);
        if(guess == answers[i])
        {
            printf("CORRECT!!\n");
            score++;
        }
        else{
            printf("INCORRECT!!\n");
        }
        
    }
    //printing the final score.
    printf("Final score is: %d/%d", score, NumberOfQuestions);
}