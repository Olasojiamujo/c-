//A betting system for a particular betting week in december 2016

#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void row10();
void row20();
void row30();
void row40();
float total_odd;
void row50();
void row60();
void row70();
void row80();
void row90();
void row100();
string date;
float sport,odd2=0,odd3=0,odd4=0,odd5=0,money=0, predict=0;
float odd6=0,odd7=0,odd8=0,odd9=0,odd10=0, n=0;
float code,bet_num,i, odd,amount,bonus;
int main(){
	
	float total_odd;
	string password,username,date;
    cout << "WELCOME TO CITA BET\n";
	cout<<"\t\t\tUSER LOGIN"<<endl<<"\t\t\t=========="<<endl<<"\t\t\tENTER USER NAME: "; cin>>username;
	enter:
	cout<<"\t\t\tENTER PASSWORD: ";cin>>password;
if(password.length()!=4){
cout<<"Invalid Password it must be 4 character"<<endl;
	goto enter;
	}else{
		goto continue_bet; }
		continue_bet:
		system("cls");
		cout<<"Please Wait......"<<endl;
Sleep(1000);
	cout<<"\t EPL FIXTURES FOR THE WEEK\n";
	cout<< "CODE   DATE TIME            MATCH                       ODD         \n";
	cout << "                                                     1   x   2   goal goal\n";
	cout<< " 1  1/12/16 12:45     chelsea     vs  hullcity       1.5 3.5 4.5    1.3    \n";
	cout<< " 2  1/12/16 15:00     man utd     vs  wattford       1.2 4.5 4.8    2.3    \n";
	cout<< " 3  1/12/16 15:00     man city    vs  stoke          1.3 4.0 3.7    2.6    \n";
	cout<< " 4  1/12/16 15:00     liverpool   vs  burnley        1.1 3.5 5.0    3.0    \n";
	cout<< " 5  1/12/16 15:00     arsenal     vs  west brom      1.6 2.5 4.5    1.7    \n";
	cout<< " 6  1/12/16 18:00     southampton vs  sunderland     1.8 5.5 2.5    1.5    \n";
	cout<< " 7  2/12/16 13:00     leicester   vs  middlesbrough  1.7 3.8 2.0    3.7    \n";
	cout<< " 8  2/12/16 15:00     tottenham   vs  swansea        1.7 3.5 2.7    2.4    \n";
	cout<< " 9  2/12/16 19:45     west ham    vs  bournemoth     1.9 5.5 3.5    2.8    \n";
    cout<< " 10 3/12/16 20:00     everton     vs  crystal palace 1.4 3.0 2.8    1.9    \n";
    cout<<"How Many Bet Do you Want to Place:";cin>>bet_num;
		for(i=0;i<bet_num ;i++){
            cout<<"Place Your Bet By Bet Code: ";cin>>code;
				if(code==1){
					row10();
				}else if(code==2){
					row20();
				}else if(code==3){
					row30();
				}else if(code==4){
					row40();
				}
				else if(code==5){
					row50();
				}
				else if(code==6){
					row60();
				}
				else if(code==7){
					row70();
				}else if(code==8){
					row80();
				}else if(code==9){
					row90();
				}else if(code==10){
					row100();
				}else{
					cout<<"Error Input"<<endl;
				}
				}
cout<<"Enter Amount: ";cin>>amount;
					if(bet_num==1){
					total_odd = n;
					bonus=500;
					if (code==10){
					total_odd = odd10;
					bonus= 500;}if (code==9){
					total_odd = odd9;
					bonus= 500;}if (code==8){
					total_odd = odd8;
					bonus= 500;}if (code==7){
					total_odd = odd7;
					bonus= 500;}if (code==6){
					total_odd = odd6;
					bonus= 500;}if (code==5){
					total_odd = odd5;
					bonus= 500;}if (code==4){
					total_odd = odd4;
					bonus= 500;}if (code==3){
					total_odd = odd3;
					bonus= 500;}if (code==2){
					total_odd = odd2;
				}
				}else if(bet_num==2){
					total_odd = n + odd2;
					bonus=1000;
						if (code==10 || code==9){
					total_odd = odd10+ odd9;
					bonus= 500;}if (code==9&& code==8){
					total_odd = odd9 + odd8;
					bonus= 500;}if (code==8&& code==7){
					total_odd = odd8 + odd7;
					bonus= 500;}if (code==7&& code==6){
					total_odd = odd7+odd6;
					bonus= 500;}if (code==6&& code==5){
					total_odd = odd6+ odd5;
					bonus= 500;}if (code==5&& code==4){
					total_odd = odd5+ odd4;
					bonus= 500;}if (code==4&& code==3){
					total_odd = odd4+ odd3;
					bonus= 500;}if (code==3&& code==2){
					total_odd = odd3 + odd2;
					bonus= 500;}if (code==2&& code==4){
					total_odd = odd2 + odd4;
					}
				}	else if(bet_num==3){
					total_odd=n+odd2+odd3;
					bonus=1500; 
					}else if(bet_num==4){
					total_odd=n+odd2+odd3+odd4;	
					bonus=2000;
					}else if(bet_num==5){
					total_odd=n+odd2+odd3+odd4+odd5;	
					bonus=2500;
					}else if(bet_num==6){
					total_odd=n+odd2+odd3+odd4+odd5+odd6;	
					bonus=3000;
					}else if(bet_num==7){
					total_odd=n+odd2+odd3+odd4+odd5+odd6+odd7;	
					bonus=3500;
					}else if(bet_num==8){
					total_odd=n+odd2+odd3+odd4+odd5+odd6+odd7+odd8;	
					bonus=4000;
					}else if(bet_num==9){
					total_odd=n+odd2+odd3+odd4+odd5+odd6+odd7+odd8+odd9;	
					bonus=4500;
					}else if(bet_num==10){
					total_odd=n+odd2+odd3+odd4+odd5+odd6+odd7+odd8+odd9+odd10;	
					bonus=5000;
					
					}
					
					system("cls");
					cout<<"Please Wait...."<<endl;
					Sleep(1000);
						cout <<n<<odd2<<odd3<<odd4<<odd5<<odd6<<odd7<<odd8<<odd9<<odd10;
cout<<"\nTotal odd: "<<total_odd<<endl;
cout<<"Bonus: "<<bonus<<endl;
cout<<"Possible Outcome: "<<amount*total_odd<<endl;
cout<<"Total Outcome: "<<amount*total_odd+bonus<<endl;
 }
