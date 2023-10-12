#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printPlayer();
void erasePlayer();
void printenemy1();
void eraseenemy1();
void printenemy2();
void eraseenemy2();
void moveenemy1();
void moveenemy2();
void movePlayerleft();
void movePlayerright();    
void maze();
char getCharAtxy(short int x, short int y);
int ex=2, ey=2;
int e2x=9, e2y=2;
int px=2, py=22;
main (){
    system("cls");
    maze();
    printenemy1();
    printenemy2();
    printPlayer();
    while(true){
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerright();
        }
        moveenemy1();
        moveenemy2();
        Sleep(200);
    }

}
void maze(){
    cout<<"##################################################################################################"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"#                                                                                                #"<<endl;
    cout<<"##################################################################################################"<<endl;
}
void gotoxy(int x, int y){
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void printenemy1(){
    gotoxy(ex,ey);
    cout<<"*";
    gotoxy(ex,ey+1);
    cout<<"**";
    gotoxy(ex,ey+2);
    cout<<"**";
    gotoxy(ex,ey+3);
    cout<<"***";
    gotoxy(ex,ey+4);
    cout<<"*   *";
    gotoxy(ex,ey+5);
    cout<<"*   *";
    gotoxy(ex,ey+6);
    cout<<"* *";
    gotoxy(ex,ey+7);
    cout<<"**";
    gotoxy(ex,ey+8);
    cout<<" * ";
}
void printenemy2(){
    gotoxy(e2x,e2y);
    cout<<"*";
    gotoxy(e2x,e2y+1);
    cout<<"**";
    gotoxy(e2x,e2y+2);
    cout<<"**";
    gotoxy(e2x,e2y+3);
    cout<<"***";
    gotoxy(e2x,e2y+4);
    cout<<"*   *";
    gotoxy(e2x,e2y+5);
    cout<<"*   *";
    gotoxy(e2x,e2y+6);
    cout<<"* *";
    gotoxy(e2x,e2y+7);
    cout<<"**";
    gotoxy(e2x,e2y+8);
    cout<<" * ";
}
void eraseenemy1(){
    gotoxy(ex,ey);
    cout<<" ";
    gotoxy(ex,ey+1);
    cout<<"  ";
    gotoxy(ex,ey+2);
    cout<<"  ";
    gotoxy(ex,ey+3);
    cout<<"   ";
    gotoxy(ex,ey+4);
    cout<<"     ";
    gotoxy(ex,ey+5);
    cout<<"     ";
    gotoxy(ex,ey+6);
    cout<<"   ";
    gotoxy(ex,ey+7);
    cout<<"  ";
    gotoxy(ex,ey+8);
    cout<<"   ";
}
void eraseenemy2(){
    gotoxy(e2x,e2y);
    cout<<" ";
    gotoxy(e2x,e2y+1);
    cout<<"  ";
    gotoxy(e2x,e2y+2);
    cout<<"  ";
    gotoxy(e2x,e2y+3);
    cout<<"   ";
    gotoxy(e2x,e2y+4);
    cout<<"     ";
    gotoxy(e2x,e2y+5);
    cout<<"     ";
    gotoxy(e2x,e2y+6);
    cout<<"   ";
    gotoxy(e2x,e2y+7);
    cout<<"  ";
    gotoxy(e2x,e2y+8);
    cout<<"   ";
}
void moveenemy1(){
    eraseenemy1();
    ex=ex+1;
    if(ex==19){
        ex=2;
    }
    printenemy1();
    }
void moveenemy2(){
    eraseenemy2();
    e2x=e2x+1;
    if(e2x==25){
        e2x=9;
    }
    printenemy2();
}
void printPlayer(){
    gotoxy(px,py);
    cout<<" o ";
    gotoxy(px,py+1);
    cout<<"| |";
    gotoxy(px,py+2);
    cout<<" __   |__";
    gotoxy(px,py+3);
    cout<<"|  | |";
    gotoxy(px,py+4);
    cout<<"_____";
}
void erasePlayer(){
    gotoxy(px,py);
    cout<<" ";
    gotoxy(px,py+1);
    cout<<"   ";
    gotoxy(px,py+2);
    cout<<"    ";
    gotoxy(px,py+3);
    cout<<"       ";
    gotoxy(px,py+4);
    cout<<" ";
}
char getCharAtxy(short int x, short int y){
    CHAR_INFO ci;
    COORD xy={0,0};
    SMALL_RECT rect={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
void movePlayerleft(){
     if (getCharAtxy(px - 1, py) == ' '){
    erasePlayer();
    px=px-1;
    printPlayer();}
}
void movePlayerdown(){
     if (getCharAtxy(py - 1, px) == ' '){
    erasePlayer();
    py=py-1;
    printPlayer();}
}
void movePlayerright()
{ if (getCharAtxy(px + 6, py)== ' '){
    erasePlayer();
    px=px+1;
    printPlayer();
    }
}void movePlayerup(){
     if (getCharAtxy(py + 6 , px) == ' '){
    erasePlayer();
    py=py-1;
    printPlayer();}
}
