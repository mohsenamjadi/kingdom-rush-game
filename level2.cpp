#include "rsdl.hpp"
#include <iostream>

using namespace std;

int const max_width = 800;
int const max_height = 800;

Window myGame(max_width,max_height);
bool towerLocation(int ,int ,int& ); 
void wave1();
void wave3();
void wave4();


int main() {   
  Event event;
  bool orc4 = false;
  myGame.draw_png("level2-map.png", 0, 0, 800, 800); 
  //myGame.draw_png("left.png",800,250,50,50);  // initial cordinates for set_cordinate function
  //myGame.update_screen();
  bool tower1=false,tower2=false,tower3=false,tower4=false,tower5=false,tower6=false,tower7=false,tower8=false;bool validT1= false,validT2= false,validT3= false,validT4= false,validT5= false,validT6= false,validT7= false,validT8= false;
  //myGame.fill_rect(0, 0, 200, 50, BLACK);  
 // myGame.show_text("HEALTH : 15", 0, 0, RED, "FreeSans.ttf", 14);
  myGame.update_screen();

  //Delay(5000);
 wave1();
  //Delay(15000);
  //wave1();
  //Delay(4000);
  //wave1();
  //Delay(44000);
  //wave3();
  //wave4();



  while(true) {
  Event event = myGame.pollForEvent();



  int mouse_x_location;
  int mouse_y_location;

  if(event.type() == KEY_PRESS ) {
    if(tower1==true && validT1==false) {
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
               case 'a' : {myGame.draw_png("archer.png",425,220,100,80); myGame.update_screen(); validT1 = true; break;}
               case 'c' : {myGame.draw_png("canon.png",435,240,100,80); myGame.update_screen(); validT1 = true; break;}
               case 'm' : {myGame.draw_png("mage.png",425,225,100,80); myGame.update_screen(); validT1 = true; break;}

            }
        }
    if(tower2==true && validT2==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",340,220,100,80); myGame.update_screen(); validT2 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",350,240,100,80); myGame.update_screen(); validT2 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",340,225,100,80); myGame.update_screen(); validT2 = true; break;}

            }
        }
    if(tower3==true && validT3==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
             switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",250,220,100,80); myGame.update_screen(); validT3 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",260,240,100,80); myGame.update_screen(); validT3 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",250,225,100,80); myGame.update_screen(); validT3 = true; break;}

            }
        }
    if(tower4==true && validT4==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
             switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",455,368,100,80); myGame.update_screen(); validT4 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",465,383,100,80); myGame.update_screen(); validT4 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",455,368,100,80); myGame.update_screen(); validT4 = true; break;}

            }
        }
    if(tower5==true && validT5==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",355,368,100,80); myGame.update_screen(); validT5 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",365,383,100,80); myGame.update_screen(); validT5 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",355,368,100,80); myGame.update_screen(); validT5 = true; break;}

            }
        }
    if(tower6==true && validT6==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",425,510,100,80); myGame.update_screen(); validT6 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",435,530,100,80); myGame.update_screen(); validT6 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",425,510,100,80); myGame.update_screen(); validT6 = true; break;}

            }
        }
    if(tower7==true && validT7==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
             switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",325,510,100,80); myGame.update_screen(); validT7 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",335,530,100,80); myGame.update_screen(); validT7 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",325,510,100,80); myGame.update_screen(); validT7 = true; break;}

            }
        }
    if(tower8==true && validT8==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",535,560,100,80); myGame.update_screen(); validT8 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",545,580,100,80); myGame.update_screen(); validT8 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",535,560,100,80); myGame.update_screen(); validT8 = true; break;}

            }
        }
      }
  if(event.type() == LCLICK ) {
    int N=0;
    mouse_x_location = event.mouseX();
    mouse_y_location = event.mouseY();
    cout<<mouse_x_location<<'\t'<<mouse_y_location<<endl;  // for debbuging
    if(towerLocation(mouse_x_location,mouse_y_location,N))
    {
        if(N==1){tower1 = true;}
        if(N==2){tower2 = true;}
        if(N==3){tower3 = true;}
        if(N==4){tower4 = true;}
        if(N==5){tower5 = true;}
        if(N==6){tower6 = true;}
        if(N==7){tower7 = true;}
        if(N==8){tower8 = true;}
    }
  }
  
     if(event.type() == QUIT)
    {
      break;
    }

  }
}




