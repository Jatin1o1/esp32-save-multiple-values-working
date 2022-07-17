#include <Preferences.h>
Preferences preferences;


unsigned int val_1 ;
unsigned int val_2 ;
unsigned int val_3 ;
unsigned int val_4 ;
unsigned int val_5;
unsigned int val_6;
unsigned int val_7;
unsigned int val_8;
unsigned int val_9;
unsigned int val_10 ;

void Read_saved_values(){ // read saved value if presen
  //NOTE: each preference namespace can save a maximum of two value, saving more than 2 values in a namespace will lead to corruption of values.
  
  preferences.begin("ns_5", false); val_1 = preferences.getUInt("val_1", 5); preferences.end();
  preferences.begin("ns_5", false); val_2 = preferences.getUInt("val_2", 1); preferences.end();
  preferences.begin("ns_1", false); val_3 = preferences.getUInt("val_3", 5); preferences.end();
  preferences.begin("ns_1", false); val_4 = preferences.getUInt("val_4", 5); preferences.end();
  preferences.begin("ns_2", false); val_5 = preferences.getUInt("val_5", 2); preferences.end();
  preferences.begin("ns_2", false); val_6 = preferences.getUInt("val_6", 2); preferences.end();   
  preferences.begin("ns_3", false); val_7 = preferences.getUInt("val_7", 1); preferences.end();
  preferences.begin("ns_3", false); val_8 = preferences.getUInt("val_8", 1); preferences.end();
  preferences.begin("ns_4", false); val_9 = preferences.getUInt("val_9", 1); preferences.end();
  preferences.begin("ns_4", false); val_10 = preferences.getUInt("val_10", 0);   preferences.end();

 Serial.print("val_1  : "); Serial.println(val_2);
 Serial.print("val_2  : "); Serial.println(Downstream_delay);
 Serial.print("val_3  : "); Serial.println(val_3);
 Serial.print("val_4  : "); Serial.println(val_4);
 Serial.print("val_5  : "); Serial.println(val_5);
 Serial.print("val_6  : "); Serial.println(val_6);
 Serial.print("val_7  : "); Serial.println(val_7);
 Serial.print("val_8  : "); Serial.println(val_8);
 Serial.print("val_9  : "); Serial.println(analog_value_threshold);
 Serial.print("val_10 : "); Serial.println(val_10);
 
}
//preferences.begin("ns_5", false); val_1 = preferences.putUInt("val_1", 10); preferences.end();   // save a new value
//preferences.begin("ns_3", false); val_7 = preferences.putUInt("val_7", 11); preferences.end();   // save a new value

void setup(){
    Read_saved_values();
}

void loop(){

}
