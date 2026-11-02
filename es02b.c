int main() {
    // Il processo padre inizializza tre variabili intere
    int base = 10;
    int altezza = 5;
    int risultato = 0;

    printf("[INIZIO] Base = %d, Altezza = %d\n", base, altezza);

    // Viene creato il processo figlio[cite: 42]
    pid_t pid = fork();

    if (pid < 0) {
        perror("Errore nella creazione del processo figlio");
        return 1;
    } 
    else if (pid == 0) {
        /* CODICE DEL FIGLIO */
        // Il processo figlio deve stampare il valore del perimetro[cite: 42]
        risultato = 2 * (base + altezza);
        printf("[FIGLIO - PID: %d] Il perimetro del rettangolo e': %d\n", getpid(), risultato);
    } 
    else {
        /* CODICE DEL PADRE */
        // Il processo padre calcola e stampa l'area del rettangolo[cite: 42]
        risultato = base * altezza;
        printf("[PADRE  - PID: %d] L'area del rettangolo e': %d\n", getpid(), risultato);
    }

    return 0;
}
