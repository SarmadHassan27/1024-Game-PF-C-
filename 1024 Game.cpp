//SARMAD HASSAN 54724
//SHUJAT AHMAD KHAN 44857
//BS SE-1A
//SUBMITTED TO MISS MADEEHA KANWAL



#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <stdlib.h>
#include <Windows.h>
#include <fstream>

using namespace std;

void NewGame ();
void Display ();
void Start ();
void Move ();
void Check ();
void Right ();
void Left ();
void Up ();
void Down ();
void Spaces ();
void Read();
void Write();

int board[4][4];
int i,j,scr,pscr;
char input;
char *ptr=&input;


int main()
{
	  
    
    NewGame ();

    while(true) 
    {
    	system("color 2");
        cout << "         1024 GAME !!!      \n\n" ;
        cout << endl;
        cout << " *** Reach to the 1024 Tile to win the game *** \n " << endl ;

       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
        cout << "                                                                Score : " << scr << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        cout<<"                                                             Last Score : " << pscr <<endl;
       
        Display ();
        turn:
        cout<<"DIRECTION: ";
        cin >> input;
        

        if(*ptr == 'q' )
        {

	        Write();
            exit(0);
        }
        
         if(*ptr == 'Q' )
        {

	        Write();
            exit(0);
        }

        else if(*ptr == 'n' )
        {
            NewGame();
        }
        
        else if(*ptr == 'N' )
        {
            NewGame();
        }

        else if(*ptr == 'd'  )
        {
            Right ();
        }
        
         else if(*ptr == 'D'  )
        {
            Right ();
        }

        else if(*ptr == 'a' )
        {
            Left ();
        }
        
        else if(*ptr == 'A' )
        {
            Left ();
        }
        
        else if(*ptr == 'w' )
        {
            Up ();
        }


        else if(*ptr == 'W' )
        {
            Up ();
        }

        else if(*ptr == 's')
        {
            Down ();
        }
        
        else if(*ptr == 'S')
        {
            Down ();
        }
        
        else{
        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
        	cout<<"Invalid Charachter \a "<<endl;
        	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
        
     	goto turn;
        	break;
		}

          


        Check ();

        system("CLS");

    }
    	

    system("pause");

    return 0;


}




// New Game
void NewGame()
{

    Read();
    
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            board[i][j]=0;
        }
    }

    scr = 0;
    

    Start ();
}


// Display of array
void Display ()
{
    cout << "---------------------" << endl;

    for(i=0; i<4; i++)//add cls here
    {
        for(j=0; j<4; j++)
        {
            cout << "|" ;
            if(board[i][j]==0)
              cout << "    " ;
            else
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
                cout << board[i][j];
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
                Spaces ();
            }

        }
        cout << "|" ;
        cout << endl;
        cout << "---------------------" << endl;
    }
    
    cout << " Instructions : " << endl;
    cout << "  Right: D   Left: A   Up: W   Down: S                                NewGame: N   ||  Quit: Q " << endl;
    cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),3);
    cout<<"***You Can Play Multiple Moves in a Single Step*** "<<endl<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);

}


// First Initialization
void Start ()
{
    board[1][2]=1;
    board[2][1]=1;
}


