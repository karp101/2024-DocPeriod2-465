#include <kipr/wombat.h>

int main()
{
    //setup - 7.5cm from bottom black line, 7.5cm from front pipe, against left pipe, plow goes along black line
    create3_connect();
    set_servo_position(0,1000); 	//moves "dump truck" out of the way (prevents collisions later on)
    create3_drive_straight(-0.25,0.46); //moves out of box
    create3_wait(); 	
    
    //pom collection
    create3_rotate_degrees(33,90);
    create3_wait(); 	
    create3_drive_straight(-0.3,0.46); 	//collects poms in plow
    create3_wait();	
    
    //pom movement
    create3_rotate_degrees(67,90);
    create3_wait();
    create3_drive_straight(-0.4,0.46); 	
    create3_wait();
    create3_rotate_degrees(65,90);  //sets up poms to be placed in top left box
    create3_wait();
    
    //pom deposit
    create3_drive_straight(-0.2,0.46); //moves poms to top left box 
    create3_wait();
    create3_drive_straight(0.3,0.46); //deposits poms in top left box
    create3_wait();
    
    
    //rock collection
	create3_rotate_degrees(188,90);
    create3_wait();
	create3_rotate_degrees(-14,90);	//turns to face and collects first rock (why is the create_wait missing)
    create3_drive_straight(-0.18,0.46); //collects rocks in the row
    create3_wait(); 
    set_servo_position(0,300); //sets up dump truck for later
    create3_rotate_degrees(-39,90);
    create3_wait();
    create3_drive_straight(-0.34,0.46);
    create3_wait();
    create3_rotate_degrees(45,90);	
    create3_wait();  
    create3_drive_straight(-0.4,0.46);
    create3_wait();
    create3_rotate_degrees(65,90);	//collects the rest of the rocks and sets up to place in rock heap
    
    //rock deposit
    create3_wait();
    create3_drive_straight(-0.52,0.46); 
    create3_wait();
     create3_drive_straight(0.43,0.46); //drives into and sets rocks in rock heap
    create3_wait();
    
    //fuel rods
	create3_rotate_degrees(-45,90);
    create3_wait();
    create3_drive_straight(0.43,0.46);
    create3_wait();
    create3_rotate_degrees(45,90); //aligns to collect fuel rods
    create3_wait();
    create3_drive_straight(-0.46,0.46); 
    create3_wait();
    create3_drive_straight(0.46,0.46); //collects and places fuel rods in box
    create3_wait();
    msleep(10000);

    return 0;
}
