## Summary of Project
Visit https://link.springer.com/chapter/10.1007%2F978-981-13-6577-5_26 for detailed summary of project.

This code represnt the extartcion o ftemperature of the air conditioning system of Maruti Suzuki Wagon-R car.

It comprises  of 
              
               1. condenser, 
               2. compressor, 
               3. evaporator, 
               4. receiver, 
               5. drier, and 
               6. expansion valve. 
It works on VCR system with refrigerant R600A + R290.

Temperature Sensors: · [18B20 temperature sensor](https://www.adafruit.com/product/381)

The air conditioning model is connected to the computer system through Arduino UNO circuit to sense and control physical parameters. 

The purpose of establishing this connection is to perform the automatic turning on/off the system(Code:[Relay Switch](https://github.com/dhruvsp/Arduino_Operated_AC/blob/main/Relay_Switch.cpp)) and to obtain the temperature readings from the sensors attached to the components of the model(Code: [Extract Temperature](https://github.com/dhruvsp/Arduino_Operated_AC/blob/main/Extratc_temp.cpp)). 

These readings are then transferred to MS Excel software with the help of PLX-DAQ software, where various thermodynamic calculations are performed. From the obtained results, it is found that the theoretical value of cop is twice that of actual values of COP. 
 
