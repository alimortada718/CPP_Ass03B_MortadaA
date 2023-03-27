#include <iostream>

#include <string>

using namespace std;

// declaring the variables

const int Num_Courses = 6;
const int Num_Students = 5;


int main() 
{
		int scores[Num_Students][Num_Courses]; // 2 dimensional array to store both scores student and course	
		string CourseNames[Num_Courses] = {"English", "Mathematics", "Accounts", "Economics", "Geography", "priciples of Business"};//array of the courses names
		
		char choice ='y'; //stores the user choice to continue
		
		do{ //start of the do while loop
		
		// input the scores for each student and course
		for (int i =0; i<Num_Students; i++)
		{
			cout <<"Enter the scores for student: \n" <<i+1<<": ";
			for (int n=0;n<Num_Courses;n++)
			{
			cout <<CourseNames[n] <<": ";
			cin >> scores[i][n];	
				
			}
		}
	
	// output the matrix
	
	cout << "\n\nScore Matrix:\n";
	for (int i=0; i<Num_Students; i++)
	{
		double total =0;
		for (int n =0; n <Num_Courses; n++)
		
		{
			
			total += scores[i][n];
			
		}
		
		double avg = total /Num_Courses;
		cout << "Student " << i+1 <<": " <<avg <<endl;
		
	}
	
	cout<<endl;
	
	// output analysis
	
	cout << "\n\Analysis:\n\n";
	
	
	//average score for each of the courses
	cout<<"Average score for each course:\n";
	for (int n=0;n<Num_Courses;n++)
	{
		double total =0;
		for (int i=0; i<Num_Courses; i++)
		{
			total+= scores[i][n];
			
		}
		
		double average = total / Num_Courses;
		cout <<CourseNames[n] << ": " <<average<< endl;
		
		
		}	
		cout << endl;
		
		//highest score for each of the students
		cout << "Highest score for each student:\n";
		for (int i=0; i<Num_Students; i++)
		{
			int HighestScore = scores[i][0];
			for(int n=1; n<Num_Courses; n++)
			{
				if(scores[i][n] > HighestScore)
				
				{
					
					HighestScore = scores[i][n];
					
				}
			}
			
			cout <<"Student " <<i+1<<": "<<HighestScore << endl;
			
		}
		
		cout << endl;
		
		//lowest score for each of the students
		
		cout<< "Lowest score for each student:\n";
		for(int i=0; i<Num_Students; i++)
		{
			int LowestScore =scores[i][0];
			for (int n =1; n<Num_Courses; n++)
			{
				if (scores[i][n] <LowestScore)
				{
					LowestScore = scores[i][n];
				}
			}
			
			cout << "Student " <<i+1<< ": " <<LowestScore <<endl;
			
			}	
			cout << endl;
	
	// ask the user if he or she wants to continue
	
	cout << "Do you want to continue? (y/n): ";
	cin >> choice;
	
} while(choice == 'y' || choice == 'Y');
	
	
	
	
	
	return 0;
}
