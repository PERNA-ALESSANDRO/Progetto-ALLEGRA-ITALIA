// Progetto-ALLEGRA-ITALIA
// C code
//
const int nPul = 6;
const int pulsanti[nPul] = {2, 3, 4, 5, 6, 7};
const int led[nPul] = {0, 1, 0, 1, 0, 1};
const int LED_RED = 12;
const int LED_GREEN = 13;
const int BUZZER = 11;
int statoPul;
void rightTone();
void wrongTone();
void setup()
{
  // Settaggio di tutti i pin collegati ai pulsanti come INPUT
  for(int i = 0; i < nPul; i++){
    pinMode(pulsanti[i], INPUT);
  }
  
  // Settaggio dei pin dei led e buzzer come OUTPUT
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}
void loop()
{
  for(int i = 0; i < nPul; i++){
    // Controllo pulsante premuto o no
    if(digitalRead(pulsanti[i]) == LOW){
      if(led[i] == 0){
        digitalWrite(LED_RED, HIGH);
        wrongTone();
      } else {
        digitalWrite(LED_GREEN, HIGH);
        rightTone();
      }
      
      // Spegnimento di tutti i led e buzzer
      delay(1000);
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_GREEN, LOW);
      noTone(BUZZER);
    }
  }
  delay(10);
}
void rightTone(){
    tone(BUZZER, 783);
    delay(250);
    tone(BUZZER, 1046);
    delay(250);
    tone(BUZZER, 1576);
    delay(500);
    noTone(BUZZER);
}
void wrongTone(){
  tone(BUZZER, 392);
  delay(250);
  tone(BUZZER, 261);
  delay(250);
  tone(BUZZER, 196);
  delay(500);
  noTone(BUZZER);
}
