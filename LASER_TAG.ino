#define segA 9//connecting segment A to PIN2

#define segB 8// connecting segment B to PIN3

#define segC 30// connecting segment C to PIN4

#define segD 29// connecting segment D to PIN5

#define segE 28// connecting segment E to PIN6

#define segF 11// connecting segment F to PIN7

#define segG 12// connecting segment G to PIN8
const int motorpin=10;
 int COUNT=0;//count integer for 0-9 increment
 void seg(int COUNT);
const int buzzerPin = 4;

const int ldrPin = A0;

void setup () {

Serial.begin(9600);
for (int i=24;i<31;i++)

 {
  pinMode(i, OUTPUT);// taking all pins from 2-8 as output

  }
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
pinMode(motorpin, OUTPUT);

pinMode(buzzerPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);
Serial.println(ldrStatus);
if (ldrStatus >= 700) {
digitalWrite(motorpin,HIGH);
tone(buzzerPin, 100); 
  COUNT++;
  seg(COUNT);
  

delay(100);

noTone(buzzerPin);
digitalWrite(motorpin,LOW);

delay(100);

Serial.println("----------- ALARM ACTIVATED -----------");

}

else {

noTone(buzzerPin);
digitalWrite(motorpin,LOW);
Serial.println("ALARM DEACTIVATED");

}

}
void seg(int COUNT)
{
  switch (COUNT)

                {

 

                case 0://when count value is zero show”0” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, HIGH);

                break;

 

                case 1:// when count value is 1 show”1” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;

 

                case 2:// when count value is 2 show”2” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, LOW);

                break;

 

                case 3:// when count value is 3 show”3” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, LOW);

                break;

 

                case 4:// when count value is 4 show”4” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 5:// when count value is 5 show”5” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 6:// when count value is 6 show”6” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 7:// when count value is 7 show”7” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);


                break;

 

                case 8:// when count value is 8 show”8” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 9:// when count value is 9 show”9” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                break;

                }

                if (COUNT<10)

                {

                                COUNT++;

                                delay(1000);///increment count integer for every second

                }

                if (COUNT==10)

                { 
                  tone(buzzerPin,500);

                               digitalWrite(segA, LOW);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                }

}
  
