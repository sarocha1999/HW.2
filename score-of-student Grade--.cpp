#include <stdio.h>

int main()
{
	int scoreofstudent ;
	printf("Enter your Score : ");
	scanf("%d",&scoreofstudent);
	
	if (scoreofstudent <=49 && scoreofstudent >=0){
		printf("\nGrade = F");
	}
	else if (scoreofstudent >=50 && scoreofstudent <=54){
		printf("\nGrade = D");
	}
	else if (scoreofstudent >=55 && scoreofstudent <=59){
		printf("\nGrade = D+");
	}
	else if (scoreofstudent >=60 && scoreofstudent <=64){
		printf("\nGrade = C");
	}
	else if (scoreofstudent >=65 && scoreofstudent <=69){
		printf("\nGrade = C+");
	}
	else if (scoreofstudent >=70 && scoreofstudent <=74){
		printf("\nGrade = B");
	}
	else if (scoreofstudent >=75 && scoreofstudent <=79){
		printf("\nGrade = B+");
	}
	else if (scoreofstudent >=80 && scoreofstudent<=100){
		printf("\nGrade = A");
	}
	else if (scoreofstudent >=101 || scoreofstudent <0){
		printf("\nScore Error !! ");
	}
	return 0;
	
}
