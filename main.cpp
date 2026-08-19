#include <stdio.h>
#include <math.h>


int main()
{
  const double PI = 3.14159265;

  // Outer
#if 0
  double module = 1.5; // mm
  int teeth_count = 64;
  double height = 13.5; // mm
  double angle = 16; // degrees
#endif 

  // Planet
#if 0
  double module = 1.5; // mm
  int teeth_count = 28;
  double height = 11; // mm
  double angle = 16; // degrees
#endif 

  // Sun
#if 1
  double module = 1.5; // mm
  int teeth_count = 8;
  //double height = 13; // mm
  double height = 14; // mm
  double angle = 16; // degrees
#endif 




#if 0
  double module = 1.5; // mm
  int teeth_count = 28;
  double height = 11; // mm
  double angle = 24; // degrees
#endif 

#if 0
  double module = 2; // mm
  int teeth_count = 20;
  double height = 20; // mm
  double angle = 45; // degrees
#endif



  // Small DC motor gears
  // Outer
#if 0
  double module = 0.4; // mm
  int teeth_count = 96;
  double height = 8; // mm
  double angle = 14; // degrees
#endif 

  // Planet
#if 0
  double module = 0.4; // mm
  int teeth_count = 42;
  double height = 7; // mm
  double angle = 14; // degrees
#endif 

  // Sun
#if 0
  double module = 0.4; // mm
  int teeth_count = 12;
  double height = 7; // mm
  double angle = 14; // degrees
#endif 



  // Small DC motor gears v2
  // Outer
#if 0
  double module = 0.7; // mm
  int teeth_count = 64;
  double height = 7.7;//20; // mm
  double angle = 16; // degrees
#endif 

  // Planet
#if 0
  double module = 0.7; // mm
  int teeth_count = 28;
  double height = 7; // mm
  double angle = 16; // degrees
#endif 

  // Sun
#if 0
  double module = 0.7; // mm
  int teeth_count = 8;
  double height = 8; // mm
  double angle = 16; // degrees
#endif 





  double pitch_diameter = module * teeth_count; // mm
  double tan_beta = tan( angle * PI / 180 );

  double theta = 360 * height * tan_beta / (pitch_diameter * PI);

  printf( "pitch_diameter %0.2f   tan_beta %0.3f   theta %0.3f\n", pitch_diameter, tan_beta, theta );

  return 0;
}