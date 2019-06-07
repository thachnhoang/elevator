//Thach Hoang, 1001299053, HW3 
 #include "elevator.h"

 void Elevator::goto_floor(int floor) {
	 if (floor < 0 || floor > top_floor)
	 {
		 throw Invalid_floor{};
	 }
	 else
	 {
		 desired_floor = floor;
	 }
 }

 void Elevator::move() {
	 if (has_arrived())
	 {
		 idle = true;
	 }
	 else if (desired_floor > current_floor)
	 {
		 current_floor += 1;
		 going_up = true;
		 idle = false;
	 }
	 else
	 {
		 current_floor -= 1;
		 going_up = false;
		 idle = false;
	 }
 }

 int Elevator::get_current_floor() {
	 return current_floor;
 }

 int Elevator::get_desired_floor() {
	 return desired_floor;
 }

 bool Elevator::is_going_up() {
	 return going_up;
 }

 bool Elevator::has_arrived() {
	 if (current_floor == desired_floor)
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
 }

 bool Elevator::is_idle() {
	 return idle;
 }

