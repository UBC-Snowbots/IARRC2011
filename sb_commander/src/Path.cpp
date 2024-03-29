/*
Navigation 1.4

Code used during Robot Racing 2011 Competition

Name: Edward Han
Date: July 23, 2011

*/
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Path.h"
#include "ConeLocation.h"

using namespace std;

Path::Path()
{

	my_second = 1000000;

	left.distance = 5;
	left.angle = 0;
	
	right.distance = 5;
	right.angle = 0;

	front.distance = 5;
	front.angle = 0;

	stopFlag = false;
	adjustFlag = false;
	dragStopFlag = false;

	//ReadValues();
	
	
	blizzard_steering = 1; 
	speed = 1; //0.08; //0.12
	speed_adjust = 0; //0.01
	stopCount = 0;
	drag_race = 0; // 1 for drag race, 0 for circuit race

	steering = 0.55; //0.65 
	steering_adjust = 0.1;
	front_max = 3.15;
	front_min = 1.75; //turn left and right distance 1.65
	front_col = 0.1; // turn backwards distance
	distance_inc = 1;

	drag_front_max = 3;
	drag_front_min = 1.5;
	drag_tolerance = 0.3;
	drag_speed = 0.14;
	drag_steering = 0.10;
	drag_brake = 0.05; 
	
}


void Path::ReadValues()
{
	string item, line;
	int row = 0;
	int col = 0;
	ifstream inFile ("config.txt");

	while (getline(inFile, line))
	{
		istringstream linestream(line);

		while (getline (linestream, item, ','))
		{
			
			constants[row][col] = item;
			col++;
		}
		col = 0;
		row++;
	}
	AssignValues();
	
}

void Path::AssignValues()
{
	
	for (int i = 0; i < 30; i++)
	{
		if (constants[i][0] == "blizzard_steering")
		{
			istringstream ss(constants[i][1]);
			ss >> blizzard_steering;
			cout << "blizzard_steering: " << blizzard_steering << endl;
		}
		else if (constants[i][0] == "speed")
		{
			istringstream ss(constants[i][1]);
			ss >> speed;
			cout << "speed            : " << speed << endl;
		}
		else if (constants[i][0] == "speed_adjust")
		{
			istringstream ss(constants[i][1]);
			ss >> speed_adjust;
			cout << "speed_adjust     : " << speed_adjust << endl;
		}
		else if (constants[i][0] == "stopCount")
		{
			istringstream ss(constants[i][1]);
			ss >> stopCount;
			cout << "stopCount        : " << stopCount << endl;
		}
		else if (constants[i][0] == "drag_race")
		{
			istringstream ss(constants[i][1]);
			ss >> drag_race;
			cout << "drag_race        : " << drag_race << endl;
		}
		else if (constants[i][0] == "steering")
		{
			istringstream ss(constants[i][1]);
			ss >> steering;
			cout << "steering         : " << steering << endl;
		}
		else if (constants[i][0] == "steering_adjust")
		{
			istringstream ss(constants[i][1]);
			ss >> steering_adjust;
			cout << "steering_adjust  : " << steering_adjust << endl;
		}
		else if (constants[i][0] == "front_max")
		{
			istringstream ss(constants[i][1]);
			ss >> front_max;
			cout << "front_max        : " << front_max << endl;
		}
		else if (constants[i][0] == "front_min")
		{
			istringstream ss(constants[i][1]);
			ss >> front_min;
			cout << "front_min        : " << front_min << endl;
		}
		else if (constants[i][0] == "front_col")
		{
			istringstream ss(constants[i][1]);
			ss >> front_col;
			cout << "front_col        : " << front_col << endl;
		}
		else if (constants[i][0] == "distance_inc")
		{
			istringstream ss(constants[i][1]);
			ss >> distance_inc;
			cout << "distance_inc     : " << distance_inc << endl;
		}
		else if (constants[i][0] == "drag_front_max")
		{
			istringstream ss(constants[i][1]);
			ss >> drag_front_max;
			cout << "drag_front_max   : " << drag_front_max << endl;
		}
		else if (constants[i][0] == "drag_front_min")
		{
			istringstream ss(constants[i][1]);
			ss >> drag_front_min;
			cout << "drag_front_min   : " << drag_front_min << endl;
		}
		else if (constants[i][0] == "drag_tolerance")
		{
			istringstream ss(constants[i][1]);
			ss >> drag_tolerance;
			cout << "drag_tolerance   : " << drag_tolerance << endl;
		}
		else if (constants[i][0] == "drag_speed")
		{
			istringstream ss(constants[i][1]);
			ss >> drag_speed;
			cout << "drag_speed       : " << drag_speed << endl;
		}
		else if (constants[i][0] == "drag_steering")
		{
			istringstream ss(constants[i][1]);
			ss >> drag_steering;
			cout << "drag_steering    : " << drag_steering << endl;
		}
		else if (constants[i][0] == "drag_brake")
		{
			istringstream ss(constants[i][1]);
			ss >> drag_brake;
			cout << "drag_brake       : " << drag_brake << endl;
		}
	
		
	}
}
//---------------Point-------------------

