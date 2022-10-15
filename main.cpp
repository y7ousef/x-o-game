#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
char Player1='X',Player2='O',Matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void Print()
{
    cout<<"Player1 ==> X    Player2 ==> O \n\n        |     |      \n";
    for(int i=0;i<3;i++)
    {
        cout<<"   ";
        for(int j=0;j<3;j++)
        {
            cout<<"  "<<Matrix[i][j];
            while(j<2)
                {
                cout<<"  |";
                break;
                }
        }
        while(i<2)
            {
            cout<<"   \n   _____|_____|_____ ";
            break;
            }
        cout<<"\n        |     |      \n";
    }
}
char Play()
{
    char Pos1;
    int p=0;
    string s;
    while(p<1)
    {
        cout<<"\nChoose Your Position ... Player(1) : ";
        cin>>s;
        if(s.size()>1 || s.size()<1)
        {
            cout<<"\nWrong Entry .... Please try again\n";
            continue;
        }
        Pos1=s.at(0);
        if(Pos1!='1'&&Pos1!='2'&&Pos1!='3'&&Pos1!='4'&&Pos1!='5'&&Pos1!='6'&&Pos1!='7'&&Pos1!='8'&&Pos1!='9')
        {
            cout<<"\nWrong Entry .... Please try again\n";
            continue;
        }
        switch(Pos1)
        {
            case'1':
            if(Matrix[0][0]!=Player2&&Matrix[0][0]!=Player1)
            {
                Matrix[0][0]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'2':
            if(Matrix[0][1]!=Player2&&Matrix[0][1]!=Player1)
            {
                Matrix[0][1]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'3':
            if(Matrix[0][2]!=Player2&&Matrix[0][2]!=Player1)
            {
                Matrix[0][2]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'4':
            if(Matrix[1][0]!=Player2&&Matrix[1][0]!=Player1)
            {
                Matrix[1][0]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'5':
            if(Matrix[1][1]!=Player2&&Matrix[1][1]!=Player1)
            {
                Matrix[1][1]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'6':
            if(Matrix[1][2]!=Player2&&Matrix[1][2]!=Player1)
            {
                Matrix[1][2]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'7':
            if(Matrix[2][0]!=Player2&&Matrix[2][0]!=Player1)
            {
                Matrix[2][0]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'8':
            if(Matrix[2][1]!=Player2&&Matrix[2][1]!=Player1)
            {
                Matrix[2][1]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
            case'9':
            if(Matrix[2][2]!=Player2&&Matrix[2][2]!=Player1)
            {
                Matrix[2][2]=Player1;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                continue;
            }
        }
        if(Matrix[0][0]==Player1&&Matrix[0][1]==Player1&&Matrix[0][2]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if(Matrix[1][0]==Player1&&Matrix[1][1]==Player1&&Matrix[1][2]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if(Matrix[2][0]==Player1&&Matrix[2][1]==Player1&&Matrix[2][2]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if(Matrix[0][0]==Player1&&Matrix[1][0]==Player1&&Matrix[2][0]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if(Matrix[0][1]==Player1&&Matrix[1][1]==Player1&&Matrix[2][1]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if(Matrix[0][2]==Player1&&Matrix[1][2]==Player1&&Matrix[2][2]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if(Matrix[0][0]==Player1&&Matrix[1][1]==Player1&&Matrix[2][2]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if(Matrix[0][2]==Player1&&Matrix[1][1]==Player1&&Matrix[2][0]==Player1)
        {
        cout<<"\nPlayer(1) is the winner\n";
        break;
        }
        else if((Matrix[0][0]==Player1||Matrix[0][0]==Player2)&&(Matrix[0][1]==Player1||Matrix[0][1]==Player2)&&(Matrix[0][2]==Player1||Matrix[0][2]==Player2)&&(Matrix[1][0]==Player1||Matrix[1][0]==Player2)&&(Matrix[1][1]==Player1||Matrix[1][1]==Player2)&&(Matrix[1][2]==Player1||Matrix[1][2]==Player2)&&(Matrix[2][0]==Player1||Matrix[2][0]==Player2)&&(Matrix[2][1]==Player1||Matrix[2][1]==Player2)&&(Matrix[2][2]==Player1||Matrix[2][2]==Player2))
        {
            cout<<"\nDraw for the both of players\n";
            return 0;
        }
        char Pos2='0';
        while(Pos2!='1'&&Pos2!='2'&&Pos2!='3'&&Pos2!='4'&&Pos2!='5'&&Pos2!='6'&&Pos2!='7'&&Pos2!='8'&&Pos2!='9')
        {
        cout<<"\nChoose Your Position ... Player(2) : ";
        cin>>s;
        if(s.size()>1||s.size()<1)
        {
            cout<<"\nWrong Entry .... Please try again\n";
            continue;
        }
        Pos2=s.at(0);
        if(Pos2!='1'&&Pos2!='2'&&Pos2!='3'&&Pos2!='4'&&Pos2!='5'&&Pos2!='6'&&Pos2!='7'&&Pos2!='8'&&Pos2!='9')
        {
            cout<<"\nWrong Entry .... Please try again\n";
            continue;
        }
        switch(Pos2)
        {
            case'1':
            if(Matrix[0][0]!=Player1&&Matrix[0][0]!=Player2)
            {
                Matrix[0][0]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'2':
            if(Matrix[0][1]!=Player1&&Matrix[0][1]!=Player2)
            {
                Matrix[0][1]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'3':
            if(Matrix[0][2]!=Player1&&Matrix[0][2]!=Player2)
            {
                Matrix[0][2]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'4':
            if(Matrix[1][0]!=Player1&&Matrix[1][0]!=Player2)
            {
                Matrix[1][0]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'5':
            if(Matrix[1][1]!=Player1&&Matrix[1][1]!=Player2)
            {
                Matrix[1][1]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'6':
            if(Matrix[1][2]!=Player1&&Matrix[1][2]!=Player2)
            {
                Matrix[1][2]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'7':
            if(Matrix[2][0]!=Player1&&Matrix[2][0]!=Player2)
            {
                Matrix[2][0]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'8':
            if(Matrix[2][1]!=Player1&&Matrix[2][1]!=Player2)
            {
                Matrix[2][1]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            case'9':
            if(Matrix[2][2]!=Player1&&Matrix[2][2]!=Player2)
            {
                Matrix[2][2]=Player2;
                system("cls");
                Print();
                break;
            }
            else
            {
                cout<<"\nThis place has already completed ... \nPlease try again ....";
                Pos2='0';
                continue;
            }
            default:
                cout<<"\nWrong Entry ... ";
                break;
        }
        }
        if(Matrix[0][0]==Player2&&Matrix[0][1]==Player2&&Matrix[0][2]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
        else if(Matrix[1][0]==Player2&&Matrix[1][1]==Player2&&Matrix[1][2]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
        else if(Matrix[2][0]==Player2&&Matrix[2][1]==Player2&&Matrix[2][2]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
        else if(Matrix[0][0]==Player2&&Matrix[1][0]==Player2&&Matrix[2][0]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
        else if(Matrix[0][1]==Player2&&Matrix[1][1]==Player2&&Matrix[2][1]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
        else if(Matrix[0][2]==Player2&&Matrix[1][2]==Player2&&Matrix[2][2]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
        else if(Matrix[0][0]==Player2&&Matrix[1][1]==Player2&&Matrix[2][2]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
        else if(Matrix[0][2]==Player2&&Matrix[1][1]==Player2&&Matrix[2][0]==Player2)
        {
        cout<<"\nPlayer(2) is the winner\n";
        break;
        }
    }
}
int main()
{
    char cont='y',z='1';
    do
    {
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            Matrix[i][j]=z;
            z++;
        }
    }
    z='1';
    system("cls");
    Print();
    Play();
    cout<<"\nIf you want to play again enter (Y) : ";
    cin>>cont;
    }
    while(cont=='y'||cont=='Y');
    return 0;
}