void wave1(){

  float x;
  float y;


  for(y = 20 ; y<=195 ; y+=0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-front.png",470,y,30,30);
    myGame.draw_png("w-front.png",480,y,30,30);
    myGame.draw_png("w-front.png",495,y,30,30);
    myGame.draw_png("w-front.png",510,y,30,30);

    myGame.update_screen();
    Delay(1);
  }

  for( x=495 ; x>=230 ; x-=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-left.png",x,165,30,30);
    myGame.draw_png("w-left.png",x,175,30,30);
    myGame.draw_png("w-left.png",x-=.001,190,30,30);
    myGame.draw_png("w-left.png",x,205,30,30);

    myGame.update_screen();
    Delay(1);
  }


  for(y = 225 ; y <= 330 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-right.png",185,y,30,30);
    myGame.draw_png("w-right.png",195,y,30,30);
    myGame.draw_png("w-right.png",210,y,30,30);
    myGame.draw_png("w-right.png",225,y,30,30);

    myGame.update_screen();
    Delay(1);}

  for( x=250 ; x<=565 ; x+=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-left.png",x,320,30,30);
    myGame.draw_png("w-left.png",x-=.001,335,30,30);
    myGame.draw_png("w-left.png",x,350,30,30);
    myGame.update_screen();
    Delay(1);
  }




  for(y = 360 ; y <= 480 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-front.png",565,y,30,30);
    myGame.draw_png("w-front.png",580,y,30,30);
    myGame.draw_png("w-front.png",595,y,30,30);
    myGame.draw_png("w-front.png",605,y,30,30);

    myGame.update_screen();
    Delay(1);
  }


   for( x=560 ; x>=310 ; x-=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-left.png",x,465,30,30);
    myGame.draw_png("w-left.png",x-=.001,480,30,30);
    myGame.draw_png("w-left.png",x,495,30,30);
    myGame.draw_png("w-left.png",x,485,30,30);

    myGame.update_screen();
    Delay(1);
  }

  for(y = 485 ; y <= 630 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-front.png",310,y,30,30);
    myGame.draw_png("w-front.png",295,y,30,30);
    myGame.draw_png("w-front.png",280,y,30,30);
    myGame.draw_png("w-front.png",290,y,30,30);

    myGame.update_screen();
    Delay(1);
  }

   for( x=295 ; x<=545 ; x+=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-right.png",x,600,30,30);
    myGame.draw_png("w-right.png",x+=.001,615,30,30);
    myGame.draw_png("w-right.png",x,630,30,30);
    myGame.draw_png("w-right.png",x,640,30,30);

    myGame.update_screen();
    Delay(1);
  }

   for(y = 650 ; y <= 785 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("w-front.png",500,y,30,30);
    myGame.draw_png("w-front.png",515,y,30,30);
    myGame.draw_png("w-front.png",530,y,30,30);
    myGame.draw_png("w-front.png",540,y,30,30);

    myGame.update_screen();
    Delay(1);
  }

  }

/*





   for( x=480 ; x>=380 ; x-=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,525,30,30);
    myGame.draw_png("left.png",x-=.001,545,30,30);
    myGame.draw_png("left.png",x,560,30,30);
    myGame.update_screen();
    Delay(1);
  }

  }*/


