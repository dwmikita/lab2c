// Author: Daniel Mikita djm6907@psu.edu
// Collaborator: Jiahui Lan jzl6335@psu.edu
// Collaborator: Yeman Xu ybx5148@psu.edu
// Collaborator: Chen-Kuan Liao czl5899@psu.edu
// Section: 1
// Breakout: 8
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) 
{
char *grade = readline("Enter your CMPSC 131 grade: "); 
double score = atof(grade);

if (score >= 93.0)
{
grade = "A";
}

else if (score >= 90.0)
{
grade = "A-";
}

else if (score >= 87.0)
{
grade = "B+";
}

else if (score >= 83.0)
{
grade = "B";
}

else if (score >= 80.0)
{
grade = "B-";
}

else if (score >= 77.0)
{
grade = "C+";
}

else if (score >= 70.0)
{
grade = "C";
}

else if (score >= 60.0)
{
grade = "D";
}

else if (score < 60.0)
{
grade = "F";
}

printf("Your letter grade for CMPSC 131 is %s.\n", grade);

  return 0;
}

