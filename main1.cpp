#include<iostream>
using namespace std;
int firstyear=0, secondyear=0,thirdyear=0,forthyear=0;
void  electionResult()
{
  int wonvote;
  if(firstyear>secondyear&& firstyear>thirdyear&&firstyear>forthyear)
  {
     cout<<"\n--------------------------------------------------\n";
        cout<<"\n     1ST Year WON the election   \n"<<endl;
        cout<<"    Total vote of 1st Year : "<<firstyear<<endl;
        wonvote=firstyear-secondyear;
        cout<<"\n   1ST Year  won by "<<wonvote<<" votes to secondyear"<<endl;
        wonvote=firstyear-thirdyear;
        cout<<"   1ST Year won by "<<wonvote<<" votes to thirdyear"<<endl;
        wonvote=firstyear-forthyear;
        cout<<"   1st Year  won by "<<wonvote<<" votes to forthyear"<<endl;
        cout<<"\n-------------------------------------------------------------\n";
  }
  else if (secondyear>thirdyear&&secondyear>forthyear)
    {
        cout<<"\n----------------------------------------------------\n";
        cout<<"\n     2ND Year WON the election   \n\n";
        cout<<"\n    Total vote of 2nd year: "<<secondyear<<endl;
        wonvote=secondyear-firstyear;
        cout<<"   2nd Year won by "<<wonvote<<" votes to 1st year\n";
        wonvote=secondyear-thirdyear;
        cout<<"   2nd Year won by "<<wonvote<<" votes to 3rd Year\n";
        wonvote=secondyear-forthyear;
        cout<<"   2nd  Year  won by "<<wonvote<<" votes to 4th Year\n";
        cout<<"\n-----------------------------------------------------\n";
    }
else if (thirdyear>forthyear)
    {
        cout<<"\n--------------------------------------------------\n";
        cout<<"\n       3RD Year  WON  the election   \n\n";
        cout<<"    Total vote of 3rd Year : "<<thirdyear<<endl;
        wonvote=thirdyear-secondyear;
        cout<<"\n   3rd Year won by "<<wonvote<<" votes to 2nd Year\n";
        wonvote=thirdyear-firstyear;
        cout<<"   3rd Yaer  won by "<<wonvote<<" votes to 1st Year\n";
        wonvote=thirdyear-forthyear;
        cout<<"   4th Year  won by "<<wonvote<<" votes to 4th Year\n";
        cout<<"\n-----------------------------------------------------\n";
    }
else if(firstyear==secondyear&&firstyear==thirdyear&&firstyear==forthyear)
    {
        cout<<"\n---------------------------------------------------\n";
        cout<<"\nEvery party got equal votes\n\n";
        cout<<"Party\t\tVotes\n";
        cout<<"1ST YEAR\t\t  "<<firstyear<<endl;
        cout<<"2ND YEAR     \t  "<<secondyear<<endl;
        cout<<"3RD YEAR\t\t  "<<thirdyear<<endl;
        cout<<"4TH YEAR\t\t  "<<forthyear<<endl;
        cout<<"\n-------------------------------------------------------\n";
    }
    else
    {
        cout<<"\n-------------------------------------------------------\n";
        cout<<"\n       4TH Year  WON  the election   \n\n";
        cout<<"    Total vote of 4th Year : "<<forthyear<<endl;
        wonvote=forthyear-secondyear;
        cout<<"\n   4th Year won by "<<wonvote<<" votes to 2nd Year\n";
        wonvote=forthyear-thirdyear;
        cout<<"    4th Year won by "<<wonvote<<" votes to 3rd Year\n";
        wonvote=forthyear-firstyear;
        cout<<"   4th Year  won by "<<wonvote<<" votes to 1st Year\n";
        cout<<"\n---------------------------------------------------------\n";
    }

}
void calculateVote(int vote)
{
    switch(vote)
    {
        case 1:
        firstyear+=1;
        break;
        case2:
        secondyear+=1;
        break;
        case 3:
        thirdyear+=1;
        case 4:
        forthyear+=1;
        break;
    }
}

int main()
{
    int choose;


cout<<"\n   WELCOME TO SIMPLE VOTING SYSTEM PROJECT  \n";
cout<<"\n              UCET HAZARIBAGH               \n";
cout<<"\n--------------------------------------------------------\n";
cout<<"\n |        1st Year   \t  |     2nd year             |\n";
cout<<"\n |        3rd Year   \t  |     4th year             |\n";
cout<<"\n---------------------------------------------------------\n";

cout<<"\n [press 1 to vote for 1st year]    \t      [press 2 to vote for 2nd year]\n ";
cout<<"\n [press 3 to vote for 3rd year]    \t      [press 4 to vote for 4th year]\n ";
cout<<"\n                     [ press 5 to see the result :)]                           \n";

 do
    {    
        again:
        cout<<"PLEASE CHOOSE ONE OF THE ABOVE OPTION :- ";
        cin.sync();
        cin>>choose;
        if (choose==5)
        {
            electionResult();
        }else if(choose>=1&&choose<5)
        {
            calculateVote(choose);            
        }else
        {
            cout<<"\nInvalid key pressed try again"<<endl;
            goto again;
        }
    } while (choose != 5);
    cout<<endl;
    return 0;
}