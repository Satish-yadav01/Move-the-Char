#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    int x=30,y=10;
    char ch;
    gotoxy(x,y);
    printf("_/-\_");
    while(1)
    {
        ch=getch();
        switch(ch)
        {
            case 'a':
                x--;
                break;
            case 's':
                y++;
                break;
            case 'w':
                y--;
                break;
            case 'd':
                x++;
                break;
            case 27:
                exit(0);
        }
        system("cls");
        gotoxy(x,y);
        printf("_/-\_");
    }
}

