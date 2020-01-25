#include<iostream.h>
#include<conio.h>
#include<process.h>
char sq[10];
int win();
void board();
void game();
void main()
{
 char select[10],ins;
 _1st:
 clrscr();
 cout<<"\t1st page";
 cout<<"\n\t\t\twelcome to abhijit's project";
 cout<<"\n\n\tpress A to open menu \n\n\tor press B to exit\n\tyour choice : ";
 cin>>select[1];
 if(select[1]=='A'||select[1]=='a')
 {
  _2nd:
  clrscr();
  cout<<"\t2nd page";
  cout<<"\n\n\t\t\t.......MENU.......";
  cout<<"\n\n\t\tA>games(...press A to enter..) : ";
  cout<<"\n\n\t\tB>back to 1st page(..press B to go back..) : ";
  cout<<"\n\n\t\tC>exit(..press C to exit..) : ";
  cin>>select[2];
   if(select[2]=='a'||select[2]=='A')
     {
	_3rd:
	clrscr();
	cout<<"\t3rd page";
	cout<<"\n\n\t\t\t......GAMES......";
	cout<<"\n\n\tA>TIC TAC TOE(...press A to enter game menu...) : ";
	cout<<"\n\n\tB>back to 2nd page(..press B to go back ...) : ";
	cout<<"\n\n\tC>back to 1st page(..press C to go to 1st page..) : ";
	cout<<"\n\n\tD>EXIT(...press D to exit...) : ";
	cin>>select[3];
	  if(select[3]=='a'||select[3]=='A')
	  {
	   _4th:
	   clrscr();
	   cout<<"\t4th page";
	   cout<<"\n\n\t\t\t..TIC TAC TOE..";
	   cout<<"\n\nA>START GAME(..PRESS A TO ENTER GAME ..) : ";
	   cout<<"\n\nB>GAME INSTRUCTIONS(PRESS B TO SEE GAME INSTRUCTIONS) :";
	   cout<<"\n\nC>back to 3rd page(...press C to go back...) : ";
	   cout<<"\n\nD>back to 2nd page(..press D to go 2nd page ...) : ";
	   cout<<"\n\nE>back to 1st page(..press E to go to 1st page..) : ";
	   cout<<"\n\nF>EXIT(...press F to exit...) : ";
	   cin>>select[4];
	   if(select[4]=='a'||select[4]=='A')
	    {
	     game();
	    }
	    else if(select[4]=='b'||select[4]=='B')
	     {
	      inst:
	      clrscr();
	      cout<<"instructions:\n";
	      cout<<"This is a multiplayer game both the players are given";
	      cout<<"\ntwo separate symbols(X) (O) .1st nd 2nd player will";
	      cout<<"\nget chance sequentially . the player able to dominate";
	      cout<<"\n1st his or her 3 symbols vetically horizontally or ";
	      cout<<"\ndiagonally will won the match";
	      cout<<"\n\n\t\t..best of luck..";
	      cout<<"\npress A to go back ";
	      cin>>ins;
	      if(ins=='a'||ins=='A')
	       goto _4th;
	      else
	       goto inst;
	      }
	      else if(select[4]=='c'||select[4]=='C')
	       goto _3rd;
	      else if(select[4]=='d'||select[4]=='D')
	      goto _2nd;
	      else if(select[4]=='e'||select[4]=='E')
	      goto _1st;
	      else if(select[4]=='f'||select[4]=='F')
	       exit (0);
	      else
	       goto _4th;
	  }
	   else if(select[3]=='b'||select[3]=='B')
	    goto _2nd;
	   else if(select[3]=='c'||select[3]=='C')
	    goto _1st;
	   else if(select[3]=='d'||select[3]=='D')
	    exit (0);
	   else
	    goto _3rd;
     }
      else if(select[2]=='b'||select[2]=='B')
	 goto _1st;
	   else if(select[2]=='c'||select[2]=='C')
	     exit (0);
	     else
	     goto _2nd;

  }
 else if(select[1]=='B'||select[1]=='b')
 exit(0);
 else
 goto _1st;
 getch();
}
void game()
{
 tic:
 sq[1]='1';
 sq[2]='2';
 sq[3]='3';
 sq[4]='4';
 sq[5]='5';
 sq[6]='6';
 sq[7]='7';
 sq[8]='8';
 sq[9]='9';
 char mark,again;
 int plyr=1,choice,i;
 clrscr();
 do
 {
  board();
  plyr=(plyr%2)?1:2;
  cout<<"player "<<plyr<<" enter a no: ";
  cin>>choice;
  mark=(plyr==1)?'X':'O';
  if(choice==1 && sq[1]=='1')
     sq[1]=mark;
  else if(choice==2 && sq[2]=='2')
     sq[2]=mark;
  else if(choice==3 && sq[3]=='3')
     sq[3]=mark;
  else if(choice==4 && sq[4]=='4')
     sq[4]=mark;
  else if(choice==5 && sq[5]=='5')
     sq[5]=mark;
  else if(choice==6 && sq[6]=='6')
     sq[6]=mark;
  else if(choice==7 && sq[7]=='7')
     sq[7]=mark;
  else if(choice==8 && sq[8]=='8')
     sq[8]=mark;
  else if(choice==9 && sq[9]=='9')
     sq[9]=mark;
  else
    {
     cout<<"inavlid move_____ try again ";
     plyr--;
     getch();
    }
     i=win();
      plyr++;
 }while(i==-1);
      board();
      if(i==1)
	 cout<<"player" <<--plyr <<"  win ";
      else
	 cout<<"game draw";
	 cout<<"\ndo you want 2 continue (..press k..) : ";
	 cin>>again;
	 if(again=='k'||again=='K')
	  goto tic;
  getch();
}
 int win()
 {
  if(sq[1]==sq[2] && sq[2]==sq[3])
    return 1;
  else if(sq[4]==sq[5] && sq[5]==sq[6])
    return 1;
  else if(sq[7]==sq[8] && sq[8]==sq[9])
    return 1;
  else if(sq[1]==sq[4] && sq[4]==sq[7])
    return 1;
  else if(sq[2]==sq[5] && sq[5]==sq[8])
    return 1;
  else if(sq[3]==sq[6] && sq[6]==sq[9])
    return 1;
  else if(sq[1]==sq[5] && sq[5]==sq[9])
    return 1;
  else if(sq[3]==sq[5] && sq[5]==sq[7])
    return 1;
  else if(sq[1]!='1' && sq[2]!='2' && sq[3]!='3' && sq[4]!='4' && sq[5]!='5' && sq[6]!='6' && sq[7]!='7' && sq[8]!='8' && sq[9]!='9')
    return 0;
  else
    return -1;
 }
void board()
   {
	clrscr();
	cout<<"\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)\n\n\n";
	cout << "     |     |     \n";
	cout<< "  " <<sq[1]<<"  |  "<<sq[2]<<"  |  "<<sq[3]<<endl;
	cout<< "_____|_____|_____\n";
	cout<< "     |     |     \n";
	cout<< "  " <<sq[4]<<"  |  "<<sq[5]<<"  |  "<<sq[6]<<endl;
	cout<< "_____|_____|_____\n";
	cout<< "     |     |     \n";
	cout<< "  " <<sq[7]<< "  |  " <<sq[8]<<"  |  "<<sq[9]<<endl;
	cout<<"     |     |     "<<"\n\n";
   }