// New Value adding function
void Move ()
{
       int x, y ;
    int r;

    srand(time(0)) ;
    x = rand()%10 ;

    if(x % 2 == 0)
    {
        y = 2;
    }
    else
    {
        y = 2;
    }

    if(input == 'd')         // Right sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[r][0] == 0)
            {
                board[r][0]=y;
                break;
            }
        }
    }
      else if(input == 'D')         // Right sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[r][0] == 0)
            {
                board[r][0]=y;
                break;
            }
        }
    }

    else if(input == 'a')         // Left sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[r][3] == 0)
            {
                board[r][3]=y;
                break;
            }
        }
    }
    
        else if(input == 'A')         // Left sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[r][3] == 0)
            {
                board[r][3]=y;
                break;
            }
        }
    }
    

    else if(input == 'w')         // Up sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[3][r] == 0)
            {
                board[3][r]=y;
                break;
            }
        }
    }
     else if(input == 'W')         // Up sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[3][r] == 0)
            {
                board[3][r]=y;
                break;
            }
        }
    }

    else if(input == 's')         // Down sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[0][r] == 0)
            {
                board[0][r]=y;
                break;
            }
        }
    }
        else if(input == 'S')         // Down sorted array
    {
        for(r=0; r<4; r++)
        {
            if(board[0][r] == 0)
            {
                board[0][r]=y;
                break;
            }
        }
    }


}
// Checking Function
void Check()
{
    int counter = 0 ;
    int counter1 = 0 ;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if( board[i][j] == 0 )
            {
                counter++;
            }

            if( board[i][j] == 1024)
            {
                counter1++;
            }
        }
    }

    if(counter == 0)
    {
        cout << "                    YOU LOSE !!!     ";
        
                                      
	    Write();
        exit(0);
    }

    if(counter1 > 0)
    {
        cout << "                    YOU WIN !!!      ";
        

	    Write();
        exit(0);

    }

}



// Right sort
void Right ()
{
    for(int itr=0; itr<3; itr++)
    {
        for(j=0; j<3; j++)
        {
            for(i=0; i<4; i++)
            {
                if(board[i][j] != 0)
                {
                    if(board[i][j] == board[i][j+1])
                    {
                       board[i][j+1] = board[i][j+1] + board[i][j] ;
                       board[i][j] = 0;

                       scr = scr + 3;
                    }
                }

                if(board[i][j] != 0 && board[i][j+1] == 0)
                {
                    swap(board[i][j] , board[i][j+1]);
                }
            }
        }
    }

    Move ();

}


// Left sort
void Left ()
{
    for(int itr=0; itr<3; itr++)
    {
        for(j=3; j>0; j--)
        {
            for(i=0; i<4; i++)
            {
                if(board[i][j] != 0)
                {
                    if(board[i][j] == board[i][j-1])
                    {
                       board[i][j-1] = board[i][j-1] + board[i][j] ;
                       board[i][j] = 0;

                       scr = scr + 3;
                    }
                }

                if(board[i][j] != 0 && board[i][j-1] == 0)
                {
                    swap(board[i][j] , board[i][j-1]);
                }
            }
        }
    }

    Move ();

}


// Up sort
void Up ()
{
    for(int itr=0; itr<3; itr++)
    {
        for(i=3; i>0; i--)
        {
            for(j=0; j<4; j++)
            {
                if(board[i][j] != 0)
                {
                    if(board[i][j] == board[i-1][j])
                    {
                       board[i-1][j] = board[i-1][j] + board[i][j] ;
                       board[i][j] = 0;

                       scr = scr + 3;
                    }
                }

                if(board[i][j] != 0 && board[i-1][j] == 0)
                {
                    swap(board[i][j] , board[i-1][j]);
                }
            }
        }
    }

    Move ();

}


// Down sort
void Down ()
{
    for(int itr=0; itr<3; itr++)
    {
        for(i=0; i<3; i++)
        {
            for(j=0; j<4; j++)
            {
                if(board[i][j] != 0)
                {
                    if(board[i][j] == board[i+1][j])
                    {
                       board[i+1][j] = board[i+1][j] + board[i][j] ;
                       board[i][j] = 0;

                       scr = scr + 3;
                    }
                }

                if(board[i][j] != 0 && board[i+1][j] == 0)
                {
                    swap(board[i][j] , board[i+1][j]);
                }
            }
        }
    }

    Move ();

}


// Spaces
void Spaces()
{
    if( board[i][j] < 10 && board[i][j] > 0 )
    {
        cout << "   ";
    }
    
    else if( board[i][j] < 100 )
    {
        cout << "  ";
    }
    
    else if( board[i][j] < 1000 )
    {
        cout << " ";
    }
    
}

//file handling
void Read()
{
	ifstream read("pscr.txt");  
	 read>>pscr;
}
void Write()
{
	ofstream write("pscr.txt");
	       write<<scr<<endl; 
}
