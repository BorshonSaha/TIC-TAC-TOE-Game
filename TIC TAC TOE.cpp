#include<bits/stdc++.h>
using namespace std;
char matrix[3][3]= {'1','2','3','4','5','6','7','8','9'};
char player='X';
int n;
void draw()
{
    system("cls");
    cout<<"WELCOME to TIC TAC TOE GAME"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void input()
{
    cout<<"It's "<<player<<" turn"<<endl;
    cout<<"Enter any number from the field : ";
    int a;
    cin>>a;
    if(a==1)
    {
        if(matrix[0][0]=='1')
            matrix[0][0]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }

    else if(a==2)
    {
        if(matrix[0][1]=='2')
            matrix[0][1]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
    else if(a==3)
    {
        if(matrix[0][2]=='3')
            matrix[0][2]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
    else if(a==4)
    {
        if(matrix[1][0]=='4')
            matrix[1][0]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
    else if(a==5)
    {
        if(matrix[1][1]=='5')
            matrix[1][1]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
    else if(a==6)
    {
        if(matrix[1][2]=='6')
            matrix[1][2]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
    else if(a==7)
    {
        if(matrix[2][0]=='7')
            matrix[2][0]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
    else if(a==8)
    {
        if(matrix[2][1]=='8')
            matrix[2][1]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
   else if(a==9)
    {
        if(matrix[2][2]=='9')
            matrix[2][2]=player;
        else
        {
            cout<<"Field is already used try again !!!"<<endl;
            input();
        }
    }
}

void tooglePlayer()
{
    if(player=='X')
        player='O';
    else
        player='X';
}

char win()
{
    ///for first player

    ///row
    if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
        return 'X';
    if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
        return 'X';
    if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
        return 'X';

    ///column
    if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
        return 'X';
    if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
        return 'X';
    if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
        return 'X';

    ///diagonal
    if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
        return 'X';
    if(matrix[2][0]=='X' && matrix[1][1]=='X' && matrix[0][2]=='X')
        return 'X';


    ///for second player

    ///row
    if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
        return 'O';
    if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
        return 'O';
    if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
        return 'O';

    ///column
    if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
        return 'O';
    if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
        return 'O';
    if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
        return 'O';

    ///diagonal
    if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
        return 'O';
    if(matrix[2][0]=='O' && matrix[1][1]=='O' && matrix[0][2]=='O')
        return 'O';

    return '/';
}
int main()
{
    n=0;
    draw();
    while(1)
    {
        n++;
        input();
        draw();
        if(win()=='X')
        {
            cout<<"X WINS !!!"<<endl;
            break;
        }
        else if(win()=='O')
        {
            cout<<"O WINS !!!"<<endl;
            break;
        }
        else if(win()=='/' && n==9)
        {
            cout<<"Match tied !!!"<<endl;
            break;
        }
        tooglePlayer();
    }
    system("pause");
    return 0;
}
