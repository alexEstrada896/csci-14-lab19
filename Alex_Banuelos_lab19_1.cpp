/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iomanip>
#include <iostream>
using namespace std;


void getJudgeData(int,double&  ); //function to store number of contestant and their score
void calScore(double, double,double,double, double);    //function to calculate average score
double findLowest( double, double, double,double, double);    //function to find lowest
double findHighest( double, double, double, double, double );    //function to find highest

int main()
{
	// variables for the judges score
	double judgescore1;
	double judgescore2;
	double judgescore3;
	double judgescore4;
	double judgescore5;



	getJudgeData(1, judgescore1);
	getJudgeData(2, judgescore2);
	getJudgeData(3, judgescore3);
	getJudgeData(4, judgescore4);
	getJudgeData(5, judgescore5);

	calScore(judgescore1, judgescore2, judgescore3, judgescore4, judgescore5);

	return 0;
}
//findLowest: inputs all the scores and finds the lowest score
double findLowest (double Lscore1,double Lscore2, double Lscore3, double Lscore4, double Lscore5 )
{
	double lowest = Lscore1;

	if (Lscore2 < lowest)
		lowest = Lscore2;
	if (Lscore3 < lowest)
		lowest = Lscore3;
	if (Lscore4 < lowest)
		lowest = Lscore4;
	if (Lscore5 < lowest)
		lowest = Lscore5;

	return lowest;
}

//findHighest: inputs all the scores and finds highest
double findHighest(double Hscore1,double Hscore2, double Hscore3, double Hscore4,double Hscore5)
{
	double highest = Hscore1;

	if (Hscore2 > highest)
		highest = Hscore2;
	if (Hscore3 > highest)
		highest = Hscore3;
	if (Hscore4 > highest)
		highest = Hscore4;
	if (Hscore5 > highest)
		highest = Hscore5;

	return highest;

}
//inputs all the scores to find the average
void calScore(double score1, double score2, double score3, double score4,double score5)
{
	//variables to store the highest and lowest scores
	double highestVal =  findHighest(score1, score2, score3, score4, score5);
	double lowestVal =  findLowest(score1, score2, score3, score4, score5);

	double avg;
	//calculates average also subtracting the variables that store the highest and lowest scores
	avg = (score1 + score2 + score3 + score4 + score5 - highestVal - lowestVal) / 3.0 ;
	cout << "The final score for this contestant is: "<< fixed << setprecision (1)<<avg;
}


void getJudgeData( int judge, double& score  )
{
	//asks user for judges score
	cout <<"What is the score from judge "<<judge<<" ?"<<endl;
	cin >> score;
// validates input
	while (score < 0 || score > 10)
	{
		cout << "Invalid score. Please enter a score between 0 and 10 inclusive";
		cin >> score;
	}
}