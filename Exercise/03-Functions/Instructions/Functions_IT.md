# 📘 Esercizi – Funzioni

## 01 – Rettangolo di asterischi

### Descrizione
Scrivi una funzione che, data base e altezza, stampa un rettangolo con asterischi.

### Prototipo della funzione
```cpp
void stampaRettangolo(int base, int altezza);
```

### Parametri
- **base**: base del rettangolo
- **altezza**: altezza del rettangolo

### Valore di ritorno
Nessuno

### Esempio
```cpp
stampaRettangolo(3, 4);
```

**Output:**
```
***
* *
* *
***
```

---


## 02 – Elevamento a potenza

### Descrizione
Scrivi una funzione che calcoli la potenza di un numero intero elevato a un esponente positivo.

### Prototipo della funzione
```cpp
int potenza(int base, int esponente);
```

### Parametri
- **base**: numero da elevare
- **esponente**: esponente (positivo)

### Valore di ritorno
- Risultato del calcolo `base ^ esponente`

### Esempio
```cpp
potenza(2, 4);
```

**Output:**
```
16
```

---

## 03 - Numero pari o dispari (passaggio per valore)

**Descrizione:**
Scrivi una funzione `isPari(int n)` che ritorni `true` se `n` è pari, altrimenti ritorni `false`. Nel `main()`, chiedi un numero all'utente e stampa il risultato.

**Prototipo della funzione:**

```cpp
bool isPari(int n);
```

**Parametri:**

* `n`: numero intero da verificare

**Valore di ritorno:**

* `true` se il numero è pari
* `false` se il numero è dispari

**Esempio:**

```cpp
Inserisci un numero: 7
Dispari
```

---

## 04 – Differenza tra massimo e minimo

### Descrizione
Scrivi una funzione che riceve tre numeri interi e restituisce la differenza tra il più grande e il più piccolo.

### Prototipo della funzione
```cpp
int differenza(int n1, int n2, int n3);
```

### Parametri
- **n1**: primo numero
- **n2**: secondo numero
- **n3**: terzo numero

### Valore di ritorno
- Differenza tra il massimo e il minimo dei tre numeri

### Esempio
```cpp
differenza(6, 12, 2);
```

**Output:**
```
10
```

---

## 05 - Stampa numeri con invio

**Descrizione:**
La funzione controlla se `n` è minore o uguale o maggiore di 10. Se `n <= 10`, stampa tutti i numeri da `1` a `n-1` andando a capo ogni due numeri. Se `n > 10`, stampa tutti i numeri da `1` a `n-1` andando a capo ogni dieci numeri.

**Prototipo della funzione:**

```cpp
void numeriConInvio(int n);
```

**Parametri:**

* `n`: numero intero di riferimento

**Valore di ritorno:**

* Nessuno (stampa direttamente a terminale)

**Esempio:**

```cpp
numero(10)
Output:
1 2
3 4
5 6
7 8
9
```

---
Esercizio 2
Implementa la funzione
double perimetro(double x1, double y1, double x2, double y2, double x3, double y3)
La funzione calcola il perimetro del triangolo. Implementa una funzione che calcola la distanza tra due punti.

---

## 06 - Numero primo con funzione

**Descrizione:**
Scrivi una funzione `bool ePrimo(int n)` che ritorna `true` se il numero è primo, altrimenti `false`. Nel `main()`, chiedi un numero all'utente, richiama la funzione e stampa il risultato.

**Prototipo della funzione:**

```cpp
bool ePrimo(int n);
```

**Parametri:**

* `n`: numero da controllare

**Valore di ritorno:**

* `true` se il numero è primo
* `false` se il numero non è primo

**Esempio:**

```cpp
Inserisci un numero: 28
Il numero non è primo
```

---
Esercizio: 1
Scrivi una funzione in C che, data un’intera positiva n, stampi a schermo la lettera Sigma maiuscola (Σ) utilizzando il carattere *.
void satampaSigma(int n);
La dimensione n rappresenta l’altezza e la lunghezza n sara’ sempre dispari e maggiore di 5. Esempio:
n=5
*****            [*][*][*][*][*]
*                    [ ][*]
*                   [ ][  ][*]
*                    [ ][*]
****              [*][*][*][*][*]

