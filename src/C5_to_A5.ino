// declare Piano Keys (all 5)

#define KEY_C 2
#define KEY_D 3
#define KEY_E 4
#define KEY_F 5
#define KEY_G 6
#define KEY_A 7

// declare the output pin

int speakerPin = 9;

// notes

int keys[6] = {KEY_C, KEY_D, KEY_E, KEY_F, KEY_G, KEY_A};
int notes[6] = {523, 587, 659, 698, 784, 880};

void setup(){
  // configure Piano Keys

  for(int i = 0; i <= 5; i++){
    pinMode(keys[i], INPUT_PULLUP);
  }
}

void loop(){
  
  if(digitalRead(KEY_C) == LOW){
    playNote(KEY_C);
  }
  else if(digitalRead(KEY_D) == LOW){
    playNote(KEY_D);
  }
  else if(digitalRead(KEY_E) == LOW){
    playNote(KEY_E);
  }
  else if(digitalRead(KEY_F) == LOW){
    playNote(KEY_F);
  }
  else if(digitalRead(KEY_G) == LOW){
    playNote(KEY_G);
  }
  else if(digitalRead(KEY_A) == LOW){
    playNote(KEY_A);
  }
  else{
    noTone(speakerPin);
  }

}

void playNote(int key){
  tone(speakerPin, notes[key-2]);

}