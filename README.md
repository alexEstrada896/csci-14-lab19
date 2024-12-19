getJudgeData should only have one reference double parameter (-0.5)

1. (10 pts) Write a complete program in C++ that calculates and displays a contestant's score in a talent competition. 

This particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer's final score is determined by dropping the highest and lowest score received, then averaging the three remaining scores. Assume that each score will be different.

Your program needs to include the following functions:

void getJudgeData() should ask the user for a judge's score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five judges.
void calcScore() should calculate and display the average of the three scores that remain after dropping the highest and lowest scores the performer received. This function should be called just once by main and should be passed the five scores.
The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop. 

double findLowest() should find and return the lowest of the five scores passed to it.
double findHighest() should find and return the highest of the five scores passed to it. 
The output for the contestant's final score should keep one digit after the decimal point. 

Do NOT use any global variables. 

Your program must have function prototypes.

Your program must implement input validation: Do not accept judge scores lower than 0 or higher than 10.

Sample output and input:

What is the score from judge 1? -1
Invalid score. Please enter a score between 0 and 10 inclusive: 12
Invalid score. Please enter a score between 0 and 10 inclusive: 9.1
What is the score from judge 2? 7.8
What is the score from judge 3? 8
What is the score from judge 4? 6.6
What is the score from judge 5? 8.5

The final score for this contestant is 8.1!
