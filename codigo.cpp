/ *
    Nesse programa vamos programa ou Arduino para efetuar a leitura de um Sensor Magnético.
    Quando o sensor estiver fechado, ele vai enviar um Sinal de '1' para o Pino 2, quando ela estiver fechado, ele vai mandar um sinal de '0' no Pino 2.
    O Programa vai exibir nenhum Monitor Serial ou estado do Sensor.
 
 * /

int pino2 = 2 ; // Cria uma variável para o Pino 2
bool estado_sensor; // Cria uma variável para armazenar o estado do sensor


void  setup () {

  pinMode (pino2, INPUT_PULLUP); // Coloca o Pino 2 como Entrada
  Serial. começar ( 9600 ); // Inicia o Monitor Serial
}

void  loop () {
  
  estado_sensor = digitalRead (pino2); // Efetua a leitura do Pino 2 e armazena o valor discriminado na variável

  Serial. println (estado_sensor); // Não exibe Serial do Monitor o Estado do Sensor
}
Serial. println( "");

