# Esercizi – Cicli

## 01 – Conta fino a N
L’utente inserisce un numero **N** e il programma stampa tutti i numeri interi da **0** a **N**.

---

## 02 – Somma da 1 a N
L’utente inserisce un numero **N** e il programma calcola e stampa la somma di tutti i numeri interi da **1** a **N**.

---

## 03 – Tabellina di un Numero
L’utente inserisce un numero e il programma stampa la sua tabellina (da 1 a 10).

---

## 04 – Calcolo del Fattoriale
L’utente inserisce un numero e il programma calcola il suo fattoriale.

---

## 05 – Numeri Pari fino a N
L’utente inserisce un numero **N** e il programma stampa tutti i numeri pari da **1** a **N**.

---

## 06 – Numero Primo
L’utente inserisce un numero e il programma verifica se è un numero primo.

---

## 07 – Numeri Primi fino a N
L’utente inserisce un numero **N** e il programma stampa tutti i numeri primi da **1** a **N**.

---

## 08 – Moltiplicazione con Somma
L’utente inserisce due numeri interi positivi **N** e **M**.  
Il programma calcola il prodotto `N × M` usando solo somme ripetute.

---

## 09 – Numeri Divisibili
L’utente inserisce due numeri interi positivi:
- **n**: il divisore
- **m**: il limite superiore

Se **n** o **m** sono minori o uguali a 0, il programma richiede nuovamente i dati.  
Successivamente, stampa tutti i numeri da **1** a **m** che sono divisibili per **n**.

**Esempio:**  
Se `n = 3` e `m = 10`, l’output sarà:  
3 6 9

---

## 10 – Somma Condizionata
L’utente inserisce due numeri interi **N** e **M**.  
Se **N ≥ M**, il programma si chiude.  
Altrimenti, calcola la somma di tutti i numeri tra **N** e **M**, seguendo queste regole:
- Se il numero è pari, viene sommato direttamente.
- Se il numero è dispari, si sommano tutti i numeri da **1** fino a quel numero, e il risultato viene aggiunto.

**Esempio:**  
Se `N = 3` e `M = 6`, il risultato sarà:  
```
(1 + 2 + 3) + 4 + (1 + 2 + 3 + 4 + 5) + 6
```

---

## 11 – Triangolo Numerico
L’utente inserisce un numero **K**. Il programma stampa un triangolo di numeri con **K righe**, dove ogni riga contiene i numeri da **1** fino al numero della riga.

**Esempio per K = 5:**
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

---

## 12 – Conto alla Rovescia da N a 0
L’utente inserisce un numero **N**.  
Il programma stampa tutti i numeri da **N** a **0** in ordine decrescente.

---

## 13 – Somma Pari e Dispari
L’utente inserisce un numero **N**. Il programma calcola e stampa separatamente:
- La somma dei numeri pari da **1** a **N**
- La somma dei numeri dispari da **1** a **N**

---

## 14 – Indovina il Numero 
Scrivi un programma che generi un numero casuale tra **1 e 100** e chieda all'utente di indovinarlo.

- Dopo ogni tentativo, il programma deve dire se il numero inserito è **troppo alto**, **troppo basso** o **esatto**.
- Il programma continua fino a quando l'utente indovina il numero.
- Al termine, il programma deve stampare il **numero di tentativi** effettuati.

**Suggerimento:** usa `rand()` e `srand(time(0))` per generare numeri casuali.

---

## 15 – Statistiche su Numeri Inseriti

Chiedi all’utente **quanti numeri vuole inserire**, poi esegui le seguenti operazioni:

- Trova e stampa il **numero massimo** (il più alto)
- Trova e stampa il **numero minimo** (il più basso)
- Calcola e stampa la **media**
- Conta e stampa quanti numeri sono **pari** e quanti sono **dispari**

**Esempio:**
L’utente sceglie di inserire **5 numeri**:
```
Num1: 7
Num2: 8
Num3: 5
Num4: 4
Num5: 9
```
**Output atteso:**
```
Numero massimo: 9
Numero minimo: 4
Media: 6.6
Numeri pari: 2
Numeri dispari: 3
```

---

## 16 – Numero Perfetto
Scrivi un programma che chieda all'utente di inserire un numero intero positivo e verifichi se è un **numero perfetto**.  
Un numero perfetto è un numero uguale alla **somma dei suoi divisori** (escluso sé stesso).

**Esempi:**
- `6` è perfetto perché `1 + 2 + 3 = 6`
- `28` è perfetto perché `1 + 2 + 4 + 7 + 14 = 28`

**Output:**  
"Numero perfetto" oppure "Numero non perfetto"

---

## 17 – Serie di Collatz
Dato un numero intero positivo **n**, la sequenza di Collatz è definita così:
- Se **n** è pari, il prossimo numero è `n / 2`
- Se **n** è dispari, il prossimo numero è `3 * n + 1`
- La sequenza continua finché **n** diventa **1**

**Esempio per n = 6:**
```
6 → 3 → 10 → 5 → 16 → 8 → 4 → 2 → 1
```
**Curiosità:**  
Non è mai stato trovato un numero che genera una serie di Collatz infinita.  
Prova a modificare il programma per stampare la serie di Collatz per i **primi 100 numeri naturali**: tutte saranno finite.
