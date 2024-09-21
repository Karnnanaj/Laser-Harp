int F = A5;
int E = A4;
int D = A3;
int C = A2;
int B = A1;
int A = A0;// define your analog pins here 
int SPK = 3;  // define pin for your speaker

int na;
int nb;
int nc;
int nd;
int ne;
int nf;
// define note

void setup() {
    Serial.begin(9600);  // serial monitor 
    pinMode(A, INPUT);
    pinMode(B, INPUT);
    pinMode(C, INPUT);
    pinMode(D, INPUT);
    pinMode(E, INPUT);// define pins as input 
    pinMode(F, INPUT);
    pinMode(SPK, OUTPUT); // define speaker as output 
}

void loop() {
    na = analogRead(A); // analog read  
    if (na < 100) {     //inorder to calibrate the na(idle) should be lower than 100 in this case
      tone(SPK, 203, 200);
    }
    nb = analogRead(B); // analog read  
    if (nb < 50) {
      tone(SPK, 303, 200);
    }
    nc = analogRead(C); // analog read  
    if (nc < 100) {
      tone(SPK, 403, 200);
    }
    nd = analogRead(D); // analog read  
    if (nd < 100) {
      tone(SPK, 503, 200);
    }
    ne = analogRead(E); // analog read  
    if (ne < 50) {
      tone(SPK, 603, 200);
    }
    nf = analogRead(F); // analog read  
    if (nf < 100) {
      tone(SPK, 703, 200);
    }
    
    Serial.println(na); // change na to nb, nc, nd, ne and nf to see the analog read of each and calibrate accordingly
// check analog values on serial monitor
// First align the laser at the LDR and ensure that there is a non-zero value appearing in the serial monitor
// Then block the laser beam, note down this value, now set the threshold value greater than this value.
}
