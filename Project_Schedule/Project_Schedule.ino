int umidade; // Variavél que recebe o valor do sensor de umidade

void setup(){
  
  pinMode(13, OUTPUT);// Define o pino 13 do Arduino como saida 
  
  Serial.begin(9600); //Inicia a comunicação serial

  Serial.println("http://rpsilva100.blogspot.com.br/");

  }
void loop()

  {
    umidade = analogRead(A0); // Defini a variavél como porta A0 do Arduino
    
     Serial.println(umidade); // Imprime o valor da umidade

     if (umidade > 700){ // Verifica se a umidade é maior que 700
  digitalWrite(13,HIGH);} // Caso seja, desliga a porta 13
  
  else{ // Senão
    digitalWrite(13,LOW); // Caso a umidade seja menor que 700, liga a porta 13
     }
  
  delay(1000); //Espera de 1 segundo antes de fazer a leitura novamente.
}
