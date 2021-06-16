#include<stdio.h>
#include<string.h>
#include<graphics.h>

int main()
{
    int gdriver = DETECT, gmode, errorcode;

    initgraph(&gdriver,&gmode,"d:\tc\\bgi");

    int i;

    line(50,100,100,50);

    //Left side roof

    line(100,50,150,100);

    //right side roof

    circle(100,83,12);

    //middle circle of 1st home

    line(75,75,75,40);

    //Left side | on roof

    line(85,40,85,65);

    //right side of  on roof

    line(90,40,70,40);

    //middle line of ||

    line(55,95,55,200);

    //1st house left piller

    line(145,95,145,200);

    //1st home 2nd piller

    line(55,200,145,200);

    //base



    line(90,200,90,150);

    //Door left line






    line(110,200,110,150);

    //Door right line


    line(90,150,110,150);

    //Door left side

    line(120,70,200,70);

    //uppermost line of 2nd home

    line(200,70,200,52);

    //2nd house left \ on roof

    line(220,74,220,52);

    //2nd home 2nd | on roof

    line(195,52,225,52);

    //2nd home middle line between two |

    line(220,74,280,125);

    //2nd home rightermost wall piller

    line(145,125,280,125);

    //joining of 2 home

    line(145,200,272,200);

    //2nd home base

    line(272,200,272,125);

    //joining of the base with right waal 2nd home

    rectangle(180,138,238,168);

    //window

    setcolor(DARKGRAY);

    //color of window bar

    for(i=0; i<4; ++i){

    line(209+i,138,209+i,168);

    //window middle line

    line(194+i,138,194+i,168);

    //window left line

    line(223+i,138,223+i,168);

    //window right line

    }

    circle(105,170,3);

    //door lock


    int f;


    scanf("%d",&f);
}