/*


void wave1(){


  float x;
  float y;
  for( x=750 ; x>=550 ; x-=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,250,30,30);
    myGame.draw_png("left.png",x-=.001,265,30,30);
    myGame.draw_png("left.png",x,285,30,30);
    myGame.update_screen();
    Delay(1);
  }

  for(y = 250 ; y>=135 ; y-=0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("back.png",530,y,30,30);
    myGame.draw_png("back.png",545,y,30,30);
    myGame.draw_png("back.png",560,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

  for( x=550 ; x>=420 ; x-=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,125,30,30);
    myGame.draw_png("left.png",x-=.001,140,30,30);
    myGame.draw_png("left.png",x,155,30,30);
    myGame.update_screen();
    Delay(1);
  }




  for(y = 135 ; y <= 270 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("front.png",400,y,30,30);
    myGame.draw_png("front.png",415,y,30,30);
    myGame.draw_png("front.png",425,y,30,30);
    myGame.update_screen();
    Delay(1);
  }


   for( x=390 ; x>=240 ; x-=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,275,30,30);
    myGame.draw_png("left.png",x-=.001,290,30,30);
    myGame.draw_png("left.png",x,305,30,30);
    myGame.update_screen();
    Delay(1);
  }



  for(y = 330 ; y <= 410 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("front.png",234,y,30,30);
    myGame.draw_png("front.png",220,y,30,30);
    myGame.draw_png("front.png",200,y,30,30);
    myGame.update_screen();
    Delay(1);
  }


   float z1 = 425;
   float z2 = 440;
   for( x=250 ; x<=480 ; x+=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("right.png",x,410,30,30);
    myGame.draw_png("right.png",x+=.001,z1-=0.001,30,30);
    myGame.draw_png("right.png",x,z2-=0.01,30,30);
    myGame.update_screen();
    Delay(1);
  }


  z1=515;
  for(y = 435 ; y <= 535 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("front.png",475,y,30,30);
    myGame.draw_png("front.png",495,y,30,30);
    myGame.draw_png("front.png",z1-=0.009,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

   for( x=480 ; x>=380 ; x-=0.043){
    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,525,30,30);
    myGame.draw_png("left.png",x-=.001,545,30,30);
    myGame.draw_png("left.png",x,560,30,30);
    myGame.update_screen();
    Delay(1);
  }

   for(y = 565 ; y <= 800 ; y = y + 0.043){

    myGame.draw_png("level2-map.png",0,0,800,800);
    myGame.draw_png("front.png",340,y,30,30);
    myGame.draw_png("front.png",360,y,30,30);
    myGame.draw_png("front.png",370,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

  }

*/


bool towerLocation(int x,int y,int& N) {
  if(x<500 && x>450 && y<300 && y>256){  
    N = 1;
  return true;
  }
   if(x<425 && x>360 && y<300 && y>265){
    N = 2;
    return true;
  }
   if(x<335 && x>275 && y<300 && y>265){
    N = 3;
    return true;
  }
   if(x<535 && x>475 && y<440 && y>410){
    N = 4;
    return true;
  }
   if(x<435 && x>375 && y<440 && y>410){
    N = 5;
    return true;
  }
   if(x<510 && x>450 && y<575 && y>540){
    N = 6;
    return true;
  }
   if(x<410 && x>350 && y<575 && y>540){
    N = 7;
    return true;
  }
   if(x<620 && x>560 && y<625 && y>590){
    N = 8;
    return true;
  }
  else return false;
}