void Path::FindClosestPoint(vector<Cone> _left, vector<Cone> _front, vector<Cone> _right)
{
	for (unsigned int i = 0; i < _left.size(); i++)	
	{
		if (_left[i].distance < left.distance)
		{
			left.distance = _left[i].distance;
			left.angle = _left[i].angle;
		}
	}
		
	for (unsigned int i = 0; i < _front.size(); i++)
	{
		if (_front[i].distance < front.distance)
		{	
			front.distance = _front[i].distance;
			front.angle = _front[i].angle;
		}
	}

	for (unsigned int i = 0; i < _right.size(); i++)
	{
		if (_right[i].distance < right.distance)
		{
			right.distance = _right[i].distance;
			right.angle = _right[i].angle;
		}
	}
}

void Path::PrintClosestPointStage()
{
	cout << "=====...Printing Closest Point...(distance, angle)=====" << endl;

  	cout << "Left        : " << "(" << setprecision(3) << left.distance << ", " << setprecision(3) <<  left.angle << ")" <<endl;
  	cout << "Front       : " << "(" << setprecision(3) << front.distance << ", " << setprecision(3) << front.angle << ")" << endl;
  	cout << "Right       : " << "(" << setprecision(3) << right.distance << ", " << setprecision(3) << right.angle << ")" <<endl;

	cout << "State       : " << car.state << endl;
	cout << "Flag        : " << car.flag << endl;
  	cout << "Throttle    : " << car.throttle << endl;
  	cout << endl;	
}

void Path::PrintClosestPoint()
{
	cout << "=====...Printing Closest Point...(distance, angle)=====" << endl;

  	cout << "Left        : " << "(" << setprecision(3) << right.distance << ", " << setprecision(3) <<  right.angle << ")" <<endl;
  	cout << "Front       : " << "(" << setprecision(3) << front.distance << ", " << setprecision(3) << -front.angle << ")" << endl;
  	cout << "Right       : " << "(" << setprecision(3) << left.distance << ", " << setprecision(3) << left.angle << ")" <<endl;

  	cout << "Throttle    : " << car.throttle << endl;
	cout << "Steering    : " << car.steering << endl;
	if (car.state == "right")
	{
		cout << "State    : left" << endl;
	}
	else if (car.state == "left")
	{
		cout << "State    : right" << endl;
	}
	else
	{
		cout << "State       : " << car.state << endl;
	}
	cout << "Flag        : " << car.flag << endl;
  	//cout << "Steering    : " << car.steering << endl; 
  	cout << endl;	
}

//------------End Point------------------


void Path::Reverse()
{
	if(stopCount < 12)
	{
		car.throttle = -0.08;
		car.steering = 0;
	} 
}

