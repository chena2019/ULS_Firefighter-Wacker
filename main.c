void drive_forward();
void drive_backward();
int main()
{
    //jig
    clear_motor_position_counter(1);
    while (get_motor_position_counter(1)> -6121)
    {
        motor (1,-647);
    }
    ao();
    motor(0,-45);
    motor(3,45);
    msleep(500);
    motor(0,-50);
    motor(3,-50);
    msleep(500);
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    enable_servos();
    set_servo_position(3,0);
    msleep(1000);
    ao();
    wait_for_light(3);
    //shut_down_in(120);
    
 //program 
    //out of start box
    drive_forward();
    msleep(1000);
     motor(0,45);
    motor(3,-45);
    msleep(1200);
    drive_forward();
    msleep(4800);
    ao();
  
    //turn to the zone
    motor(0,45);
    motor(3,-45);
    msleep(1200);
	drive_forward();
    msleep(500);
    ao();
    
    //drop the claw and open
     enable_servos();
    set_servo_position(3,1000);
    msleep(1000);
    clear_motor_position_counter(1);
    while (get_motor_position_counter(1)< 6900)
    {
        motor (1,200);
    }
    ao();
    //facing block
	drive_backward();
    //towards crates
    drive_backward();
    ao();
    //inching
    motor(0,-50);
    motor(3,-50);
    msleep(1300);
    ao();
    //grab
    enable_servos();
    set_servo_position(3,0);
    msleep(1000);
    //wait for create
    drive_forward();
    ao();
    //lift
    clear_motor_position_counter(1);
    while (get_motor_position_counter(1)> -6121)
    {
        motor (1,-647);
    }
    ao();
    motor(0,45);
    motor(3,-45);
    msleep(2500);
    //drop the claw
    clear_motor_position_counter(1);
    while (get_motor_position_counter(1)< 6900)
    {
        motor (1,200);
    }
    ao();
    enable_servos(0); 
    set_servo_position(3,1000);
    msleep(1000);
    //out of Create Way
    drive_backward();
    msleep(2000);
    drive_forward();
	motor(0,45);
    motor(3,-45);
    msleep(1000);
    drive_backward();
    msleep(3000);
    ao();
    
return 0;
}
void drive_forward ()
{
	motor(0,100);
    motor(3,100);
    msleep(1000);
 }
void drive_backward ()
{
	motor(0,-100);
    motor(3,-100);
    msleep(1000);
 }




