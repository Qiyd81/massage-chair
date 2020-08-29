int led1 = 2;
int led2 = 3;
int led3 = 4;
int motores = 7;
int pulsador1 = 5;
int pulsador2 = 6;
int inicio = 0; //Estado de la salida al arrancar arduino
int estadoAC = 0; // Estado actual del boton
int estadoAN = 0; //Variable para guardar el estado anterior del pulsador
int inicio2 = 0;

  
void setup() {
  //Codigo que solo se ejecuta cuando se enciende el arduino

  //Declarar los elementos
  pinMode(motores, OUTPUT);
  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  //Encender los leds durante 2s para señalizar que esta funcionando
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(2000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {
  //Codigo bucle

  estadoAC = digitalRead (pulsador1); //Actualizamos el valor de la variable
  if(estadoAC && estadoAN == 0){
    inicio = 1 - inicio; //Asignamos el estado contrario
    delay(200);
  }

  estadoAN = estadoAC;

  estadoAC = digitalRead (pulsador2); //Actualizamos el valor de la variable
  if(estadoAC && estadoAN == 0){
    inicio2 = 1 - inicio2;//Asignamos el estado contrario
    delay(200);
  }

  estadoAN = estadoAC;

  //Modo sencillo, siempre activado durante 20s
  if(inicio == 1){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(motores, HIGH);
    delay(20000);
  }


  //Modo complejo, cambia los intervalos indicando la fase por el estado de los leds
  if(inicio2 == 1){
    //Primera parte del masaje: los motores se activan durante 20s
    digitalWrite(led1, HIGH);    
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(motores, HIGH);
    delay(20000);
    digitalWrite(led2, HIGH); 

    //Segunda parte del masaje: el vibrador se acciona tres veces con un intervalo de 1s parpadeando el led
    for(int repetir = 0; repetir<3; repetir++){
      digitalWrite(motores, HIGH);
      digitalWrite(led2, HIGH);
      delay(1000);
      digitalWrite(motores, LOW);
      digitalWrite(led2, LOW);
      delay(1000);
    }

    //Tercera parte del masaje: los motores se activan durante 20s
    digitalWrite(led1, HIGH); 
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(motores, HIGH);
    delay(2000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(motores, LOW);
  }


} 

