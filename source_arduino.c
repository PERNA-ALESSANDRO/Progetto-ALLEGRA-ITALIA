// Progetto-ALLEGRA-ITALIA
// C code
//
const int PORTA_MIN = 2; // Cambiare la prima porta 
const int nPul = 6; // Cambiare numero dei pulsanti
const int LED_RED = 12;
const int LED_GREEN = 13;
const int BUZZER = 11;

int statoPul;
int ans[nPul]{-1, -1, -1, -1, -1, -1};
int pulsanti[nPul];

void rightTone();
void wrongTone();

int a = Serial.available();

void setup()
{
  Serial.begin(9600);
  
  // Inizializzazione dell'array delle porte di INPUT
  for(int i = 0; i < nPul; i++){
  	pulsanti[i] = i + PORTA_MIN;
  }
  
  // Settaggio di tutti i pin collegati ai pulsanti come INPUT
  for(int i = 0; i < nPul; i++){
    pinMode(pulsanti[i], INPUT);
  }
  
  // Settaggio dei pin dei led e buzzer come OUTPUT
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  
  // Settaggio bit di risposte
  for(int i = 0; i < nPul; i++){
    while(ans[i] == -1){
  		ans[i] = insAns();
    }

  }
}

void loop()
{
  for(int i = 0; i < nPul; i++){
    // Controllo pulsante premuto o no
    if(digitalRead(pulsanti[i]) == LOW){
      if(ans[i] == '0'){
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

int insAns(){
  int inByte = -1;

  if(Serial.available() > 0){
    inByte = Serial.read();
  }
  
  return inByte;
}

