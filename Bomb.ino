boolean Num_Array[10][7]={
{1,1,1,1,1,1,0}, //0
{0,1,1,0,0,0,0}, //1
{1,1,0,1,1,0,1}, //2
{1,1,1,1,0,0,1}, //3
{0,1,1,0,0,1,1}, //4
{1,0,1,1,0,1,1}, //5
{1,0,1,1,1,1,1}, //6
{1,1,1,0,0,1,0}, //7
{1,1,1,1,1,1,1}, //8
{1,1,1,1,0,1,1} //9
};

void NumPrint(int Number){
  for (int w=0; w<=7; w++){
    digitalWrite(w+2,-Num_Array[Number][w]);
    }
}

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
NumPrint(0);
delay(1000);
NumPrint(1);
delay(1000);
NumPrint(2);
delay(1000);
NumPrint(3);
delay(1000);
NumPrint(4);
delay(1000);
NumPrint(5);
delay(1000);
NumPrint(6);
delay(1000);
NumPrint(7);
delay(1000);
NumPrint(8);
delay(1000);
NumPrint(9);
delay(1000);
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1);                       // wait for a second
}
