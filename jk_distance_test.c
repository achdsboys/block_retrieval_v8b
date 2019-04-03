#include <kipr/botball.h>
void movetiny(void)
{
   
    
    mav(2,250);
    mav(3,250);
    msleep(500);
    ao();
}
void speed750(void)
{
    //clear_motor_position_counter(0);
    //clear_motor_position_counter(2);
	//printf("motor 0 pos = %d",get_motor_position_counter(0));
    mav(2,750);
    mav(3,750);
    msleep(3000);
    ao();
	//printf("at stop, motor 0 pos = %d",get_motor_position_counter(0));
} 
void speed500(void)
{
    //clear_motor_position_counter(0);
    //clear_motor_position_counter(2);
	//printf("motor 0 pos = %d",get_motor_position_counter(0));
    mav(2,500);
    mav(3,500);
    msleep(3000);
    ao();
	//printf("at stop, motor 0 pos = %d",get_motor_position_counter(0));
} 
void speed250(void)
{
    //clear_motor_position_counter(0);
    //clear_motor_position_counter(2);
	//printf("motor 0 pos = %d",get_motor_position_counter(0));
    mav(2,750);
    mav(3,250);
    msleep(2000);
    ao();
	//printf("at stop, motor 0 pos = %d",get_motor_position_counter(0));
} 



void move4in(void)
{
       
    
    
    mav(2,250);
    mav(3,250);
    msleep(1500);
    ao();
} 
void movelittleb(void)
{
    mav(2,-250);
    mav(3,-250);
    msleep(900);
    ao();
    msleep(1000);
} 
void movelittle(void)
{
    mav(2,250);
    mav(3,250);
    msleep(900);
    ao();
    msleep(1000);
} 
void moveccw(void)
{
    //  45 ccw
    mav(2,270);
    mav(3,-270);
    msleep(1650);
    
    ao();
}



void tinyccw(void)
{
    //  45 ccw
    mav(2,270);
    mav(3,-270);
    msleep(70);
    
    ao();
}
void movecw(void)
{
  mav(2,-270);
    mav(3,270);
    msleep(1650);
        ao();

}
 void moveback(void)
{
      mav(2,-250);
    mav(3,-250);
    msleep(1550);
    ao();
     
 }


