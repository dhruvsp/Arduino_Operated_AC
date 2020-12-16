#include < OneWire.h>
#include < DallasTemperature.h> 
OneWire(5); 
DallasTemperature sensors(&oneWire);
\\ Variable for AC system elements
float COMPi; 
float COMPo; 
float CONDi; 
float CONDo; 
float EXPi; 
float EXPo; 
float EVAPo; 
float Tcool; 
void setup() {
  Serial.begin(56000); 
  Serial.println("CLEARDATA");
  \\This string is defined as a command for the Excel VBA to clear all the rows and column
  Serial.println("LABEL,Computer time,COMPI,COMPo,CONDi,CONDo,EXPi,EXPo,EVAPo,Tcool"); 
  sensors.begin();
  }
void loop(){
  for(int a = 0;a < 5;a ++) sensors.requestTemperatures();
    //One can add more than one temperature sensors on the same bus. Here for 8 components, 8 temperature sensors are used
    COMPi = sensors.getTempCByIndex(0); 
    COMPo = sensors.getTempCByIndex(1); 
    CONDi = sensors.getTempCByIndex(2); 
    CONDo = sensors.getTempCByIndex(3); 
    EXPi = sensors.getTempCByIndex(4); 
    EXPo = sensors.getTempCByIndex(5); 
    EVAPo = sensors.getTempCByIndex(6); 
    Tcool = sensors.getTempCByIndex(7);
    Serial.print("DATA,TIME,");
    //Data from sensors and print
    Serial.print(COMPi); 
    Serial.print(","); 
    Serial.print(COMPo); 
    Serial.print(","); 
    Serial.print(CONDi); 
    Serial.print(","); 
    Serial.print(CONDo); 
    Serial.print(","); 
    Serial.print(EXPi); 
    Serial.print(","); 
    Serial.print(EXPo); 
    Serial.print(","); 
    Serial.print(EVAPo); 
    Serial.print(","); 
    Serial.println(Tcool);
    //Recording temperature readings after every 2 min
    delay(120000);
    }
for(int b = 0;b >=0;b ++){
  delay(1000);
  }
}
