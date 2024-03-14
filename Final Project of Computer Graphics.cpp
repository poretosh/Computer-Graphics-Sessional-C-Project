#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<time.h>
using namespace std;

//1: Line

void line () {
    int gd = DETECT, gm;

    initgraph (&gd, &gm, "");

    line (600,150,300,150);


    getch();

    closegraph ();

}

//2-Rectangle

void rectangle() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define rectangle coordinates
    int left = 100, top = 100;
    int right = 300, bottom = 200;

    // Draw rectangle
    rectangle(left, top, right, bottom);

    getch();
    closegraph();
}

//3:Triangle

void triangle () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define triangle vertices
    int x1 = 100, y1 = 300;
    int x2 = 300, y2 = 100;
    int x3 = 500, y3 = 300;

    // Draw triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();
}

//4-Square

void square() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define square coordinates
    int left = 100, top = 100;
    int right = 200, bottom = 200;

    // Draw square
    rectangle(left, top, right, bottom);

    getch();
    closegraph();
}

//5: Circle

void circle () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a circle at coordinates (x, y) with radius r
    int x = 200;
    int y = 200;
    int radius = 100;
    circle(x, y, radius);

    getch();
    closegraph();
}

//6: Elips

void elips () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define ellipse parameters
    int x = 300, y = 200;
    int start_angle = 0; // Starting angle of the ellipse
    int end_angle = 360; // Ending angle of the ellipse
    int x_radius = 100; // Horizontal radius of the ellipse
    int y_radius = 50; // Vertical radius of the ellipse

    // Draw ellipse
    ellipse(x, y, start_angle, end_angle, x_radius, y_radius);

    getch();
    closegraph();
}

// 7:Emoji

void emoji () {
    int gd = DETECT, gm;


    initgraph (&gd, &gm, "");


    initwindow(800,800,"eMOJI");

    setcolor(GREEN);
    setfillstyle(1, YELLOW);
    circle(200,160,100);//head
    floodfill(150,150,GREEN);
    setfillstyle(1, RED);
    circle(150,110,10);//left eye
    floodfill(150,110, GREEN);
    setfillstyle(1, RED);
    circle(250,110,10);//right eye
    floodfill(250,110, GREEN);

    setcolor(BLACK);
    ellipse(190,190,180,360,50,30);//leaps


    getch();

    closegraph ();

}

// 8: Sun

void single_sun () {

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    // Sky
    setcolor(LIGHTBLUE);
    rectangle(0, 0, getmaxx(), getmaxy());
    floodfill(1, 1, LIGHTBLUE);

    // Sun
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(200, 200, 50);
    floodfill(200, 200, YELLOW);

    // Rays
    setcolor(YELLOW);
    line(200, 200, 300, 250);
    line(200, 200, 250, 300);
    line(200, 200, 100, 250);
    line(200, 200, 150, 300);
    line(200, 200, 300, 150);
    line(200, 200, 250, 100);
    line(200, 200, 100, 150);
    line(200, 200, 150, 100);

    getch();
    closegraph();
}

// 9: National Flag

void nationalflag () {

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(WHITE);
    setfillstyle(1,DARKGRAY);
    rectangle(130,380,170,400);
    rectangle(100,400,200,430);
    floodfill(135,390,WHITE);
    floodfill(135,410,WHITE);

    setcolor(WHITE);
    setfillstyle(1,LIGHTGRAY);
    rectangle(140,100,160,380);
    floodfill(150,105,WHITE);

    setfillstyle(1,GREEN);
    rectangle(160,100,360,200);
    floodfill(165,105,WHITE);

    setfillstyle(1,255);
    circle(245,150,40);
        floodfill(240,150,WHITE);

    getch();
    closegraph();

}

//10: House

void house ()

    {



	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	setcolor(BROWN);
	int arr[10]={200,200,350,200,410,300,260,300,200,200};
	int ar[8]={135,300,135,380,265,380,265,300};
	int a[6]={265,380,400,350,400,300};
	drawpoly(5,arr);
	drawpoly(3,a);
	drawpoly(4,ar);
	rectangle(175,380,215,320);
	line(200,200,130,305);
	line(202,202,135,303);
	line(0,340,135,340);
	line(400,340,700,340);
	circle(500,100,40);


	setfillstyle(1,BROWN);
	floodfill(200,201,6);
	setfillstyle(6,BROWN);
	floodfill(300,250,6);
	setfillstyle(1,14);
	floodfill(200,210,6);
	setfillstyle(1,14);
	floodfill(300,310,6);
	setfillstyle(9,12);
	floodfill(200,330,6);
	setfillstyle(1,GREEN);
	floodfill(200,400,6);
	setfillstyle(1,CYAN);
	floodfill(100,100,6);
	setfillstyle(1,14);
	floodfill(500,100,6);

	getch();
	closegraph();
}