---

## 07 - Calcolo del massimo comune divisore (MCD) (passaggio per valore e riferimento)

**Descrizione:**
Scrivi una funzione `mcd(int a, int b, int &risultato)` che calcoli il massimo comune divisore usando l'algoritmo di Euclide.

**Prototipo della funzione:**

```cpp
void mcd(int a, int b, int &risultato);
```

**Parametri:**

* `a`: primo numero (passato per valore)
* `b`: secondo numero (passato per valore)
* `risultato`: variabile dove verrà salvato il risultato (passato per riferimento)

**Valore di ritorno:**

* Nessuno (modifica la variabile `risultato` passata per riferimento)

**Esempio:**

```cpp
Inserisci due numeri: 48 18
MCD: 6
```

---

## 08 - Calcolo del minimo comune multiplo (MCM)

**Descrizione:**
Calcola l'MCM tra due numeri interi utilizzando la formula:

```text
MCM(a, b) = a * b / MCD(a, b)
```

Utilizza due funzioni:

* `int MCD(int a, int b);`
* `int MCM(int a, int b);`

**Prototipo delle funzioni:**

```cpp
int MCD(int a, int b);
int MCM(int a, int b);
```

**Parametri:**

* `a`: primo numero
* `b`: secondo numero

**Valore di ritorno:**

* `MCD()`: restituisce il massimo comune divisore tra `a` e `b`
* `MCM()`: restituisce il minimo comune multiplo tra `a` e `b`

**Esempio:**

```cpp
MCM(4, 6) // ritorna 12
```
---

## 09 – Stampa una M maiuscola

### Descrizione
Scrivi una funzione che stampa una **M maiuscola** data un'altezza.

### Prototipo della funzione
```cpp
void stampaM(int altezza);
```

### Parametri
- **altezza**: altezza della M da stampare

### Valore di ritorno
Nessuno

### Esempio
```cpp
stampaM(5);
```

**Output:**
```
*     *
**   **
* * * *
*  *  *
*     *
```

---

Esercizio 7: Tavola pitagorica
Scrivi un programma che chieda all'utente di inserire un numero intero positivo N e stampi la tavola pitagorica fino a N.
Deve ritornare la somma dei prodotti calcolati
prototipo: int tavolaPitagorica(int n)
parametri:
n: numero di cui si vuole stampare la tavola pitagorica
ritorno:
somma di tutti i numeri che formano la tavola pitagorica
Esempio per N = 3:
1 2 3
2 4 6
3 6 9




Esercizio 3: Trasformazione numeri.
Scrivi una funzione che riceve per parametri due numeri dall'utente con la virgola e trasforma il minore dei due in 0 se è negativo e in 1 se è positivo e il maggiore trasforma nel suo reciproco.
Prototipo: void trasformazione(float &n1, float &n2);
Parametri:
n1: primo numero
n2: secondo numero
esempio
float n1=0.7, n2=1.5;
trasformazione(n1, n2)
cout<< n1<< "  "<< n2; 
//n1 = 1, n2 = 0.666

Esercizio 1

void Trapezio (int b, int l);

Descrizione: La funzione stampa un trapezio isoscele con b=base minore e l=lunghezza del lato obliquo.

Esempio (b=4, l=3)

```
   ____
  /    \
 /      \
/________\
```


Esercizio 5: Conta cifre
Scrivi un programma che chieda all'utente di inserire un numero intero positivo e conti quante cifre ha.
Esempio:
. 12345 → Il programma stampa 5
. 9 → Il programma stampa 1
Suggerimento: usa un ciclo per dividere ripetutamente il numero per 10 finché non diventa 0.


Esercizio 1: Scambio di due numeri (passaggio per riferimento)
Scrivi una funzione scambia(int &a, int &b) che scambi i valori di due numeri interi passati per
riferimento.
Nel main(), fai inserire due numeri all'utente, richiama la funzione e stampa i valori scambiati.
Esempio:
Inserisci due numeri: 5 10
Dopo lo scambio: 10 5