/*


void wave3(){


  float x;
  float y;
  for( x=750 ; x>=550 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-left.png",x,250,30,30);
    myGame.draw_png("ar-left.png",x,285,30,30);
    myGame.update_screen();
    Delay(1);
  }

  for(y = 250 ; y>=135 ; y-=0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-back.png",530,y,30,30);
    myGame.draw_png("ar-back.png",545,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

  for( x=550 ; x>=420 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-left.png",x,125,30,30);
    myGame.draw_png("ar-left.png",x,155,30,30);
    myGame.update_screen();
    Delay(1);
  }




  for(y = 135 ; y <= 270 ; y = y + 0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-front.png",400,y,30,30);
    myGame.draw_png("ar-front.png",415,y,30,30);
    myGame.update_screen();
    Delay(1);
  }


   for( x=390 ; x>=240 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-left.png",x,275,30,30);
    myGame.draw_png("ar-left.png",x,305,30,30);
    myGame.update_screen();
    Delay(1);
  }



  for(y = 330 ; y <= 410 ; y = y + 0.43){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-front.png",234,y,30,30);
    myGame.draw_png("ar-front.png",220,y,30,30);
    myGame.update_screen();
    Delay(1);
  }


   float z1 = 425;
   float z2 = 440;
   for( x=250 ; x<=480 ; x+=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-right.png",x,410,30,30);
    myGame.draw_png("ar-right.png",x,425,30,30);
    myGame.update_screen();
    Delay(1);
  }


  z1=515;
  for(y = 435 ; y <= 535 ; y = y + 0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-front.png",475,y,30,30);
    myGame.draw_png("ar-front.png",495,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

   for( x=480 ; x>=380 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-left.png",x,525,30,30);
    myGame.draw_png("ar-left.png",x,560,30,30);
    myGame.update_screen();
    Delay(1);
  }

   for(y = 565 ; y <= 800 ; y = y + 0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("ar-front.png",340,y,30,30);
    myGame.draw_png("ar-front.png",360,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

  }




void wave4(){


  float x;
  float y;
  for( x=750 ; x>=550 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,250,30,30);
    myGame.draw_png("left.png",x-=20,250,30,30);
    myGame.draw_png("ar-left.png",x-=20,285,30,30);
    myGame.draw_png("left.png",x,285,30,30);
    myGame.update_screen();
    Delay(1000);
  }

  for(y = 250 ; y>=135 ; y-=0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("back.png",530,y,30,30);
    myGame.draw_png("back.png",530,y-=10,30,30);
    myGame.draw_png("back.png",560,y-=10,30,30);
    myGame.draw_png("ar-back.png",560,y,30,30);

    myGame.update_screen();
    Delay(10);
  }

  for( x=550 ; x>=420 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,125,30,30);
    myGame.draw_png("left.png",x-=10,140,30,30);
    myGame.draw_png("left.png",x,155,30,30);
    myGame.update_screen();
    Delay(100);
  }




  for(y = 135 ; y <= 270 ; y = y + 0.43){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",400,y,30,30);
    myGame.draw_png("front.png",415,y,30,30);
    myGame.draw_png("front.png",425,y,30,30);
    myGame.update_screen();
    Delay(10);
  }


   for( x=390 ; x>=240 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,275,30,30);
    myGame.draw_png("left.png",x-=10,290,30,30);
    myGame.draw_png("left.png",x,305,30,30);
    myGame.update_screen();
    Delay(100);
  }



  for(y = 330 ; y <= 410 ; y = y + 0.43){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",234,y,30,30);
    myGame.draw_png("front.png",220,y,30,30);
    myGame.draw_png("front.png",200,y,30,30);
    myGame.update_screen();
    Delay(10);
  }


   float z1 = 425;
   float z2 = 440;
   for( x=250 ; x<=480 ; x+=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("right.png",x,410,30,30);
    myGame.draw_png("right.png",x+=10,z1-=1,30,30);
    myGame.draw_png("right.png",x,z2-=1,30,30);
    myGame.update_screen();
    Delay(100);
  }


  z1=515;
  for(y = 435 ; y <= 535 ; y = y + 0.43){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",475,y,30,30);
    myGame.draw_png("front.png",495,y,30,30);
    myGame.draw_png("front.png",z1-=0.15,y,30,30);
    myGame.update_screen();
    Delay(10);
  }

   for( x=480 ; x>=380 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,525,30,30);
    myGame.draw_png("left.png",x-=10,545,30,30);
    myGame.draw_png("left.png",x,560,30,30);
    myGame.update_screen();
    Delay(100);
  }

   for(y = 565 ; y <= 800 ; y = y + 0.43){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",340,y,30,30);
    myGame.draw_png("front.png",360,y,30,30);
    myGame.draw_png("front.png",370,y,30,30);
    myGame.update_screen();
    Delay(10);
  }

  }




*/