//11: Traffic Light

void trafficlight () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw traffic light
    setfillstyle(SOLID_FILL, BLACK);
    bar(100, 100, 150, 300); // Stand
    setfillstyle(SOLID_FILL, RED);
    circle(125, 150, 20); // Red light
    floodfill(125, 150, WHITE);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(125, 200, 20); // Yellow light
    floodfill(125, 200, WHITE);
    setfillstyle(SOLID_FILL, GREEN);
    circle(125, 250, 20); // Green light
    floodfill(125, 250, WHITE);

    // Initial state: red light is on
    setfillstyle(SOLID_FILL, RED);
    floodfill(125, 150, WHITE);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(125, 200, WHITE);
    floodfill(125, 250, WHITE);

    // Simulation loop
    while (!kbhit()) {
        // Red -> Green transition
        delay(3000);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(125, 150, WHITE);
        setfillstyle(SOLID_FILL, GREEN);
        floodfill(125, 250, WHITE);

        // Green -> Yellow transition
        delay(2000);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(125, 250, WHITE);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(125, 200, WHITE);

        // Yellow -> Red transition
        delay(1000);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(125, 200, WHITE);
        setfillstyle(SOLID_FILL, RED);
        floodfill(125, 150, WHITE);
    }

    getch();
    closegraph();
}

//12: Wall Clock

const int centerX = 250; // X coordinate of clock center
const int centerY = 250; // Y coordinate of clock center
const int radius = 150;  // Radius of the clock

// Function to draw the clock face
void drawClockFace() {
    setcolor(WHITE);
    circle(centerX, centerY, radius);

    // Draw hour markers with labels
    for (int i = 1; i <= 12; ++i) {
        int hourMarkerX = centerX + static_cast<int>(radius * cos((i * 30 - 90) * 3.14 / 180));
        int hourMarkerY = centerY + static_cast<int>(radius * sin((i * 30 - 90) * 3.14 / 180));
        int hourEndX = centerX + static_cast<int>((radius - 20) * cos((i * 30 - 90) * 3.14 / 180));
        int hourEndY = centerY + static_cast<int>((radius - 20) * sin((i * 30 - 90) * 3.14 / 180));
        line(hourMarkerX, hourMarkerY, hourEndX, hourEndY);

        // Draw hour labels
        char label[3];
        sprintf(label, "%d", i);
        outtextxy(hourEndX - 5, hourEndY - 5, label);
    }
}

// Function to draw clock hands
void drawClockHands(int hour, int minute, int second) {
    int hourAngle = (hour % 12) * 30 + minute / 2 - 90;
    int minuteAngle = minute * 6 + second / 10 - 90;
    int secondAngle = second * 6 - 90;

    setcolor(WHITE);

    // Draw hour hand
    line(centerX, centerY, centerX + 70 * cos(hourAngle * 3.14 / 180), centerY + 70 * sin(hourAngle * 3.14 / 180));

    // Draw minute hand
    line(centerX, centerY, centerX + 90 * cos(minuteAngle * 3.14 / 180), centerY + 90 * sin(minuteAngle * 3.14 / 180));

    // Draw second hand
    setcolor(RED);
    line(centerX, centerY, centerX + 100 * cos(secondAngle * 3.14 / 180), centerY + 100 * sin(secondAngle * 3.14 / 180));
}

void wallclock () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set the background color
    setbkcolor(BLACK);

    while (!kbhit()) {
        // Get current time
        time_t now = time(0);
        tm *ltm = localtime(&now);

        // Clear the screen
        cleardevice();

        // Draw clock face
        drawClockFace();

        // Draw clock hands
        drawClockHands(ltm->tm_hour, ltm->tm_min, ltm->tm_sec);

        // Delay to update the clock every second
        delay(1000);
    }

    closegraph();
}

//13: Village Scenery

int Y=20,l=67,w=25,i=25,j=445,v=14;

int X=-13,Z=200,W=250,s=78,O;

