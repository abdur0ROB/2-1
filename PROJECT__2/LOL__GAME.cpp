#include <stdio.h>
#include <string.h>
#include<graphics.h>
int count=0,co[3][3],a= 3,b= -3,sum=0;
char player1[20],player2[20];
int main()
{
    int n,i,j,k,l,x,y,m;
    printf("1.Start the game...\n2.Quit the game....\n3.How to play......\n\nEnter your choice....\n");
    scanf("%d",&n);
    switch(n)
  {
     case 1 :
         {
              printf("\nWho will play for 'X'\n");
              fflush(stdin);
              gets(player1);
              printf("\n\n\nWho will play for 'O'\n");
              fflush(stdin);
              gets(player2);
              system("pause");
         }
  }
    int driver,mode;
    driver=DETECT;
    mode=0;
    initgraph(&driver,&mode,"c:\\tc\\bgi");

    settextstyle(10,HORIZ_DIR,6);
    setcolor(GREEN);
    outtextxy(90,150,"T I C\n");
    delay(1000);
    cleardevice();

    settextstyle(10,HORIZ_DIR,6);
    setcolor(RED);
    outtextxy(90,150,"T A C");
    delay(1000);
    cleardevice();

    settextstyle(10,HORIZ_DIR,6);
    setcolor(GREEN);
    outtextxy(90,150,"T O E");
    delay(1000);
    cleardevice();

    setcolor(9);
    rectangle(150,50,200,100);  // 1st row 1st rec

    rectangle(200,50,250,100);  // 1st row 2nd rec

    rectangle(250,50,300,100);  // 1st row 3rd rec

    rectangle(150,100,200,150); //2nd row 1st rec

    rectangle(200,100,250,150); //2nd row 2nd rec

    rectangle(250,100,300,150); //2nd row 3rd rec

    rectangle(150,150,200,200); //3rd row 1st rec

    rectangle(200,150,250,200); //3rd row 2nd rec

    rectangle(250,150,300,200); //3rd row 2nd rec

    if((x>=150 && x<=200) && (y>=50 && y<=100))
       co[0][0]=0;

    if((x>=200 && x<=250) && (y>=50 && y<=100))
       co[0][1]=0;

    if((x>=250 && x<=300) &&(y>=50 && y<=100))
       co[0][2]=0;

    if((x>=150 && x<=200) && (y>=100 && y<=150))
       co[1][0]=0;

    if((x>=200 && x<=250) && (y>=100 && y<=150))
       co[1][1]=0;

    if((x>=250 && x<=300) && (y>=100 && y<=150))
       co[1][2]=0;

    if((x>=150 && x<=200) && (y>=150&&y<=200))
       co[2][0]=0;

    if((x>=200 && x<=250) && (y>=150 && y<200))
       co[2][1]=0;

    if((x>=250 && x<=300) && (y>=150 && y<200))
       co[2][2]=0;

    for(i=1;i<=9;i++)
    {
        while(1)
        {
             if (ismouseclick(WM_LBUTTONUP))
             {
                 count++;
                 getmouseclick(WM_LBUTTONUP,x,y);
                     if((x>=150 && x<=200) && (y>=50 && y<=100))
                     {
                         k=1;   // 1st row 1st rec
                     }
                     else if((x>=200 && x<=250) && (y>=50 && y<=100))
                     {
                         k=2;   // 1st row 2nd rec
                     }
                     else if((x>=250 && x<=300) &&(y>=50 && y<=100))
                     {
                          k=3;  // 1st row 3rd rec
                     }
                     else if((x>=150 && x<=200) && (y>=100 && y<=150))
                     {
                         k=4;    //2nd row 1st rec
                     }
                     else if((x>=200 && x<=250) && (y>=100 && y<=150))
                     {
                          k=5;   //2nd row 2nd rec
                     }
                     else if((x>=250 && x<=300) && (y>=100 && y<=150))
                     {
                         k=6;    //2nd row 3rd rec
                     }
                     else if((x>=150 && x<=200) && (y>=150&&y<=200))
                     {
                          k=7;   //3rd row 1st rec
                     }
                     else if((x>=200 && x<=250) && (y>=150 && y<200))
                     {
                           k=8;   //3rd row 2nd rec
                     }
                     else if((x>=250 && x<=300) && (y>=150 && y<200))
                     {
                           k=9;   //3rd row 3rd rec
                     }
                     if((count%2==1) && k==1)
                     {
                         setcolor(LIGHTGREEN);
                         circle(175,75,10);
                         co[0][0]= 1;   //1st rec for circle
                     }
                     else if((count%2==0) && k==1)
                     {
                         setcolor(YELLOW);
                        line(160,60,190,90);
                        line(190,60,160,90);
                        co[0][0]= -1;  //1st rec for cross
                     }
                      if((count%2==1) && k==2)
                     {
                         setcolor(LIGHTGREEN);
                         circle(225,75,10);
                         co[0][1]= 1;   //2nd rec for circle
                     }
                     else if((count%2==0) && k==2)
                     {
                         setcolor(YELLOW);
                       line(210,60,240,90);
                        line(240,60,210,90);
                        co[0][1]= -1;  //2nd rec for cross
                     }
                      if((count%2==1) && k==3)
                     {
                         setcolor(LIGHTGREEN);
                         circle(275,75,10);
                         co[0][2]= 1;  //3rd rec for circle
                     }
                     else if((count%2==0) && k==3)
                     {
                         setcolor(YELLOW);
                        line(260,60,290,90);
                        line(290,60,260,90);
                        co[0][2]= -1;  //3rd rec for cross
                     }
                      if((count%2==1) && k==4)
                     {
                         setcolor(LIGHTGREEN);
                         circle(175,125,10);
                         co[1][0]= 1;  //4th rec for circle
                     }
                     else if((count%2==0) && k==4)
                     {
                         setcolor(YELLOW);
                         line(160,110,190,140);
                         line(190,110,160,140);
                         co[1][0]= -1;  //4th rec for cross
                     }
                      if((count%2==1) && k==5)
                     {
                         setcolor(LIGHTGREEN);
                         circle(225,125,10);
                         co[1][1]= 1;   //5th rec for circle
                     }
                     else if((count%2==0) && k==5)
                     {
                         setcolor(YELLOW);
                         line(210,110,240,140);
                         line(240,110,210,140);
                        co[1][1]= -1;    //5th rec for cross
                     }
                      if((count%2==1) && k==6)
                     {
                         setcolor(LIGHTGREEN);
                         circle(275,125,10);
                         co[1][2]= 1;  //6th rec for circle
                     }
                     else if((count%2==0) && k==6)
                     {
                         setcolor(YELLOW);
                         line(260,110,290,140);
                         line(290,110,260,140);
                         co[1][2]= -1;   //6th rec for cross
                     }
                      if((count%2==1) && k==7)
                     {
                         setcolor(LIGHTGREEN);
                         circle(175,175,10);
                         co[2][0]= 1;   //7th rec for circle
                     }
                     else if((count%2==0) && k==7)
                     {
                         setcolor(YELLOW);
                         line(160,160,190,190);
                         line(190,160,160,190);
                         co[2][0]= -1;  //7th rec for cross
                     }
                      if((count%2==1) && k==8)
                     {
                         setcolor(LIGHTGREEN);
                         circle(225,175,10);
                         co[2][1]= 1;  //8th rec for circle
                     }
                     else if((count%2==0) && k==8)
                     {
                         setcolor(YELLOW);
                         line(210,160,240,190);
                         line(240,160,210,190);
                         co[2][1]= -1;  //8th rec for cross
                     }
                      if((count%2==1) && k==9)
                     {
                         setcolor(LIGHTGREEN);
                         circle(275,175,10);
                         co[2][2]= 1;   //9th rec for circle
                     }
                     else if((count%2==0) && k==9)
                     {
                         setcolor(YELLOW);
                         line(260,160,290,190);
                         line(290,160,260,190);
                         co[2][2]= -1; //9th rec for cross
                     }
                     if(1)
                      {
                        if(co[0][0]+co[0][1]+co[0][2]==a)    //1st win of circle
                        {
                            settextstyle(10,HORIZ_DIR,6);
                            setcolor(GREEN);
                            outtextxy(150,250,"Circle is win\n");
                        }
                         else if(co[0][0]+co[0][1]+co[0][2]== b) //1st win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }
                       else if(co[1][0]+co[1][1]+co[1][2]==a)  //2nd win of circle
                       {
                           settextstyle(10,HORIZ_DIR,6);
                           setcolor(GREEN);
                           outtextxy(150,250,"Circle is win\n");
                       }
                        else if(co[1][0]+co[1][1]+co[1][2]== b) //2nd win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }

                       else if(co[2][0]+co[2][1]+co[2][2]==a) //3rd win of circle
                       {
                           settextstyle(10,HORIZ_DIR,6);
                           setcolor(GREEN);
                           outtextxy(150,250,"Circle is win\n");
                       }
                       else if(co[2][0]+co[2][1]+co[2][2]== b)  //3rd win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }
                       else if(co[0][0]+co[1][0]+co[2][0]==a) //4th win of circle
                       {
                           settextstyle(10,HORIZ_DIR,6);
                           setcolor(GREEN);
                           outtextxy(150,250,"circle is win\n");
                       }

                       else if(co[0][0]+co[1][0]+co[2][0]== b) //4th win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }
                       else if(co[1][0]+co[1][1]+co[1][2]==a) //5th win of circle
                       {
                           settextstyle(10,HORIZ_DIR,6);
                           setcolor(GREEN);
                           outtextxy(150,250,"Circle is win\n");
                       }
                       else if(co[0][1]+co[1][1]+co[2][0]== b) //5th win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }
                        else if(co[2][0]+co[2][1]+co[2][2]==a) //6th win of circle
                       {
                           settextstyle(10,HORIZ_DIR,6);
                           setcolor(GREEN);
                           outtextxy(150,250,"Circle is win\n");
                       }
                       else if(co[0][2]+co[1][2]+co[2][2]== b) //6th win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }
                        else if(co[0][0]+co[1][1]+co[2][2]==a) //7th win of circle
                       {
                           settextstyle(10,HORIZ_DIR,6);
                           setcolor(GREEN);
                           outtextxy(150,250,"Circle is win\n");
                       }
                        else if(co[0][0]+co[1][1]+co[2][2]== b) //7th win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }
                        else if(co[0][2]+co[1][1]+co[2][0]==a) //8th win of circle
                       {
                           settextstyle(10,HORIZ_DIR,6);
                           setcolor(GREEN);
                           outtextxy(150,250,"Circle is win\n");
                       }
                       else if(co[0][2]+co[1][1]+co[2][0]== b) //8th win of cross
                       {
                          settextstyle(10,HORIZ_DIR,6);
                          setcolor(GREEN);
                          outtextxy(150,250,"Cross is win\n");
                       }
                   }
            }
       }
    }
   getch();
  }
