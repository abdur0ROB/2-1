#include<stdio.h>

#include<conio.h>

#include<graphics.h>

#include<dos.h>

void rocket();

void text();

int gd = DETECT,gm,i,j,k;

 int main()

{

    text();

    getch();

    cleardevice();

    rocket();

    getch();

}


void text ()

{

    initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

    settextstyle(0,EMPTY_FILL,2);

    setcolor(WHITE);



    delay(150);

    outtextxy(50,450,"SEEKING TO POWER LAB__!");

    delay(150);



}


void rocket()

{
    setcolor(BLUE);

        settextstyle(0,EMPTY_FILL,1);
    //earth
        for(i=0;i<=400 ;i++)
        {

            setcolor(WHITE);

            arc(500-i,200+i,0,120,200);

            arc(500-i,200+i,0,120,300);

            arc(500-i,200+i,0,120,400);

            arc(500-i,200+i,0,120,500);

            setcolor(GREEN);

            outtextxy(318,330-i,"C");

            outtextxy(318,340-i,"O");

            outtextxy(318,350-i,"D");

            outtextxy(318,360-i,"E");

            outtextxy(310,385-i,"RUN");

            //rocket

            setcolor(WHITE);

            settextstyle(0,EMPTY_FILL,2);

            outtextxy(10,400+i,"EARTH");

            settextstyle(0,EMPTY_FILL,2);

            setcolor(YELLOW);

            outtextxy(240,410+i,"-----------");

            outtextxy(240,400+i,"___________");
            setcolor(WHITE);

            outtextxy(50,110,"*");
            outtextxy(59,100,"*");
            outtextxy(45,130,"*");
            outtextxy(40,150,"*");
            outtextxy(60,150,"*");

            setcolor(YELLOW);

            outtextxy(204,345+i," |");

            setcolor(CYAN);

            outtextxy(210,360+i,"||");
            outtextxy(210,370+i,"||");
            outtextxy(210,380+i,"||");
            outtextxy(210,390+i,"||");
            outtextxy(210,400+i,"||");

            setcolor(YELLOW);
            outtextxy(403,345+i,"|");
            setcolor(CYAN);
            outtextxy(395,360+i,"||");
            outtextxy(395,370+i,"||");
            outtextxy(395,380+i,"||");
            outtextxy(395,390+i,"||");
            outtextxy(395,400+i,"||");




            settextstyle(0,EMPTY_FILL,1);


                for(j=0;j<=7;j++)
                {
                    setcolor(RED);
                    circle(320,300-i,0+j);
                }

                for(k=0;k<=15;k++)
                {
                    setcolor(YELLOW);
                    circle(300,410-i,0+k);
                    circle(340,410-i,0+k);
                    circle(320,410-i,0+k);
                    circle(320,430-i,0+k);
                   // circle(360,410-i,0+k);
                }



                setcolor(WHITE);


                line(0,420+i,620,420+i);
                line(340,400-i,340,320-i);
                line(300,400-i,300,320-i);
                line(330,370-i,330,330-i);
                line(310,370-i,310,330-i);
                line(310,330-i,330,330-i);
                line(310,370-i,330,370-i);
                line(270,400-i,370,400-i);
                line(270,400-i,300,380-i);
                line(340,380-i,370,400-i);
                line(300,320-i,340,320-i);
                line(300,320-i,320,300-i);
                line(340,320-i,320,300-i);

                delay(50);

                cleardevice();



            }

    setcolor(WHITE);

    settextstyle(0,EMPTY_FILL,3);

    delay(200);

    outtextxy(50,100,"CONGRATS");

    outtextxy(50,200,"WE ARE IN 7TH FLOOR");

    outtextxy(50,300,"SUCCESSFUL");

    getch();




}