int p=78,q=107,a=185,b= -67,k=-120;

float x=29, y=-92;

void sky();

void sun();

void clouds();

void mountain();

void house_1();

void house_2();

void house_3();

void bigTree();

void river();

void road();

void car();

void school();

void flag();

void flower();




void villagescenery () {

    int graphdriver= DETECT, graphmode= DETECT;

    initgraph(&graphdriver, &graphmode, "c\tc\bgi");



    clouds();

    mountain();

    sky();

    sun();

    setfillstyle(9,BLUE);

    bar(215,151,550,230);

    setfillstyle(11,BLUE);

    bar(0,80+Z,290+W,22+Z);

    setfillstyle(11,BLUE);

    bar(284,380,500,222);

    bar(260,380,210,222);

    bar(0,380,10,222);

    bar(10,380,75,222);

    bar(130,380,102,222);

    setfillstyle(11,GREEN);

    bar(0,325,500,450);

    setfillstyle(9,BLUE);

    bar(0,150,220,210);

    bar(165,150,220,222);

    flower();

    flag();

    school();

    bigTree();

    house_1();

    house_2();

    house_3();

    river();

    road();

    car();

    getch();

    closegraph();

}



void clouds()

{

    //clouds 1

    ellipse(40,30,60,240,10,15);

    ellipse(65,20,345,165,20,15);

    ellipse(103,29,340,160,20,15);

    ellipse(109,42,230,50,20,10);

    ellipse(66,46,163,340,31,17);

    //clouds 2

    ellipse(200,30,60,240,10,15);

    ellipse(225,20,345,165,20,15);

    ellipse(262,27,340,160,20,15);

    ellipse(268,42,230,50,20,10);

    ellipse(226,46,163,340,31,15);

    ellipse(300,21,20,182,21,19);

    ellipse(325,31,290,100,21,15);

    ellipse(299,45,228,20,33,11);

    //clouds 3

    ellipse(450,30,60,240,10,15);

    ellipse(475,20,345,165,20,15);

    ellipse(512,27,340,160,20,15);

    ellipse(518,42,230,50,20,10);

    ellipse(476,46,163,340,31,15);

}



void mountain()

{

    //m1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(0,150,100,75);

    line(100,75,200,150);

    //m2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(175,131,275,75);

    line(275,75,375,150);

    //m3

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(350,131,450,75);

    line(450,75,550,150);

    //m4

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(525,131,600,75);

    line(600,75,750,180);

    //ground

    line(0,150,750,150);

    floodfill(100,136,WHITE);

    floodfill(275,136,WHITE);

    floodfill(450,136,WHITE);

    floodfill(600,136,WHITE);

}





void sky()

{

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    floodfill(50,50,WHITE);

}





void sun()

{

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,YELLOW);

    arc(524,112,0,173,30);

    floodfill(520,105,WHITE);

}



void bigTree()

{

    setcolor(4);

    setfillstyle(SOLID_FILL,4);

    rectangle(46,330, 64,420);

    floodfill(47,331,4);

    setcolor(4);

    setfillstyle(SOLID_FILL,4);

    rectangle(52,307, 59,330);

    floodfill(53,308,4);

    setfillstyle(SOLID_FILL,4);

    bar(39,405,70,411);

    bar(41,400,69,406);

    bar(42,395,68,401);

    bar(43,390,67,396);

    bar(44,383,66,390);

    bar(45,378,65,383);

    bar(37,410,72,420);

    bar(35,417,74,423);

    bar(37,307,45,312);

    bar(38,312,46,316);

    bar(39,316,48,319);

    bar(40,319,48,321);

    bar(41,321,49,326);

    bar(42,326,49,331);

    bar(43,331,68,335);

    bar(44,335,67,339);

    bar(45,339,66,344);

    bar(67,307,74,312);

    bar(66,312,73,316);

    bar(65,316,72,320);

    bar(64,320,71,324);

    bar(63,324,70,328);

    bar(62,328,69,332);

    // leaf no 1

    setcolor(GREEN);

    circle(25, 320, 15);

    setfillstyle(SOLID_FILL,GREEN);

    floodfill(25,320, GREEN);

    //leaf no 2

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(20, 299, 20);

    floodfill(20,299, GREEN);

    //leaf no 3

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(28, 271, 20);

    floodfill(28,271, GREEN);

    //leaf no 4

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(41, 247, 18);

    floodfill(41,247, GREEN);

    //leaf no 8

    setcolor(GREEN);

    circle(88, 320, 15);  //pata number 1

    setfillstyle(SOLID_FILL,GREEN);

    floodfill(88,320, GREEN);

    //leaf no 7

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(97,305,16);

    floodfill(97,305, GREEN);

    //leaf no 6

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(100, 280, 22);

    floodfill(100,280, GREEN);

    //leaf no 5

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(95, 252, 17);

    floodfill(95,253, GREEN);

    //leaf no 4

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(70, 241, 19);

    floodfill(70,241, GREEN);

    //leaf middle

    setcolor(GREEN);

    setfillstyle(SOLID_FILL,GREEN);

    circle(60, 270, 35);

    bar(20,310,90,290);

    floodfill(60,270, GREEN);

}



