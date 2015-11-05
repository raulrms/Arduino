// Damos nombre al pin 13
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);    // Inicializamos el pin13 como salida
  digitalWrite(led, LOW); // Incializamos el pin 13 como apagado
}

void loop() {  
  if (Serial.available() > 0) { 
    	int sm = Serial.read();
    	if (sm == 49) {					//49 = 1 en ASCII
          	digitalWrite(led, HIGH); 	//Enciende el led 13
        	}      
    	else if (sm == 48) {			//48 = 1 en ASCII
          	digitalWrite(led, LOW);		//Apaga el led 13
        	}
  		}
}