Esercizio 5:
scrivi una funzione che riceve per parametro un numero e ritorna la somma delle sue cifre
prototipo: int sommaCifre(int n):
parametri:
n: numero di cui si vuole calcolare la somma delle cifre
ritorno:
la somma delle cifre del numero passato per parametro
Esempio:
int somma = sommaCifre(123)
cout<< somma 
// somma deve essere uguale a 6

Esercizio 3
Implementa la funzione:
Int divisibile3(int n)
Stampa tutti i numeri divisibili per 3 minori di n. Per capire se un numero è minore di 3 calcola la somma delle sue cifre e stabilisci se la somma è divisibile per 3. I numeri saranno sempre minori di 1000.
Consiglio: usa la funzione che hai scritto per l'esercizio precedente

Esercizio 3
Implementare la funzione:
void capsula(int n);
La funzione deve stampare su
schermo una capsula
ottagonale di lato `n`.
```
   ___
  /   \
 /     \
/       \
|       |
|       |
|       |
\       /
 \     /
  \___/
   
```

Esercizio 5: Decomposizione in fattori primi
Scrivi una funzione che riceva per parametro un numero e ne stampa la serie dei fattori primi
void fattoriPrimi(int n) 
parametri:
n: numero di cui si vuole calcolare la serie di fattori primi
Esempio:
fattoriPrimi( 28)
output:
2,2,7

Esercizio 6
Implementare la funzione:
void sommaFrazioni(int numeratore1, int denominatore1, int numeratore2, int
denominatore2, int &numeratoreR, int &denominatoreR);
Questa funzione riceve quattro interi rappresentanti i numeratori e i denominatori di due
frazioni e calcola la loro somma.

Esercizio 8
Implementare la funzione:
void fattorePrimo(int n, int &divisore, int &molteplicita);
Questa funzione riceve un numero intero `n` e restituisce il suo più grande fattore primo e la
sua molteplicità.

Esercizio 1
Implementare la funzione:
int inverti(int i);
La funzione accetta come parametro un numero intero non negativo e restituisce il numero
ottenuto invertendo le cifre della sua rappresentazione in base dieci. Ad esempio, dato il
numero `123`, la funzione deve restituire `321`.


Esercizio 6: Verifica di un numero Palindromo
Scrivi un programma che chieda all'utente di inserire un numero intero positivo e verifichi se il numero è un Palindromo (ovvero se si legge uguale da sinistra a destra e da destra a sinistra).
Ad esempio:
. 12321 è Palindromo perché si legge allo stesso modo da entrambi i lati.
. 12345 non è Palindromo.
Il programma deve stampare se il numero è Palindromo o meno.
consiglio: usa la funzione che hai scritto nell'esercizio precedente;

11 - casuale
Implementare la funzione:
int casuale(int minimo, int massimo);
ritorna un intero casuale tra minimo e massimo compresi

Esercizio 5

int pino(int n1, int n2);

Descrizione: La funzione chiede all’utente 10 tabelline casuali diverse. Se l’utente le fa tutte giuste, stampa "Bravissimo". Se l’utente fa un massimo di 13 tentativi, la funzione stampa “Bravo”, altrimenti stampa “ALLENATI!”.

Esempio (n1, n2)

Scrivi il prodotto tra 2 e 8: 16
Scrivi il prodotto tra 6 e 1: 5
Riprova: 4
Riprova: 4
Riprova: 4
Riprova: 6
Scrivi il prodotto tra 3 e 10: 30
Scrivi il prodotto tra 6 e 3: 18
Scrivi il prodotto tra 5 e 10: 50
Scrivi il prodotto tra 2 e 9: 18
Scrivi il prodotto tra 2 e 6: 12
Scrivi il prodotto tra 8 e 5: 40
Scrivi il prodotto tra 5 e 1: 5
Scrivi il prodotto tra 1 e 10: 10
ALLENATI!

Esercizio 4
Cenni di probabilità
Per calcolare la probabilità di un evento, bisogna contare il numero di volte in cui l’evento si verifica e dividerlo per il numero totale di esperimenti.
Esempio pratico:
Supponiamo di voler calcolare la probabilità di segnare un canestro con un tiro da tre punti. Se eseguiamo 100 tiri e realizziamo 45 canestri, la probabilità sarà:
45/100 = 0.45
Compito:
Scrivi un programma che stimi la probabilità di ottenere un numero divisibile per 3 lanciando un dado.
•	Crea una funzione che simuli il lancio di un dado generando un numero casuale tra 1 e n.
•	Scrivi una seconda funzione che calcoli la probabilità stimata lanciando il dado 100 000 volte.
•	Usa un dado a 6 facce.
Prototipi delle funzioni:
int tiroDado(int n);  
double probabilita(int n);  
Dove n rappresenta il numero di facce del dado.
________________________________________