void house_1()

{

    //triangle-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(88+q,400-p,163+q,400-p);

    line(100+q,370-p,88+q,400-p);

    line(100+q,370-p,112+q,400-p);

    line(100+q,370-p,150+q,370-p);

    line(150+q,370-p,163+q,400-p);

    floodfill(100+q,375-p,WHITE);

    //main-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTGRAY);

    line(88+q,400-p,163+q,400-p);

    line(100+q,370-p,112+q,400-p);

    line(100+q,370-p,150+q,370-p);

    line(150+q,370-p,163+q,400-p);

    floodfill(105+q,375-p,WHITE);

    //Side-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTCYAN);

    line(112+q,400-p,112+q,440-p);

    line(88+q,440-p,112+q,440-p);

    line(88+q,400-p,88+q,440-p);

    line(112+q,440-p,163+q,440-p);

    floodfill(90+q,402-p,WHITE);

    //main-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,9);

    line(163+q,400-p,163+q,440-p);

    line(112+q,440-p,163+q,440-p);

    line(112+q,400-p,112+q,440-p);

    line(88+q,400-p,163+q,400-p);

    floodfill(115+q,405-p,WHITE);

    //window 1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);

    line(120+q,415-p,130+q,415-p);

    line(120+q,415-p,120+q,427-p);

    line(120+q,427-p,130+q,427-p);

    line(130+q,415-p,130+q,427-p);

    floodfill(125+q,420-p,WHITE);

    //window 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);

    line(120+w+q,415-p,130+w+q,415-p);

    line(120+w+q,415-p,120+w+q,427-p);

    line(120+w+q,427-p,130+w+q,427-p);

    line(130+w+q,415-p,130+w+q,427-p);

    floodfill(125+w+q,421-p,WHITE);

    //door

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(94+q,440-p,94+q,420-p);

    line(106+q,440-p,106+q,420-p);

    line(94+q,420-p,106+q,420-p);

    floodfill(97+q,435-p,WHITE);

}



void house_2()

{

    //triangle-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTGRAY);

    line(88+a,400+b,163+a,400+b);

    line(100+a,370+b,88+a,400+b);

    line(100+a,370+b,112+a,400+b);

    line(100+a,370+b,150+a,370+b);

    line(150+a,370+b,163+a,400+b);

    floodfill(100+a,375+b,WHITE);

    //main-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(88+a,400+b,163+a,400+b);

    line(100+a,370+b,112+a,400+b);

    line(100+a,370+b,150+a,370+b);

    line(150+a,370+b,163+a,400+b);

    floodfill(105+a,375+b,WHITE);

    //side-Wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTMAGENTA);

    line(112+a,400+b,112+a,440+b);

    line(88+a,440+b,112+a,440+b);

    line(88+a,400+b,88+a,440+b);

    line(112+a,440+b,163+a,440+b);

    floodfill(90+a,402+b,WHITE);

    //main-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,3);

    line(163+a,400+b,163+a,440+b);

    line(112+a,440+b,163+a,440+b);

    line(112+a,400+b,112+a,440+b);

    line(88+a,400+b,163+a,400+b);

    floodfill(115+a,405+b,WHITE);

    //window 1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    line(120+a,415+b,130+a,415+b);

    line(120+a,415+b,120+a,427+b);

    line(120+a,427+b,130+a,427+b);

    line(130+a,415+b,130+a,427+b);

    floodfill(125+a,421+b,WHITE);

    //window 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTBLUE);

    line(120+w+a,415+b,130+w+a,415+b);

    line(120+w+a,415+b,120+w+a,427+b);

    line(120+w+a,427+b,130+w+a,427+b);

    line(130+w+a,415+b,130+w+a,427+b);

    floodfill(125+w+a,421+b,WHITE);

    //door

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);

    line(94+a,440+b,94+a,420+b);

    line(106+a,440+b,106+a,420+b);

    line(94+a,420+b,106+a,420+b);

    floodfill(97+a,435+b,WHITE);

}



