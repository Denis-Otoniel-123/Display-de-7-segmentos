
int E = 3;
int D = 4;
int C = 5;
int P = 6;


int G = 9;
int F = 10;
int A = 11;
int B = 12;
int MonitorSerial;

/*byte displayLEDs[10][7] = { 
        { 0,0,0,0,0,0,1 },  // = 0
        { 1,0,0,1,1,1,1 },  // = 1
        { 0,0,1,0,0,1,0 },  // = 2
        { 0,0,0,0,1,1,0 },  // = 3
        { 1,0,0,1,1,0,0 },  // = 4
        { 0,1,0,0,1,0,0 },  // = 5
        { 0,1,0,0,0,0,0 },  // = 6
        { 0,0,0,1,1,1,1 },  // = 7
        { 0,0,0,0,0,0,0 },  // = 8
        { 0,0,0,0,1,0,0 }   // = 9     
        }; 
*/


void setup() {
  Serial.begin(9600);
 
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(P, OUTPUT);
  
}
int input = 0;
void loop() {
 
  
  if (Serial.available()) { 
    MonitorSerial = Serial.parseInt(); 
    if (MonitorSerial == 0) { 
      Cero();
    } 
 if (MonitorSerial == 1) { 
      Uno();
    } 
 if (MonitorSerial == 2) { 
      Dos();
    } 
     if (MonitorSerial == 3) { 
      Tres();
    } 
     if (MonitorSerial == 4) { 
      Cuatro();
    } 
     if (MonitorSerial == 5) { 
      Cinco();
    } 
 if (MonitorSerial == 6) { 
      Seis();
    }  if (MonitorSerial == 7) { 
      Siete();
    }  if (MonitorSerial == 8) { 
      Ocho();
    }  if (MonitorSerial == 9) { 
      Nueve();
    }  if (MonitorSerial == 10) { 
      LetraA();
    } 
     if (MonitorSerial == 11) { 
      LetraB();
    } 
     if (MonitorSerial == 12) { 
      LetraC();
    } 
     if (MonitorSerial == 13) { 
      LetraD();
    } 
     if (MonitorSerial == 14) { 
      LetraE();
    } 
     if (MonitorSerial == 15) { 
      LetraF();
    } 
    if (MonitorSerial >= 16) { 
      Ocho();
    delay(500);
     Ocho2();
     delay(500);
 Ocho();
    delay(500);
     Ocho2();
     delay(500);
     
      Ocho();
    delay(500);
     Ocho2();
     delay(500);

 Ocho();
    delay(500);
     Ocho2();
     delay(500);

 Ocho();
    delay(500);
     Ocho2();
     delay(500);

    } 

  }
  }

void Cero() {
  digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Uno() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Dos() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void Tres() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Cuatro() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Cinco() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Seis() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Siete() {
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Ocho() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void Ocho2() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}


void Nueve() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraA() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraB() {
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraC() {
  digitalWrite(G, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void LetraD(){
  digitalWrite(G, HIGH);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(P, LOW);
}

void LetraE(){
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void LetraF(){
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}

void Apagado() {
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(C, LOW);
  digitalWrite(P, LOW);
}