void Path::GetValues() // speed always 1
{
	if (stopFlag == true)
	{
		if (stopCount < 5)
		{
			car.state = "stop";
			car.throttle = 0;
			car.steering = 0;
			//cout << "Stop Count: " << stopCount << endl;
		}
		else 
		{
			car.state = "reverse";
			Reverse();
			if(stopCount >= 12)
			{
				//cout << "Reverse Count: " << reverseCount << endl;
				stopCount = 0;
				stopFlag = false;
			}
		}
		stopCount++;
	}
	else if(car.state == "left")
	{
		car.throttle = speed;
		car.steering = steering;
	}
	else if(car.state == "forward3")
	{
		car.throttle = speed + speed_adjust*5;
		car.steering = 0;
	}
	else if(car.state == "forward2")
	{
		car.steering = 0;

		if (front.distance >= front_min && front.distance < (front_min + distance_inc))
		{
			car.throttle = speed + speed_adjust;
		}
		else if (front.distance >= (front_min + distance_inc) && front.distance < (front_min + distance_inc*2))
		{
			car.throttle = speed + speed_adjust*2;
		}
		else if (front.distance >= (front_min + distance_inc*2) && (front.distance < front_min + distance_inc*3))
		{
			car.throttle = speed + speed_adjust*3;
		}
		else if (front.distance >= (front_min + distance_inc*3) && (front.distance < front_min + distance_inc*4))
		{
			car.throttle = speed + speed_adjust*4;		
		}
	}
	else if (car.state == "forward1")
	{
		car.throttle = speed;
		car.steering = 0;
	}
	else if (car.state == "right")
	{
		car.throttle = speed;
		car.steering = -1 * steering;
	}
	else if (car.state == "unknown state")	
	{
		cout << "unknown state" << endl;
		car.throttle = 0;
		car.steering = 0;
	}

	if (adjustFlag == true)
	{
		if (right.distance >= left.distance)
		{
			car.steering = -steering_adjust; // adjust to right
		}
		else 
		{
			car.steering = steering_adjust; // adjust to left
		}
	}
}

void Path::DeterminePath()
{
	if (drag_race == 0)
	{
		DetermineState();	//circuit
		GetValues();
	}
	else if (drag_race == 1)
	{
		DetermineDragState();	//drag
		GetDragValues();
	}
}

void Path::DetermineState()
{
	if (front.distance < front_col || right.distance < front_col || left.distance < front_col)
	{
		stopFlag = true;
		adjustFlag = false;
		car.flag = "stop";

	}
	else if (front.distance >= front_col && front.distance < front_min)
	{	
		adjustFlag = false;
		if (right.distance >= left.distance)
		{
			car.state = "right";
			car.flag = "none";
		}
		else if (left.distance > right.distance)
		{
			car.state = "left";
			car.flag = "none";
		}
		else
		{
			car.state = "unknown state";
			car.flag = "none";
		}
	}
	else if (front.distance >= front_min && front.distance < front_max)
	{
		car.state = "forward2";
		car.flag = "adjust";
		adjustFlag = true;
	}
	else if (front.distance >= front_max)
	{
		car.state = "forward3";
		car.flag = "adjust";
		adjustFlag = true;
	}
}

void Path::DetermineDragState()
{
	if (front.distance >= drag_front_max)
	{
		car.state = "drag forward";
		dragStopFlag = false;		
	}
	else if (front.distance < drag_front_max)
	{
		if (right.distance >= left.distance)
		{
			car.state = "drag right";
		}
		else if (left.distance > right.distance)
		{
			car.state = "drag left";
		}
	}
}

void Path::GetDragValues()
{
	if (car.state == "drag forward")
	{
		car.throttle = drag_speed;
		car.steering = 0;
	}
	else if (car.state == "drag right")
	{
		car.throttle = drag_speed - drag_brake;
		car.steering = -1 * drag_steering;
	}
	else if (car.state == "drag left")
	{
		car.throttle = drag_speed - drag_brake;
		car.steering = 1*drag_steering;
	}
}

void Path::Clear()
{
	left.distance = 5;
	left.angle = 0;

	right.distance = 5;
	right.angle = 0;

	front.distance = 5;
	front.angle = 0;
	
}