void house_3()

{

    //triangle-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,YELLOW);

    line(88+x,400+y,163+x,400+y);

    line(100+x,370+y,88+x,400+y);

    line(100+x,370+y,112+x,400+y);

    line(100+x,370+y,150+x,370+y);

    line(150+x,370+y,163+x,400+y);

    floodfill(100+x,375+y,WHITE);

    //main-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,BROWN);

    line(88+x,400+y,163+x,400+y);

    line(100+x,370+y,112+x,400+y);

    line(100+x,370+y,150+x,370+y);

    line(150+x,370+y,163+x,400+y);

    floodfill(105+x,375+y,WHITE);

    //Side-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);

    line(112+x,400+y,112+x,440+y);

    line(88+x,440+y,112+x,440+y);

    line(88+x,400+y,88+x,440+y);

    line(112+x,440+y,163+x,440+y);

    floodfill(90+x,402+y,WHITE);

    //main-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTGREEN);

    line(163+x,400+y,163+x,440+y);

    line(112+x,440+y,163+x,440+y);

    line(112+x,400+y,112+x,440+y);

    line(88+x,400+y,163+x,400+y);

    floodfill(115+x,405+y,WHITE);

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(120+x,415+y,130+x,415+y);

    line(120+x,415+y,120+x,427+y);

    line(120+x,427+y,130+x,427+y);

    line(130+x,415+y,130+x,427+y);

    floodfill(125+x,421+y,WHITE);

    //window 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(120+w+x,415+y,130+w+x,415+y);

    line(120+w+x,415+y,120+w+x,427+y);

    line(120+w+x,427+y,130+w+x,427+y);

    line(130+w+x,415+y,130+w+x,427+y);

    floodfill(125+w+x,421+y,WHITE);

    //door

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTMAGENTA);

    line(94+x,440+y,94+x,420+y);

    line(106+x,440+y,106+x,420+y);

    line(94+x,420+y,106+x,420+y);

    floodfill(97+x,435+y,WHITE);

}



void river()

{

    setcolor(WHITE);





    setfillstyle(9,LIGHTCYAN);

    {

        bar(550,151,670,480);

        bar(500,200,650,480);

        bar(517,164,550,167);

        bar(527,160,550,164);

        bar(537,156,550,160);

        bar(543,152,550,156);

        bar(525,170,550,174);

        bar(511,177,550,183);

        bar(501,183,550,186);

        bar(494,186,550,190);

        bar(511,190,550,194);

        bar(502,194,550,196);

        bar(493,204,550,199);

        bar(487,203,550,208);

        bar(481,212,550,207);

        bar(473,211,550,217);

        bar(468,220,550,216);

        bar(493,227,550,224);

        bar(485,227,550,232);

        bar(478,235,550,231);

        bar(470,235,550,239);

        bar(463,243,550,238);

        bar(454,242,550,246);

        bar(450,245,550,250);

        bar(483,253,550,258);

        bar(476,261,550,257);

        bar(468,260,550,265);

        bar(460,269,550,264);

        bar(450,269,550,274);

        bar(442,278,550,273);

        bar(433,278,550,282);

        bar(425,286,550,281);

        bar(417,286,550,290);

        bar(476,293,550,298);

        bar(468,302,550,297);

        bar(462,301,550,306);

        bar(455,310,550,305);

        bar(449,309,550,314);

        bar(440,318,550,313);

        bar(433,317,550,322);

        bar(425,326,550,321);

        bar(418,325,550,330);

        bar(409,329,550,334);

        bar(407,336,550,333);

        bar(445,335,550,339);

        bar(464,347,550,342);

        bar(457,346,550,351);

        bar(448,356,550,350);

        bar(439,355,550,360);

        bar(427,366,550,359);

        bar(418,365,550,371);

        bar(408,375,550,370);

        bar(399,374,550,380);

        bar(448,382,550,379);

        bar(479,385,550,389);

        bar(473,388,550,392);

        bar(467,396,550,391);

        bar(461,395,550,401);

        bar(455,405,550,398);

        bar(445,404,550,410);

        bar(436,415,550,408);

        bar(426,414,550,420);

        bar(416,425,550,419);

        bar(406,424,550,431);

        bar(436,433,550,430);

        bar(469,432,550,437);

        bar(462,439,550,445);

        bar(452,450,550,443);

        bar(442,454,550,448);

        bar(434,453,550,457);

        bar(428,461,550,456);

        bar(420,460,550,466);

        bar(413,469,550,464);

        bar(406,467,550,473);

        bar(397,477,550,472);

        bar(392,475,550,480);

    }

}