void row10(){
	int code=1;
	cout<< " 1  1/12/16 12:45     chelsea     vs  hullcity       1.5 3.5 4.5    1.3    \n";
	cout<<"CHOOSE A prediction\n\nA CHELSEA WIN  \t\tB CHELSEA DRAW\n\nC CHELSEA WIN/DRAW\t\tD CHELSEA GOAL FIRST\n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED CHELSEA WIN\n";
		n=1.5;
		break;
			} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					n=3.5;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED HULLCITY WIN\n";
			n=	4.5;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
						n=1.3;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;  
  }
}
void row20(){
	int code=2;
		cout<< " 2  1/12/16 15:00     man utd     vs  wattford       1.2 4.5 4.8    2.3    \n";
	cout<<"CHOOSE A prediction\n\nA man utd WIN  \t\tB  DRAW\n\nC wattford WIN\t\tD both GOAL\n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED man utd WIN\n";
		odd2 = 1.2;
		break;
				} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					odd2 = 4.5;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED wattford WIN\n";
				odd2 = 4.8;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
						odd2=2.3;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
}
void row30(){
		cout<< " 3  1/12/16 15:00     man city    vs  stoke          1.3 4.0 3.7    2.6    \n";
cout<<"CHOOSE A prediction\n\nA man city WIN  \t\tB DRAW\n\nC stoke WIN\t\tD both GOAL\n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED man city WIN\n";
		odd3=1.3;
		break;
				} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
			odd3=4.0;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED stoke WIN\n";
					odd3=3.7;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
							odd3=2.6;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
	
int code=3;
}
void row40(){
		cout<< " 4  1/12/16 15:00     liverpool   vs  burnley        1.1 3.5 5.0    3.0    \n";

	cout<<"CHOOSE A prediction\n\nA liverpool WIN  \t\tB  DRAW\n\nC burnley WIN\t\tD both GOAL \n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED liverpool WIN\n";
		odd4= 1.1;
		break;
			
			
		} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					odd4= 3.5;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED burnley WIN\n";
				odd4= 5.0;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
						odd4 = 3.0;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
