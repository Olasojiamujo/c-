/* A program to calculate grade
 where 100-70 = A
 		69-60 = B
 		59-50 = C
 		49-45 = D
 		44-40 = E
 		39-0  = F	*/
#include <iostream>
using namespace std;
int main ()
{
// local variable declaration:
int score;

enterscore:
cout<< "Enter your Score in your last Exam to know your Grade"<< endl;
cin>> score;
	if (score==100 && score>69){
		cout << "Your Grade is A, Excellent!" << endl;
	}
	else if (score<70 && score>59) {
			cout << "Your Grade is B, Very Good!" << endl;
	}
	else if (score<60 && score>50) {
			cout << "Your Grade is C, Good!" << endl;
	}
	else if (score<50 && score>44) {
			cout << "Your Grade is D, Pass!" << endl;
	}
	else if (score<45 && score>39) {
			cout << "Your Grade is E, Poor!" << endl;
	}
	else if (score<40) {
			cout << "Your Grade is F, Failed!" << endl;
	}
	else{
		cout << "Invalid Score" << endl;
	goto enterscore;
	}

cout << "Your Score is " << score << endl;
return 0;
}