void road()

{

    setfillstyle(9,RED);

    bar(0,423,390,500);

    bar(406,427,300,422);

    bar(401,425,300,430);

    bar(400,433,300,429);

    bar(455,434,300,432);

    bar(460,435,300,433);

    bar(465,434,300,437);

    bar(462,440,300,436);

    bar(458,439,300,445);

    bar(448,450,300,443);

    bar(438,454,300,448);

    bar(430,453,300,457);

    bar(424,461,300,456);

    bar(416,460,300,466);

    bar(405,469,300,464);

    bar(402,467,300,473);

    bar(393,477,300,472);

    bar(388,475,300,480);

    //small - road

    setfillstyle(1,RED);

    bar(0,210,160,220);

    bar(205,222,480,232);

    line(160,211,205,222);

    line(160,214,205,225);

    line(160,217,205,228);

    line(160,219,205,230);

}



void car()

{



        setfillstyle(SOLID_FILL, BLACK);

        bar(32+i,j-16,86+i,j);

        bar(40+i,j-10,90+i,j);

        setcolor(LIGHTBLUE);

        setfillstyle(SOLID_FILL, WHITE);

        //body

        line(i,j + 23, i, j);

        line(i, j, 40 + i, j - 20);

        line(40 + i,j - 20, 80 + i, j- 20);

        line(80 + i, j - 20, 100 + i, j);

        line(100 + i, j, 120 + i, j);

        line(120 + i, j, 120 + i, j + 23);

        line(0 + i, j + 23, 18 + i, j + 23);

        arc(30 + i, j+ 23, 0, 180, 12);

        line(42 + i, j + 23, 78 + i, j + 23);

        arc(90 + i, j+ 23, 0, 180, 12);

        line(102 + i, j + 23, 120 + i, j + 23);

        line(28 + i, j, 43 + i, j- 15);

        line(43 + i, j - 15, 57 + i, j - 15);

        line(57 + i, j - 15, 57 + i, j);

        line(57 + i, j, 28 + i, j);

        line(62 + i, j - 15, 77 + i, j - 15);

        line(77 + i, j - 15, 92 + i, j);

        line(92 + i, j, 62 + i, j);

        line(62 + i, j, 62 + i, j - 15);

        floodfill(2 + i, j + 20, LIGHTBLUE);

        setcolor(LIGHTGREEN);

        setfillstyle(SOLID_FILL, 3);

        //Wheels



        circle(30 + i  ,j + 25, 9);

        circle(90 + i , j + 25, 9);

        floodfill(30 + i, j + 25, LIGHTGREEN);

        floodfill(90 + i, j + 25, LIGHTGREEN);



}







void school()

{

    //terrace

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(480+k,104+l,490+k,85+l);

    line(490+k,85+l,595+k,85+l);

    line(585+k,104+l,595+k,85+l);

    line(480+k,104+l,585+k,104+l);

    floodfill(592+k,87+l,WHITE);

    //side Wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(585+k,106+l,595+k,86+l);

    line(585+k,145+l,595+k,126+l);

    line(586+k,106+l,586+k,145+l);

    line(595+k,127+l,595+k,86+l);

    floodfill(589+k,128+l,WHITE);

    //wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,3);

    rectangle(480+k,105+l,585+k,145+l);

    floodfill(482+k,107+l,WHITE);

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,3);

    line(560+k,105+l,560+k,145+l);

    floodfill(562+k,107+l,WHITE);

    //door 1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,5);

    rectangle(526+k+40,125+l,538+40+k,145+l);

    floodfill(530+k+40,130+l,WHITE);

    circle(536+k+40,138+l,1);

    //door 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,5);

    rectangle(526+k,125+l,538+k,145+l);

    floodfill(530+k,130+l,WHITE);

    circle(536+k,138+l,1);

    //window 2

    setcolor(WHITE);

    setfillstyle(1,LIGHTBLUE);

    rectangle(543+k,118+l,556+k,131+l);

    floodfill(545+k,122+l,WHITE);

    //door 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,5);

    rectangle(526-35+k,125+l,538-35+k,145+l);

    floodfill(530-35+k,130+l,WHITE);

    circle(536-35+k,138+l,1);

    //window 2

    setcolor(WHITE);

    setfillstyle(1,LIGHTBLUE);

    rectangle(543-35+k,118+l,556-35+k,131+l);

    floodfill(545-35+k,122+l,WHITE);

    setcolor(5);

    outtextxy(480+k,75+l,"Primary School");

}