int code=4;
}
void row50(){
		cout<< " 5  1/12/16 15:00     arsenal     vs  west brom      1.6 2.5 4.5    1.7    \n";
	
	cout<<"CHOOSE A prediction\n\nA arsenal WIN  \t\tB  DRAW\n\nC westbrom WIN\t\tD both GOAL T\n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED arsenal WIN\n";
		odd5= 1.6;
		break;
			
			
		} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					odd5= 2.5;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED westbrom WIN\n";
				odd5= 4.5;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
						odd5= 1.7;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
int code = 5;	
	
}
void row60(){
		cout<< " 6  1/12/16 18:00     southampton vs  sunderland     1.8 5.5 2.5    1.5    \n";

	cout<<"CHOOSE A prediction\n\nA southampton WIN  \t\tB  DRAW\n\nC sunderland  WIN\t\tD both GOAL \n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED southampton WIN\n";
		odd6= 1.8;
		break;
				} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					odd6= 5.5;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED sunderland WIN\n";
				odd6= 2.5;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
						odd6= 1.5;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
int code=6;

}
void row70(){
		cout<< " 7  2/12/16 13:00     leicester   vs  middlesbrough  1.7 3.8 2.0    3.7    \n";
cout<<"CHOOSE A prediction\n\nA leicester WIN  \t\tB DRAW\n\nC middlesbrough WIN\t\tD both GOAL \n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED leicester WIN\n";
		odd7= 1.7;
		break;} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					odd7= 3.8;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED middlesbrough WIN\n";
				odd7= 2.0;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
						odd7= 3.7;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
int code=7;

	
}
void row80(){
		cout<< " 8  2/12/16 15:00     tottenham   vs  swansea        1.7 3.5 2.7    2.4    \n";
cout<<"CHOOSE A prediction\n\nA tottenham WIN  \t\tB DRAW\n\nC swansea WIN\t\tD both GOAL \n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED tottenham WIN\n";
		odd8 = 1.7;
		break;	} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					odd8=3.5;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED swansea WIN\n";
				odd8= 2.7;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
						odd8 =2.4;
						
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
	int code=8;
}
void row90(){
		cout<< " 9  2/12/16 19:45     west ham    vs  bournemoth     1.9 5.5 3.5    2.8    \n";
  
	cout<<"CHOOSE A prediction\n\nA west ham WIN  \t\tB  DRAW\n\nC bournemoth\t\tD both GOAL\n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED west ham WIN\n";
		odd9 = 1.9;
		break;
				} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
					odd9= 5.5;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED bournemoth WIN\n";
		odd9= 3.5;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
	odd9= 2.8;
	break;
						}
					default:
					cout<<"SELECT A GOOD OPTION\n"<<"\n";
 break;   }
	int code=9;
}void row100(){
	  cout<< " 10 3/12/16 20:00     everton     vs  crystal palace 1.4 3.0 2.8    1.9    \n";
cout<<"CHOOSE A prediction\n\nA everton WIN  \t\tB DRAW\n\nC cystal palace WIN\t\tD both GOAL \n\n"<< endl;
	char predict;
	int money;
		cin >> predict;
				switch(predict){
				case'A':case'a':	{
		cout<<	"YOU HAVE SELECTED everton WIN\n";
		odd10=1.4;
		break;
				} 
			case'B':case'b':	{
					cout<<	"YOU HAVE SELECTED BOTH TEAM DRAW\n\n";
		odd10=3.0;
		break;
			}
			case'C':case'c':	{	
				cout<<	"YOU HAVE SELECTED crystal palace WIN\n";
		odd10 = 2.8;
		break;
	}
				case'D':case'd':	{
						cout<<	"YOU HAVE SELECTED BOTH TEAM TO SCORE\n";
	odd10= 1.9;
	break;
						}
					default:
					cout<<"SELET A GOOD OPTION\n"<<"\n";
 break;   }
	int code=10;
}
