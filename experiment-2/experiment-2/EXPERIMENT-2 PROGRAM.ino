void setup()
{
   
for (int i =8; i <= 10; i++) 
      {
         
pinMode(i, OUTPUT);

      }

}

void loop()
{
   
for (int i = 8; i <11; i++) 
      {
          
allLEDsOff();
          

if (i!=10)
            {
              
digitalWrite(i,HIGH);
              
digitalWrite(i+1,HIGH);
              
delay(200);

            }
         
 else 
              
digitalWrite(i,HIGH);
              
digitalWrite(i-3,HIGH);
              
delay(200);
             
 allLEDsOff();
       
}

}


      void allLEDsOff(void)

{ 
    
for (int i = 8; i <= 10; i++) 
         { 

            digitalWrite(i, LOW);
         
}

            delay(100);

}
