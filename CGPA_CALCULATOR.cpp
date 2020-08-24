// C++ Program to calculate the gpa of a student according to nigeria's five point grading system
#include <iostream>
using namespace std;

int main() {
    int score, i, j, n, u, grade;
	float gpa;
    float totalu=0;
    float totalp=0;
    int point;
    char course[6];
 
    cout<< "How many Subjects did you offer this semester\n";
 	cin>> n;
 	
 	
    for(i=0; i<n; i++) {
    	cout<< "Enter the Course code\n";
 		cin >> course;
 		enterscore:
    	cout<< "Enter the Marks obtained in each Subjects\n";
 		cin >> score;
 		if (score<=100 && score>69){
			grade = 5;
			}
			else if (score<70 && score>59) {
				grade = 4;
			}
			else if (score<60 && score>50) {
			grade = 3;
			}
			else if (score<50 && score>44) {
			grade = 2;
			}
			else if (score<45 && score>39) {
			grade = 1;
			}
			else if (score<40) {
			grade = 0;
			}
			else{
			cout << "Invalid Score" << endl;
			goto enterscore;
		}
 		cout<< "Enter the number of unit\n";
 		cin>> u;
		point = grade * u;
		totalp += point;
 		totalu += u;
 		cout << i+1 <<".  "<< course << "  "<< u <<"unit(s)" << endl;
    	}
 
    gpa = totalp/totalu;
 	
 	cout<<"Your Total Point is : "<<totalp<<endl;
 	cout<<"Your Total unit is : "<<totalu<<endl;
    
    if (gpa <=5 && gpa >4.49){
    cout<<"Your GPA is : "<<gpa<< "- First Class"<<endl;
	}
	  else if (gpa <=4.49 && gpa>3.49){
    cout<<"Your GPA is : "<<gpa<< "- Second Class Upper"<<endl;
	}
	 else if (gpa <=3.49 && gpa>2.39){
    cout<<"Your GPA is : "<<gpa<< "- Second Class lower"<<endl;
	}
	else if (gpa <=2.39 && gpa>1.49){
    cout<<"Your GPA is : "<<gpa<< "- Third Class"<<endl;
	}
	else{
    cout<<"Your GPA is : "<<gpa<< "- Pass"<<endl;
	}
 
 
    return 0;
}