void move4infaster(void)
{
    //clear_motor_position_counter(0);
    //clear_motor_position_counter(2);
	//printf("motor 0 pos = %d",get_motor_position_counter(0));
    mav(2,500);
    mav(3,500);
    msleep(750);
    ao();
	//printf("at stop, motor 0 pos = %d",get_motor_position_counter(0));
} 
int main()
{
 
 //distance test
 	printf("speed 750 for 3 seconds\n");
	speed750();
	
	msleep(10000);
	printf("speed 500 for 3 seconds\n");
	speed500();
	
	
	msleep(10000);
	printf("speed 250 for 3 seconds\n");
	speed250();	
	
 
 
 
/*
 shut_down_in(119);
    int close_cnt = 0;
    printf("Hello World\n");
    printf("Show Me Going");
    
    //move arm up
    enable_servo (2);
    set_servo_position (2,200);
    //open servo
     {    
       enable_servos(0);
            set_servo_position (0,900); 
            set_servo_position (0,1000);
   }
    
      //         move  forward until end of start box
                speed();
    //turn 90         
    moveccw();  moveccw();
    //expiramental
   // tinyccw();
           // move until a little b4 firetruck
                  speed(); speed();
   speed();movetiny(); 
  
    
    
             {
          //move servo down
                 enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,1050);
             }
     move4in();move4in();
   //turn to move firetruck away
    moveccw();movecw();
   //move close to firepole
    
            
  
  
      //      move until fire pole 
                 move4in();speed();movetiny();movelittle();movelittle();

set_servo_position (0,800); 
            set_servo_position (0,600);
//start copying 
  //drop block away
    moveback(); moveback();moveback(); movecw();movecw();
    {
          //move servo up
                 enable_servos(2);
                  
            set_servo_position (2,850);
             }
 
    move4in();move4in();
move4infaster();move4infaster();speed();move4infaster();movetiny();
      {
          //move servo up
                 enable_servos(2);
                  
            set_servo_position (2,850);
             }
 
//stop copying here

    //turn to ditect fire
    moveccw();moveccw();tinyccw();tinyccw();tinyccw();
    //moveback
    moveback();moveback();
    //insert camera code here
    
    //if med 1 is on fire
    //move arm up
    enable_servo (2);
    set_servo_position (2,200);
    speed();movetiny();movelittle();move4infaster();
      //open servo
     {    
       enable_servos(0);
            set_servo_position (0,1000); 
            set_servo_position (0,1200);
   }
    moveback();moveback();moveback();
    
    moveccw();moveccw();
    
    move4in();move4in();
speed();speed();movetiny();
    
    movecw();movecw();
     //move servo down
                 enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,950);
    
    speed();movelittle();
    set_servo_position (0,800); 
            set_servo_position (0,600);
     moveback(); moveback();movelittleb(); movecw();movecw();move4in();move4in();
speed();movelittle();movelittle();move4in();move4infaster();
    moveccw();moveccw();
    
      {    
       enable_servos(0);
            set_servo_position (0,1000); 
            set_servo_position (0,1200);
   }
    
    
    
    
 //sc   
    movelittleb();movelittleb();
    moveccw();moveccw();
     move4in();move4in();
speed();movelittle();movelittle();move4in();movetiny();movetiny();
    
    movecw();movecw();
     //move servo down
                 enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,950);
    
    move4in();move4in();movelittle();movelittle();movelittle();movelittle();movelittle();
    set_servo_position (0,800); 
            set_servo_position (0,600);
     moveback(); moveback();movelittleb(); movecw();movecw();move4infaster();move4infaster();
speed();movelittle();movelittle();movetiny();
set_servo_position (2,500);
move4in();movetiny();movetiny();
    moveccw();moveccw();
    
      {    
       enable_servos(0);
            set_servo_position (0,800); 
            set_servo_position (0,900);
   }
  //ec  
    movelittleb();movelittleb();
    moveccw();moveccw();
     move4in();move4in();
move4in();move4in();move4in();movelittle();movetiny();move4in();movetiny();movetiny();
    
    movecw();movecw();
     //move servo down
                 enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,950);
    
    move4in();move4in();movelittle();movelittle();movelittle();movelittle();movelittle();
    set_servo_position (0,800); 
            set_servo_position (0,600);
     moveback(); moveback();movelittleb(); movecw();movecw();move4in();move4in();
move4in();move4in();move4in();movelittle();movetiny();
set_servo_position (2,500);
move4in();movetiny();movetiny();
    moveccw();moveccw();
    
      {    
       enable_servos(0);
            set_servo_position (0,800); 
            set_servo_position (0,900);
   }
  //ec   
      movelittleb();movelittleb();
    moveccw();moveccw();
     move4in();move4in();
move4in();move4in();move4in();movelittle();movetiny();move4in();movetiny();movetiny();
    
    movecw();movecw();
     //move servo down
                 enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,950);
    
    move4in();move4in();movelittle();movelittle();movelittle();movelittle();movelittle();
    set_servo_position (0,800); 
            set_servo_position (0,600);
     moveback(); moveback();movelittleb(); movecw();movecw();move4in();move4in();
move4in();move4in();move4in();movelittle();movetiny();
set_servo_position (2,500);
move4in();movetiny();movetiny();
    moveccw();moveccw();
    
      {    
       enable_servos(0);
            set_servo_position (0,800); 
            set_servo_position (0,900);
   }
  //ec   
   while(1)
   {
    if(digital(4)==1)
        {
        printf("switch closed \n");
            printf("closes = %d \n", close_cnt);

// move4in();  code
            

     //        if ((close_cnt >1) && (close_cnt < 3 ))
             {
            enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,950);
             }
            
  // if ((close_cnt >20) && (close_cnt < 22 ))   
   {    
       enable_servos(0);
            set_servo_position (0,800); 
            set_servo_position (0,1000);
   }
      //       if ((close_cnt >22) && (close_cnt < 25 )) 
                 move4in();move4in();movelittle();
           //   if ((close_cnt >24) && (close_cnt < 26 ))   
   {    
       
            set_servo_position (0,800); 
            set_servo_position (0,600);
              }
      //       if ((close_cnt >25) && (close_cnt < 27) )
                moveback();
        
        close_cnt++;
        }
       msleep(150);
       printf("closes = %d \n", close_cnt);
       camera_close();
      
   }
  */  
    return 0;
}


