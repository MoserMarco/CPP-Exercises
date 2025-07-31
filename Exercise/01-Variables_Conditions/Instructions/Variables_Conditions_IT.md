# Esercizi – Variabili e Condizioni

## 01 – Somma di Due Numeri
L'utente inserisce due numeri, il programma deve calcolare la loro somma e mostrare il risultato.

## 02 – Pari o Dispari
L’utente inserisce un numero e il programam determina se è pari o dispari.

## 03 – Calcolo della Media
l'utente inserisce tre numeri, il programma calcola la loro media e la stampa.

## 04 – Verifica Maggiore Età
L'utente inserisce l'età di una persona e il programma verifica se è maggiore di 18 anni.

## 05 – Area di un Rettangolo
l'utente inserisce la base e l'altezza, il programma calcola l'area e il perimetro del un rettangolo.

## 06 – Numeri Speciali 
L’utente inserisce un numero **X**. Il programma deve controllare le seguenti condizioni:
- Se **X è pari**, controlla se è divisibile per **6**:
    - Se sì, stampa "Numero valido"
    - Altrimenti, stampa "Numero pari ma non divisibile per 6"
- Se **X è dispari**, controlla se è maggiore di **15**:
    - Se sì, stampa "Numero dispari maggiore di 15"
    - Altrimenti, controlla se è minore di **5**:
        - Se sì, stampa "Numero dispari minore di 5"
        - Altrimenti, stampa "Numero dispari tra 5 e 15"

## 07 – Valutazione dei Numeri 
Chiedi all’utente di inserire **tre numeri interi**: **A, B, C**.
Controlla le seguenti condizioni:
- Se **A è maggiore di B**, controlla se **C è pari**:
    - Se sì, stampa "A > B e C è pari"
    - Altrimenti, controlla se **C è multiplo di 5**:
        - Se sì, stampa "A > B e C è multiplo di 5"
        - Altrimenti, stampa "A > B ma C non è valido"
- Se **A è minore o uguale a B**, controlla se **B è multiplo di 3**:
    - Se sì, stampa "B è multiplo di 3"
    - Altrimenti, controlla se **B è maggiore di C**:
        - Se sì, stampa "B > C ma non è multiplo di 3"
        - Altrimenti, stampa "B ≤ C e non è multiplo di 3"

## 08 – Giorni della Settimana 
L’utente inserisce un numero da **1 a 7**. Il programma stampa il giorno corrispondente:
- 1 → Lunedì
- 2 → Martedì
- ...
- 7 → Domenica
  Se il numero è fuori intervallo, stampa "Numero non valido".

## 09 – Calcolatrice Semplice 
L’utente inserisce due numeri e un carattere che rappresenta un’operazione matematica: `+`, `-`, `*`, `/`.
Usa uno `switch` per eseguire l’operazione corrispondente e mostra il risultato.
Se l’operazione non è riconosciuta, stampa "Operazione non valida".

## 10 – Controllo Completo Utente 

Scrivi un programma che chieda all’utente:

- L’età (intero)
- Il sesso (‘M’ per maschio, ‘F’ per femmina, ‘O’ per altro)
- Il saldo del conto corrente (numero reale)

Il programma deve verificare:

1. Se l’età è minore di 18, stampa "Utente minorenne".
2. Altrimenti, verifica il sesso:
    - Caso ‘M’: stampa "Utente maschio adulto".
    - Caso ‘F’: stampa "Utente femmina adulta".
    - Caso ‘O’: stampa "Utente adulto di sesso non specificato".
    - Caso default: stampa "Sesso non valido".
3. Se il saldo del conto è negativo, stampa "Attenzione: conto in rosso".
4. Se il saldo è tra 0 e 1000 (inclusi), stampa "Saldo basso".
5. Se il saldo è maggiore di 1000, stampa "Saldo alto".
