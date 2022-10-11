// Entradas
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

// Salidas
const int SalidaS0 =  10;      
const int SalidaS1 =  11;
const int SalidaS2 =  12;      
const int SalidaS3 =  13;     
const int SalidaSError =  9;      

// Estados
int EstadoA = 0;         
int EstadoB = 0; 
int EstadoC = 0; 
int EstadoD = 0; 
int EstadoE = 0; 
int EstadoF = 0; 
int EstadoG = 0; 


void setup() {
  // initialize the LED pin as an output:
  pinMode(SalidaS0, OUTPUT);
  pinMode(SalidaS1, OUTPUT);
  pinMode(SalidaS2, OUTPUT);
  pinMode(SalidaS3, OUTPUT);
  pinMode(SalidaSError, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(G, INPUT);
}

void loop() {
  // Leer valor de entrada (botón)
  EstadoA = digitalRead(A);
  EstadoB = digitalRead(B);
  EstadoC = digitalRead(C);
  EstadoD = digitalRead(D);
  EstadoE = digitalRead(E);
  EstadoF = digitalRead(F);
  EstadoG = digitalRead(G);
  // Evaluar estado

 //Primera parte

digitalWrite(SalidaS0, LOW);
  digitalWrite(SalidaS1, LOW);
  digitalWrite(SalidaS2, LOW);
  digitalWrite(SalidaS3, LOW);
  digitalWrite(SalidaSError, LOW);
 /*

  if ((EstadoA && EstadoC)&&(!(EstadoE)&&!EstadoF)){
    // Enciende
    digitalWrite(SalidaS0, HIGH);
  } 
 
  if ((EstadoB && EstadoD)&&(!EstadoE&&!EstadoF)){
    // Enciende
    digitalWrite(SalidaS1, HIGH);
  }
  digitalWrite(SalidaS0, LOW);
  digitalWrite(SalidaS1, LOW);
   if ((EstadoA || EstadoC)&&(!EstadoE&&EstadoF)){
    // Enciende
    digitalWrite(SalidaS0, HIGH);
  }
  digitalWrite(SalidaS0, LOW);
  digitalWrite(SalidaS1, LOW);
  if ((EstadoB || EstadoD)&&(!EstadoE&&EstadoF)){
    // Enciende
    digitalWrite(SalidaS1, HIGH);
  }
 digitalWrite(SalidaS0, LOW);
  digitalWrite(SalidaS1, LOW);
  if ((EstadoA ^ EstadoC)&&(EstadoE&&!EstadoF)){
    // Enciende
    digitalWrite(SalidaS0, HIGH);
  }
  digitalWrite(SalidaS0, LOW);
  digitalWrite(SalidaS1, LOW);
  if ((EstadoB ^ EstadoD)&&(EstadoE&&!EstadoF)){
    // Enciende
    digitalWrite(SalidaS1, HIGH);
  }
 
*/
  //suma
  
  if ((EstadoA ^ EstadoC)&&(EstadoE&&!EstadoF&&!EstadoG)){
    // Enciende
     digitalWrite(SalidaS0, HIGH);
  }
  if (((EstadoA&&EstadoC)^(EstadoB^EstadoD))&&(EstadoE&&!EstadoF&&!EstadoG)){
    
    digitalWrite(SalidaS1, HIGH);
}
 //acarreo
  if ((EstadoB && EstadoD)&&(EstadoE&&!EstadoF&&!EstadoG)){
    // Enciende
     digitalWrite(SalidaS2, HIGH);
  }

  
  //resta 
  if ((EstadoA ^ EstadoC)&&(EstadoE&&!EstadoF&&EstadoG)){
    // Enciende
     digitalWrite(SalidaS0, HIGH);
  }
  if (((!EstadoA&&EstadoC)^(EstadoB^EstadoD))&&(EstadoE&&!EstadoF&&EstadoG)){
    
    digitalWrite(SalidaS1, HIGH);
}
 //acarreo
  if ((!EstadoB && EstadoD)&&(EstadoE&&!EstadoF&&EstadoG)){
    // Enciende
     digitalWrite(SalidaS2, HIGH);
  }
//multiplicación   
if ((EstadoA && EstadoC)&&(EstadoE&&EstadoF&&!EstadoG)){
    // Enciende
     digitalWrite(SalidaS0, HIGH);
  }
  if (((EstadoA && EstadoD)^(EstadoB && EstadoC))&&(EstadoE&&EstadoF&&!EstadoG)){
    // Enciende
     digitalWrite(SalidaS1, HIGH);
  }
  if ((((EstadoA && EstadoD)&&(EstadoB && EstadoC))^(EstadoB && EstadoD))&&(EstadoE&&EstadoF&&!EstadoG)){
    // Enciende
     digitalWrite(SalidaS2, HIGH);
  }
  if ((((EstadoA && EstadoD)&&(EstadoB && EstadoC))&&(EstadoB && EstadoD))&&(EstadoE&&EstadoF&&!EstadoG)){
    // Enciende
     digitalWrite(SalidaS3, HIGH);
  }

  //división 
  if ((  !EstadoA && EstadoB && EstadoC && EstadoD)&&(EstadoE&&EstadoF&&EstadoG)){
    // Enciende
     digitalWrite(SalidaS0, HIGH);//A1
  }
  if (((  EstadoB && !EstadoC && EstadoD)^(EstadoA&&EstadoC&&!EstadoD)^(EstadoA&&EstadoB&&EstadoC))&&(EstadoE&&EstadoF&&EstadoG)){
    // Enciende
     digitalWrite(SalidaS3, HIGH); // s0
  }
  if (((  EstadoA && !EstadoB && EstadoD)^(EstadoA&&!EstadoC&&EstadoD))&&(EstadoE&&EstadoF&&EstadoG)){
    // Enciende
     digitalWrite(SalidaS1, HIGH); //A0
  }
  if ((  EstadoB && EstadoC && !EstadoD)&&(EstadoE&&EstadoF&&EstadoG)){
    // Enciende
     digitalWrite(SalidaS2, HIGH); //S1
  }
  if ((!EstadoC && !EstadoD)&&(EstadoE&&EstadoF&&EstadoG)){
    // Enciende
     digitalWrite(SalidaSError, HIGH);//error
  }
  


  
}

