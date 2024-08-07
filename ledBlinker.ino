int buttonState = LOW;  // Estado atual do botão (LOW ou HIGH)
int lastButtonState = LOW;  // Último estado do botão
int buttonPin = 8;    // Pino do botão
int pinStart = 2;     // Pino inicial dos LEDs
int pinEnd = 6;       // Pino final dos LEDs
int mode = 0;         // Modo de piscar LEDs: 0 - crescente, 1 - decrescente

void setup() {
    // Configura os pinos dos LEDs como saída
    for (int i = pinStart; i <= pinEnd; i++) {
        pinMode(i, OUTPUT);
    }
    pinMode(buttonPin, INPUT);
}

void loop() {
    // Lê o estado atual do botão
    buttonState = digitalRead(buttonPin);

    // Verifica se houve uma mudança no estado do botão
    if (buttonState != lastButtonState) {
        if (buttonState == HIGH) {
            // Alterna o modo de piscar LEDs quando o botão é pressionado
            mode = (mode + 1) % 2;
            digitalWrite(9, HIGH);
            delay(50);  // Debounce do botão
            digitalWrite(9, LOW);

        }
        lastButtonState = buttonState;
    }

    // Pisca os LEDs de acordo com o modo atual
    if (mode == 0) {  // Modo crescente
        for (int i = pinStart; i <= pinEnd; i++) {
            digitalWrite(i, HIGH);
            delay(70);
            digitalWrite(i, LOW);
            delay(70);
        }
    } else {  // Modo decrescente
        for (int i = pinEnd; i >= pinStart; i--) {
            digitalWrite(i, HIGH);
            delay(70);
            digitalWrite(i, LOW);
            delay(70);
        }
    }
}
