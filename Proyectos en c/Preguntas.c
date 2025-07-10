#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char questions[][100] = {
        "1. What year did the C language debut?: ",
        "2. Who is credited with creating C?: ",
        "3. What is the predecessor of C?: "
    };

    char options[][100] = {
        "A. 1969", "B. 1972", "C. 1975", "D. 1999",
        "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
        "A. Objective C", "B. B", "C. C++", "D. C#"
    };

    char answer[3] = {'B', 'A', 'B'};
    int numpreg = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0; 

    printf("QUIZ GAME\n");

    for (int i = 0; i < numpreg; i++) {
        printf("****************\n");
        printf("%s\n", questions[i]);

        for(int j = (i*4); j < (i*4) + 4; j++){
            printf("%s\n", options[j]);
        }
        printf("Ingresa una respuesta: ");
        scanf(" %c", &guess);
    
   

        guess = toupper(guess);
        if(guess == answer[i]){
            printf("Correct\n");
         score++;
        } else {
            printf("Incorrect\n");
        }
    }
    printf("Puntaje final: %d", score);


    return 0;
}
