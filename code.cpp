/*
  Este programa pisca os pinos definidos na placa arduino
  Bruno Moreira - 09/03/2022
*/


#define LedVM 13
#define LedAM 11
#define LedVD 9
#define LedVM2 7
#define LedAM2 5
#define LedVD2 3

#define ON HIGH
#define OFF LOW

int Tempo = 2000;

void setup()
{
    pinMode(LedVM, OUTPUT);
    pinMode(LedAM, OUTPUT);
    pinMode(LedVD, OUTPUT);
    pinMode(LedVM2, OUTPUT);
    pinMode(LedAM2, OUTPUT);
    pinMode(LedVD2, OUTPUT);
}

void loop()
{
    digitalWrite(LedVM, ON);
    digitalWrite(LedVD2, ON);
    delay(Tempo);
    digitalWrite(LedVD2, OFF);
    digitalWrite(LedAM2, ON);
    delay(Tempo);
    digitalWrite(LedAM2, OFF);
    digitalWrite(LedVM, OFF);
    digitalWrite(LedVM2, ON);
    digitalWrite(LedVD, ON);
    delay(Tempo);
    digitalWrite(LedVD, OFF);
    digitalWrite(LedAM, ON);
    delay(Tempo);
    digitalWrite(LedAM, OFF);
    digitalWrite(LedVM2, OFF);
}