Esercizio 6 (Facoltativo, consigliato se siete interessati alla probabilita’)
Se decidi di fare questo esercizio scrivimi una email cosi ne parliamo in classe finita la lezione.
Probabilità condizionata
Per calcolare la probabilità che due eventi A e B si verifichino contemporaneamente, si moltiplica la probabilità di A dato che B è accaduto per la probabilità di B.
P(A∩B)=P(A∣B)⋅P(B)
Esempio pratico:
In una classe di 20 studenti, ci sono 12 maschi e 8 femmine. Vogliamo calcolare la probabilità di selezionare casualmente uno studente maschio con i capelli neri. Supponiamo che metà dei maschi abbia i capelli neri.
•	Probabilità di avere i capelli neri dato che lo studente scelto è maschio:
meta’ => ½ = 0.5
•	Probabilità di scegliere un maschio:
12/20 = 3/5
•	Probabilità di selezionare un maschio con i capelli neri:
0.5 * 3/5 = 3/10
Compito:
Scrivi un programma che calcoli la probabilità di ottenere un numero dispari superiore a 3 lanciando un dado.
•	Determina la probabilità di ottenere un numero maggiore di 3.
•	Determina la probabilità che il numero ottenuto sia dispari tra quelli compresi tra 4 e 6.
•	Moltiplica queste probabilità per ottenere la probabilità complessiva.
•	Usa un dado a 6 facce e stima la probabilità eseguendo 200 lanci.



✅ Esercizio 3 — Risiko: confronto tra dadi
void risiko(int d11, int d12, int d13, int d21, int d22, int d23, int &c1persi, int &c2persi);
Descrizione: Simula un singolo round di combattimento in Risiko.
Il giocatore 1 (attaccante) lancia 1-3 dadi: d11, d12, d13.
Il giocatore 2 (difensore) lancia 1-3 dadi: d21, d22, d23.
I dadi non utilizzati hanno valore 0.
La funzione confronta i dadi (dopo averli ordinati in ordine decrescente) e aggiorna i riferimenti c1persi e c2persi con le perdite subite da ciascun giocatore.
________________________________________



✅ Esercizio 3bis — Risiko: simulazione battaglia completa
int risiko(int c1, int c2);
Descrizione: Simula una battaglia completa in Risiko tra l’attaccante (giocatore 1) e il difensore (giocatore 2).
La battaglia continua finché:
•	il giocatore 1 ha più di 1 carroarmato;
•	oppure finché il giocatore 2 ha ancora carri armati.
Restituisce:
•	1 se l’attaccante vince,
•	2 se il difensore resiste.

Esercizio 9
Implementare la funzione:
int Tokyo(int g1d1, int g1d2, int g2d1, int g2d2);
Questa funzione implementa le regole del gioco "Tokyo" e restituisce `1` se vince il giocatore
1, `2` se vince il giocatore 2.
Tokyo (gioco) - Wikipedia

Esercizio 9 Bis
Implementare la funzione:
int roundTokyo(int valoreMassimo);
Questa funzione simula un round del gioco "Tokyo". Il parametro `valoreMassimo` indica il
numero massimo presente sulle facce dei dadi (es. 6, 12, 20). La funzione deve generare
casualmente i valori dei dadi e restituire il numero del giocatore vincente.

Esercizio 9 tris (Molto difficile, contattatemi se non e’ chiaro)
Implementare la funzione:
int roundTokyoMultiplayer(int valoreMassimo, int idg1, int idg2);
Simula una reale round di tokio, chiedendo ai giocatoi di decidere se bleffare e di poter
credere o no all’avversario. int idg1, int idg2 sono gli identificatori dei giocatori, a tirare per
primo i dadi e’ sempre il g1. A giocare alla partita sono solo 2 giocatori. 