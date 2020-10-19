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
  myGame.draw_png("level1-map.png", 0, 0, 800, 800); 
  myGame.draw_png("left.png",800,250,50,50);  // initial cordinates for set_cordinate function
  //myGame.update_screen();
  bool tower1=false,tower2=false,tower3=false,tower4=false,tower5=false,tower6=false,tower7=false,tower8=false;bool validT1= false,validT2= false,validT3= false,validT4= false,validT5= false,validT6= false,validT7= false,validT8= false;
  myGame.fill_rect(0, 0, 200, 50, BLACK);  
 // myGame.show_text("HEALTH : 15", 0, 0, RED, "FreeSans.ttf", 14);
  myGame.update_screen();

  //Delay(5000);
 //wave1();
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
               case 'a' : {myGame.draw_png("archer.png",430,160,100,80); myGame.update_screen(); validT1 = true; break;}
               case 'c' : {myGame.draw_png("canon.png",440,170,100,80); myGame.update_screen(); validT1 = true; break;}
               case 'm' : {myGame.draw_png("mage.png",435,168,100,80); myGame.update_screen(); validT1 = true; break;}

            }
        }
    if(tower2==true && validT2==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",290,180,100,80); myGame.update_screen(); validT2 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",290,190,100,80); myGame.update_screen(); validT2 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",290,180,100,80); myGame.update_screen(); validT2 = true; break;}

            }
        }
    if(tower3==true && validT3==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
             switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",90,290,100,80); myGame.update_screen(); validT3 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",95,305,100,80); myGame.update_screen(); validT3 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",90,300,100,80); myGame.update_screen(); validT3 = true; break;}

            }
        }
    if(tower4==true && validT4==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
             switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",240,315,100,80); myGame.update_screen(); validT4 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",255,330,100,80); myGame.update_screen(); validT4 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",240,315,100,80); myGame.update_screen(); validT4 = true; break;}

            }
        }
    if(tower5==true && validT5==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",375,430,100,80); myGame.update_screen(); validT5 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",380,450,100,80); myGame.update_screen(); validT5 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",380,435,100,80); myGame.update_screen(); validT5 = true; break;}

            }
        }
    if(tower6==true && validT6==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",300,460,100,80); myGame.update_screen(); validT6 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",300,475,100,80); myGame.update_screen(); validT6 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",300,460,100,80); myGame.update_screen(); validT6 = true; break;}

            }
        }
    if(tower7==true && validT7==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
             switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",470,520,100,80); myGame.update_screen(); validT7 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",480,530,100,80); myGame.update_screen(); validT7 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",480,530,100,80); myGame.update_screen(); validT7 = true; break;}

            }
        }
    if(tower8==true && validT8==false){ 
            char pressedChar;
            pressedChar = event.pressedKey();
            switch(pressedChar){
                case 'a' : {myGame.draw_png("archer.png",380,570,100,80); myGame.update_screen(); validT8 = true; break;}
                case 'c' : {myGame.draw_png("canon.png",390,585,100,80); myGame.update_screen(); validT8 = true; break;}
                case 'm' : {myGame.draw_png("mage.png",385,570,100,80); myGame.update_screen(); validT8 = true; break;}

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
  for( x=750 ; x>=550 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,250,30,30);
    myGame.draw_png("left.png",x-=.001,265,30,30);
    myGame.draw_png("left.png",x,285,30,30);
    myGame.update_screen();
    Delay(1);
  }

  for(y = 250 ; y>=135 ; y-=0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("back.png",530,y,30,30);
    myGame.draw_png("back.png",545,y,30,30);
    myGame.draw_png("back.png",560,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

  for( x=550 ; x>=420 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,125,30,30);
    myGame.draw_png("left.png",x-=.001,140,30,30);
    myGame.draw_png("left.png",x,155,30,30);
    myGame.update_screen();
    Delay(1);
  }




  for(y = 135 ; y <= 270 ; y = y + 0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",400,y,30,30);
    myGame.draw_png("front.png",415,y,30,30);
    myGame.draw_png("front.png",425,y,30,30);
    myGame.update_screen();
    Delay(1);
  }


   for( x=390 ; x>=240 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,275,30,30);
    myGame.draw_png("left.png",x-=.001,290,30,30);
    myGame.draw_png("left.png",x,305,30,30);
    myGame.update_screen();
    Delay(1);
  }



  for(y = 330 ; y <= 410 ; y = y + 0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",234,y,30,30);
    myGame.draw_png("front.png",220,y,30,30);
    myGame.draw_png("front.png",200,y,30,30);
    myGame.update_screen();
    Delay(1);
  }


   float z1 = 425;
   float z2 = 440;
   for( x=250 ; x<=480 ; x+=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("right.png",x,410,30,30);
    myGame.draw_png("right.png",x+=.001,z1-=0.001,30,30);
    myGame.draw_png("right.png",x,z2-=0.01,30,30);
    myGame.update_screen();
    Delay(1);
  }


  z1=515;
  for(y = 435 ; y <= 535 ; y = y + 0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",475,y,30,30);
    myGame.draw_png("front.png",495,y,30,30);
    myGame.draw_png("front.png",z1-=0.009,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

   for( x=480 ; x>=380 ; x-=0.043){
    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("left.png",x,525,30,30);
    myGame.draw_png("left.png",x-=.001,545,30,30);
    myGame.draw_png("left.png",x,560,30,30);
    myGame.update_screen();
    Delay(1);
  }

   for(y = 565 ; y <= 800 ; y = y + 0.043){

    myGame.draw_png("level1-map.png",0,0,800,800);
    myGame.draw_png("front.png",340,y,30,30);
    myGame.draw_png("front.png",360,y,30,30);
    myGame.draw_png("front.png",370,y,30,30);
    myGame.update_screen();
    Delay(1);
  }

  }




bool towerLocation(int x,int y,int& N) {
  if(x<510 && x>450 && y<240 && y>190){  
    N = 1;
  return true;
  }
   if(x<360 && x>315 && y<240 && y>209){
    N = 2;
    return true;
  }
   if(x<170 && x>120 && y<360 && y>325){
    N = 3;
    return true;
  }
   if(x<325 && x>270 && y<385 && y>350){
    N = 4;
    return true;
  }
   if(x<450 && x>400 && y<500 && y>470){
    N = 5;
    return true;
  }
   if(x<375 && x>325 && y<525 && y>495){
    N = 6;
    return true;
  }
   if(x<550 && x>500 && y<595 && y>560){
    N = 7;
    return true;
  }
   if(x<460 && x>415 && y<635 && y>605){
    N = 8;
    return true;
  }
  else return false;
}









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