void flag()

{

    setcolor(WHITE);

    rectangle(150+s,140+v,180+s,160+v);

    setfillstyle(1,GREEN);

    floodfill(153+s,144+v,WHITE);

    setcolor(WHITE);

    rectangle(148+s,138+v,150+s,200+v);

    setfillstyle(1,BLUE);

    floodfill(150+s,140+v,WHITE);

    setcolor(WHITE);

    circle(166+s,150+v,5);

    setfillstyle(1,RED);

    floodfill(168+s,152+v,WHITE);

}





void flower()

{

    for(O=0; O<=92; O+=22)

    {

        setcolor(YELLOW);

        setfillstyle(1,YELLOW);

        circle(134+O+X,165,5);

        floodfill(136+O+X,167,YELLOW);

        setcolor(YELLOW);

        setfillstyle(1,YELLOW);

        circle(140+O+X,170,5);

        floodfill(142+O+X,172,YELLOW);

        setcolor(YELLOW);

        setfillstyle(1,YELLOW);

        circle(143+O+X,163,5);

        floodfill(145+O+X,165,YELLOW);

        setcolor(RED);

        setfillstyle(1,RED);

        circle(139+O+X,166,3);

        floodfill(140+O+X,166,RED);

        setfillstyle(1,LIGHTGREEN);

        bar(139+O+X,174,141+O+X,190);

    }

    X=-1;

    for(O=0; O<=80; O+=22)

    {

        setcolor(YELLOW);

        setfillstyle(1,YELLOW);

        circle(134+O+X,165+Y,5);

        floodfill(136+O+X,167+Y,YELLOW);

        setcolor(YELLOW);

        setfillstyle(1,YELLOW);

        circle(140+O+X,170+Y,5);

        floodfill(142+O+X,172+Y,YELLOW);

        setcolor(YELLOW);

        setfillstyle(1,YELLOW);

        circle(143+O+X,163+Y,5);

        floodfill(145+O+X,165+Y,YELLOW);

        setcolor(RED);

        setfillstyle(1,RED);

        circle(139+O+X,166+Y,3);

        floodfill(140+O+X,166+Y,RED);

        setfillstyle(1,LIGHTGREEN);

        bar(139+O+X,174+Y,141+O+X,190+Y);

    }

}



int main() {
    int choice;
    //Choice List
    cout << "Name: Poretosh Chandra Das \n";
    cout << "ID: CSE2101022025 \n";
    cout << "Section: 22B \n";
    cout << "Course Title: Computer Graphics Sessional \n";
    cout << "---------------------------------------------- \n";
    cout << "\n";
    cout << "1: Line \n";
    cout << "2: Reatangle \n";
    cout << "3: Triangle \n";
    cout << "4: Square \n";
    cout << "5: Circle \n";
    cout << "6: Elips \n";
    cout << "7: Emoji \n";
    cout << "8: Sun \n";
    cout << "9: National Flag \n";
    cout << "10: House \n";
    cout << "11: Traffic Light \n";
    cout << "12: Wall Clock \n";
    cout << "13: Village Scenery \n";
    cout << "\n";

    cout << "Enter any Serial Number Form List: ";
    cin >> choice;



    switch(choice) {
        case 1:
            line();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            triangle();
            break;
        case 4:
            square();
            break;
        case 5:
            circle();
            break;
        case 6:
            elips();
            break;
        case 7:
            emoji();
            break;
        case 8:
            single_sun();
            break;
        case 9:
            nationalflag();
            break;
        case 10:
            house();
            break;
        case 11:
            trafficlight();
            break;
        case 12:
            wallclock();
            break;
            case 13:
            villagescenery();
            break;
        default:
            std::cout << "Invalid choice!";
            break;
    }

    return 0;
}
