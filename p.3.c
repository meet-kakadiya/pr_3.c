#include<stdio.h>
  
  int main() 
	{
    int score;
    char grade;

    printf("Enter your score (out of 100): ");
    scanf("%d",&score);

    grade = (score >= 90) ? 
	                'A' :
            (score >= 80) ? 
			        'B' :
            (score >= 70) ?
			        'C' :
            (score >= 60) ?
			        'D' : 
			(score >= 50) ? 
		            'E' :
		    (score <=40)  ?
		            'f' :

    printf("Your grade is %c",grade);

    switch(grade) {
        case 'A':
            printf(" Excellent work!\n");
            break;
        case 'B':
            printf(" Well done!\n");
            break;
        case 'C':
            printf(" Good job!\n");
            break;
        case 'D':
            printf(" You passed, but you will better next time\n");
            break;
        case 'F':
            printf(" Sorry you are failed.\n");
            break;
        default:
            printf(" Invalid grade .\n");
    }

    if (grade >='A' || grade >='B' || grade >='C' || grade >='D' || grade >='e' || grade >='f')
	{
      printf("Congratulations! You are eligible for the next level.\n");
    } else {
      printf("Please try again next time.\n");
    }

    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
