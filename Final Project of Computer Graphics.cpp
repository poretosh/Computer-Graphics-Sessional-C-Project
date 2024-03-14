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

void sun () {

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

void house () {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw house body
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    rectangle(200, 300, 400, 450);
    floodfill(300, 400, LIGHTBLUE);

    // Draw roof
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    line(200, 300, 300, 200);
    line(300, 200, 400, 300);
    line(400, 300, 200, 300);
    floodfill(300, 250, RED);

    // Draw door
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(270, 380, 330, 450);
    floodfill(280, 400, BROWN);

    // Draw window
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    rectangle(240, 320, 290, 370);
    floodfill(250, 330, YELLOW);

    // Display text
    setcolor(WHITE);
    outtextxy(250, 470, "My House");

    getch();
    closegraph();

}

//Traffic Light

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
            sun();
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
        default:
            std::cout << "Invalid choice!";
            break;
    }

    return 0;
}
