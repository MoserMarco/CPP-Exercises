# Esercizi - Funzioni

## 01 - Rettangolo di asterischi

### Descrizione

Scrivi una funzione che, data una base e un'altezza, stampa un rettangolo con asterischi.

### Prototipo della funzione

```cpp
void asteriskRectangle(int base, int height);
```

### Parametri

- **base**: base del rettangolo
- **height**: altezza del rettangolo

### Valore di ritorno

Nessuno

### Esempio

```cpp
asteriskRectangle(3, 4);
```

### Output:

```
***
* *
* *
***
```

-----

## 02 - Elevamento a potenza

### Descrizione

Scrivi una funzione che calcoli la potenza di un numero intero elevato a un esponente positivo. Non usare pow.
La base e l'esponente devono essere entrambi positivi, in caso contrario la funzione deve ritornare ```-1```
### Prototipo della funzione

```cpp
int exponentiation(int base, int exponent);
```

### Parametri

- **base**: numero da elevare
- **exponent**: esponente (positivo)

### Valore di ritorno

- Risultato del calcolo `base ^ exponent`

### Esempio

```cpp
exponentiation(2, 4);  //ritorna 16
```

-----

## 03 - Numero pari o dispari

### Descrizione:

Scrivi una funzione `isEven(int n)` che ritorni `true` se `n` è pari, altrimenti ritorni `false`.

### Prototipo della funzione:

```cpp
bool isEven(int n);
```

### Parametri:

* `n`: numero intero da verificare

### Valore di ritorno:

* `true` se il numero è pari
* `false` se il numero è dispari

### Esempio:

```cpp
isEven(7); // ritorna 0 (Falso)
isEven(4); // ritorna 1 (Vero)

```

-----

## 04 - Differenza tra massimo e minimo

### Descrizione

Scrivi una funzione che riceve tre numeri interi e restituisce la differenza tra il più grande e il più piccolo.

### Prototipo della funzione

```cpp
int difference(int n1, int n2, int n3);
```

### Parametri

- **n1**: primo numero
- **n2**: secondo numero
- **n3**: terzo numero

### Valore di ritorno

- Differenza tra il massimo e il minimo dei tre numeri

### Esempio

```cpp
difference(6, 12, 2);  //ritorna 10
```



-----

## 05 - Stampa numeri con invio

### Descrizione:

La funzione controlla se `n` è minore o uguale o maggiore di 10. Se `n <= 10`, stampa tutti i numeri da `1` a `n-1` andando a capo ogni due numeri. Se `n > 10`, stampa tutti i numeri da `1` a `n-1` andando a capo ogni dieci numeri.
`n` deve essere maggiore di 1
### Prototipo della funzione:

```cpp
void numbersWithNewlines(int n);
```

### Parametri:

* `n`: numero intero di riferimento

### Valore di ritorno:

* Nessuno (stampa direttamente a terminale)

### Esempio:

```cpp
numbersWithNewlines(10)
numbersWithNewlines(15)
numbersWithNewlines(1)
```
### Output:
```
1 2
3 4
5 6
7 8
9
1 2 3 4 5 6 7 8 9 10
11 12 13 14 
n must be greater than 1.

```

-----

## 06 - Perimetro del triangolo

### Descrizione:

Scrivi una funzione che calcola il perimetro di un triangolo dati i vertici nel piano cartesiano. Usa una funzione ausiliaria per calcolare la distanza tra due punti.

### Prototipo delle funzioni:

```cpp
double distance(double x1, double y1, double x2, double y2);
double perimeter(double x1, double y1, double x2, double y2, double x3, double y3);
```

### Parametri:

- `x1`, `y1`: coordinate del primo punto
- `x2`, `y2`: coordinate del secondo punto
- `x3`, `y3`: coordinate del terzo punto

### Valore di ritorno:

Restituisce il perimetro del triangolo.

### Esempio:

```cpp
perimeter(0, 0, 3, 0, 0, 4) // ritorna 12
```

-----

## 07 - Numero primo con funzione

### Descrizione:

Scrivi una funzione `bool isPrime(int n)` che ritorna `true` se il numero è primo, altrimenti `false`.

### Prototipo della funzione:

```cpp
bool isPrime(int n);
```

### Parametri:

* `n`: numero da controllare

### Valore di ritorno:

* `true` se il numero è primo
* `false` se il numero non è primo

### Esempio:

```cpp
isPrime(28); // ritorna 0 (Falso)
isPrime(73); // ritorna 1 (Vero)
```

-----

## 08 - Stampa Sigma maiuscola

### Descrizione:

Scrivi una funzione che stampa una Sigma maiuscola (Σ) con altezza e larghezza `n`. `n` deve essere dispari e maggiore di 5.

### Prototipo della funzione:

```cpp
void printSigma(int n);
```

### Parametri:

- `n`: dimensione (altezza e larghezza) della Sigma

\*\*Valore di ritorno:
Nessuno

### Esempio:

```cpp
printSigma(5);
printSigma(6);
```

### Output:

```
*****
 *
  *
 *
*****
n must be odd and greater than 5.
```

-----

## 09 - Calcolo del massimo comune divisore (GCD)

### Descrizione:

Scrivi una funzione `int GCD(int a, int b)` che calcoli il massimo comune divisore usando l'algoritmo di Euclide.

### Prototipo della funzione:

```cpp
int GCD(int a, int b);
```

### Parametri:

* `a`: primo numero (passato per valore)
* `b`: secondo numero (passato per valore)

### Valore di ritorno:

* il MCD calcolato

### Esempio:

```cpp
GCD(48, 18); // ritorna 6
```

-----

## 10 - Calcolo del minimo comune multiplo (MCM)

### Descrizione:

Calcola l'MCM tra due numeri interi utilizzando la formula:
`LCM(a, b) = a * b / GCD(a, b)`
Utilizza due funzioni: `int GCD(int a, int b);` e `int LCM(int a, int b);`.

### Prototipo delle funzioni:

```cpp
int GCD(int a, int b);
int LCM(int a, int b);
```

### Parametri:

* `a`: primo numero
* `b`: secondo numero

### Valore di ritorno:

* `GCD()`: restituisce il massimo comune divisore tra `a` e `b`
* `LCM()`: restituisce il minimo comune multiplo tra `a` e `b`

### Esempio:

```cpp
LCM(4, 6) // ritorna 12
```

-----

## 11 - Stampa una M maiuscola

### Descrizione

Scrivi una funzione che stampa una **M maiuscola** data un'altezza.

### Prototipo della funzione

```cpp
void printM(int height);
```

### Parametri

- **height**: altezza della M da stampare

### Valore di ritorno

Nessuno

### Esempio

```cpp
printM(5);
```

### Output:

```
*   *
** **
* * *
*   *
*   *
```

-----

## 12 - Tavola pitagorica

### Descrizione:

Scrivi una funzione che stampa la tavola pitagorica fino a `n × n` e restituisce la somma dei prodotti.

### Prototipo della funzione:

```cpp
int multiplicatioTable(int n);
```

### Parametri:

- `n`: dimensione della tavola pitagorica

### Valore di ritorno:

Somma di tutti i prodotti calcolati nella tavola

### Esempio:

```cpp
multiplicatioTable(3);
```

### Output:

```
1 2 3
2 4 6
3 6 9
```

**Valore ritornato:** `36`

-----

## 13 - Trasformazione numeri

### Descrizione:

Scrivi una funzione che riceve due numeri reali:

- il minore dei due viene trasformato in `0` se è negativo o `1` se è positivo
- il maggiore viene trasformato nel suo reciproco

### Prototipo della funzione:

```cpp
void transformation(float &n1, float &n2);
```

### Parametri:

- `n1`: primo numero
- `n2`: secondo numero

### Valore di ritorno:

Nessuno (passaggio per riferimento)

### Esempio:

```cpp
float a = 0.7, b = 1.5;
transformation(a, b);
cout << a << " " << b;
// Output: 1 0.666...
```

-----

## 14 - Trapezio isoscele

### Descrizione:

Scrivi una funzione che stampa un trapezio isoscele con `b` come base minore e `l` come lunghezza dei lati obliqui.
`b` e `l` devono essere maggiori di 0
### Prototipo della funzione:

```cpp
void trapezoid(int b, int l);
```

### Parametri:

- `b`: base minore
- `l`: lunghezza del lato obliquo

### Valore di ritorno:

Nessuno

### Esempio:

```cpp
trapezoid(4, 3);
trapezoid(-1, 3);
```

### Output:

```
   ____
  /    \
 /      \
/________\
b and l must be greater than 0.
```

-----

## 15 - Conta cifre

### Descrizione:

Scrivi una funzione che riceve un numero intero positivo e ritorna il numero delle sue cifre.
`Se `n` e' negativo la funzione deve ritornare -1;
### Prototipo della funzione:

```cpp
int countDigits(int n);
```

### Parametri:

- `n`: numero da analizzare

### Valore di ritorno:

Numero delle cifre del numero

### Esempio:

```cpp
countDigits(12345); // ritorna 6
countDigits(9);  // ritorna 1
countDigits(-2);  // ritorna -1
```

-----

## 16 - Scambio di due numeri

### Descrizione

Scrivi una funzione che scambi i valori di due numeri interi passati per riferimento.

### Prototipo della funzione

```cpp
void swap(int &a, int &b);
```

### Parametri

- **a**: primo numero intero
- **b**: secondo numero intero

### Valore di ritorno

Nessuno

### Esempio

```cpp
int a = 5, b = 10;
swap(a, b);
cout << a << " " << b;
// Output: 10 5
```

-----

## 17 - Somma delle cifre

### Descrizione

Scrivi una funzione che riceve per parametro un numero intero positivo e restituisce la somma delle sue cifre.
Se `n` e' negativo la funzione deve ritornare `-1`.
### Prototipo della funzione

```cpp
int sumDigits(int n);
```

### Parametri

- **n**: numero intero positivo

### Valore di ritorno

La somma delle cifre del numero

### Esempio

```cpp
sumDigits(123); // ritorna 6

```

-----

## 18 - Divisibili per 3

### Descrizione

Scrivi una funzione che stampi tutti i numeri minori di `n` le cui cifre sommate sono divisibili per 3.
`n` deve essere maggiore uguale di 0.
### Prototipo della funzione

```cpp
void divisible3(int n);
```

### Parametri

- **n**: limite superiore (massimo 1000)

### Valore di ritorno

Nessuno

### Esempio

```cpp
divisible3(16);
// Output: 3 6 9 12 15
divisible3(-2);
// Output: 3 6 9 12 15
```

-----

## 19 - Capsula ottagonale

### Descrizione

Scrivi una funzione che disegni una capsula ottagonale su schermo, data la dimensione `n`.
`n` deve essere maggiore di 0.
### Prototipo della funzione

```cpp
void capsule(int n);
```

### Parametri

- **n**: lato della capsula

### Valore di ritorno

Nessuno

### Esempio

```cpp
capsule(3);
capsule(0);
```

### Output:

```
   ---
  /   \
 /     \
/       \
|       |
|       |
|       |
\       /
 \     /
  \   /
   ---
n must be greater than 0.
```

-----

## 20 - Decomposizione in fattori primi

### Descrizione

Scrivi una funzione che riceve un numero intero e ne stampa i fattori primi.
`n` deve essere maggiore di 1.
### Prototipo della funzione

```cpp
void primeFactorization(int n);
```

### Parametri

- **n**: numero da scomporre

### Valore di ritorno

Nessuno

### Esempio

```cpp
primeFactorization(28);
// Output: 2 2 7
primeFactorization(1);
// Output: n  must be greater than 1.
```

-----

## 21 - Somma di frazioni

### Descrizione

Scrivi una funzione che somma due frazioni e restituisce il risultato nei parametri passati per riferimento.

### Prototipo della funzione

```cpp
void sumFractions(int numerator1, int denominator1, int numerator2, int denominator2, int &numeratorR, int &denominatorR);
```

### Parametri

- **numerator1**: numeratore prima frazione
- **denominator1**: denominatore prima frazione
- **numerator2**: numeratore seconda frazione
- **denominator2**: denominatore seconda frazione
- **numeratorR**: numeratore del risultato
- **denominatorR**: denominatore del risultato

### Valore di ritorno

Nessuno

### Esempio

```cpp
int nr, dr;
sumFractions(1, 2, 1, 3, nr, dr);
cout<< nr << dr;
// Output: 5 6
```

-----

## 22 - Fattore primo più grande

### Descrizione

Scrivi una funzione che restituisce il più grande fattore primo di `n` e la sua molteplicità.
Se `n` e' minore uguale a 1 la funzione deve impostare `factor= -1` e `occurency= -1`.
### Prototipo della funzione

```cpp
void primeFactor(int n, int &factor, int &occurency);
```

### Parametri

- **n**: numero da analizzare
- **factor**: fattore primo più grande
- **occurency**: quante volte il fattore divide `n`

### Valore di ritorno

Nessuno

### Esempio

```cpp
int f, o;
primeFactor(48, f, o);
cout<< f << 0;
// Output: 3 1
primeFactor(1, f, o);
cout<< f << 0;
// Output: -1 -1
```

-----

## 23 - Inverti numero

### Descrizione

Scrivi una funzione che riceve un numero intero positivo e restituisce il numero con le cifre invertite.
### Prototipo della funzione

```cpp
int invert(int n);
```

### Parametri

- **n**: numero da invertire

### Valore di ritorno

Il numero invertito

### Esempio

```cpp
invert(123); // ritorna 321
invert(-6798); // ritorna -8976
```

-----

## 24 - Verifica palindromo

### Descrizione

Scrivi una funzione che verifica se un numero è un palindromo (si legge uguale da sinistra a destra e viceversa).

### Prototipo della funzione

```cpp
bool isPalindrome(int n);
```

### Parametri

- **n**: numero da verificare

### Valore di ritorno

`true` se il numero è palindromo, `false` altrimenti

### Esempio

```cpp
isPalindrome(-12321); //ritorna 1 (true)
isPalindrome(34534); //ritorna 0 (false)

```

-----

## 25 - Numero casuale

### Descrizione

Scrivi una funzione che restituisce un numero intero casuale compreso tra `min` e `max`. se `max` e' minore di `min` la funzione deve scambiare le variabili

### Prototipo della funzione

```cpp
int random(int min, int max);
```

### Parametri

- **min**: valore minimo
- **max**: valore massimo

### Valore di ritorno

Un intero casuale nell'intervallo dato

### Esempio

```cpp
random(1, 10);  // ritorna un valore compreso tra 1 e 10
random(-6, 0);  // ritorna un valore compreso tra -6 e 0
```

-----

## 26 - Tabelline

### Descrizione:

Scrivi una funzione che chiede all’utente di risolvere 10 tabelline casuali. Ogni risposta errata conta come tentativo. Se l’utente completa l'esercizio facendo:

* meno di 3 errori: stampa `Very good`
* dai 4 ai 10 errori: stampa `good`
* più di 10 errori: stampa `Train more!`

### Prototipo della funzione:

```cpp
void tables(int n1, int n2);
```

### Parametri:

* `n1`: primo numero massimo per generare le tabelline
* `n2`: secondo numero massimo per generare le tabelline

### Valore di ritorno:

Nessuno

### Esempio:

```cpp
tables(10, 10);
```

### Output:

```
Write the product between 2 and 8: 16
Write the product between 6 and 1: 5
Retry: 4
Retry: 2
Retry: 8
Retry: 6
...
Train more!
```

-----

## 27 - Probabilità

### Cenni di probabilità

Per calcolare la probabilità di un evento, bisogna contare il numero di volte in cui l’evento si verifica e dividerlo per il numero totale di esperimenti.

**Esempio pratico:** Supponiamo di voler calcolare la probabilità di segnare un canestro con un tiro da tre punti. Se eseguiamo 100 tiri e realizziamo 45 canestri, la probabilità sarà: 45/100 = 0.45

### Descrizione:

Scrivi un programma che stimi la probabilità di ottenere un numero divisibile per 3 lanciando un dado di `n` facce. Crea una funzione che simuli il lancio di un dado generando un numero casuale tra 1 e n. Scrivi una seconda funzione che calcoli la probabilità stimata lanciando il dado 100 000 volte.
Se `n` e' minore di 1 la funzione deve ritornare -1.
### Prototipo delle funzioni:

```cpp
int rollDie(int n);
double probability(int n);
```

### Parametri:

* `n`: numero di facce del dado (es. 6)

### Valore di ritorno:

* `rollDie()`: ritorna un numero casuale tra 1 e `n`
* `probability()`: ritorna la probabilità stimata

### Esempio:

```cpp
probability(6); // returns 0.333333
probability(8); // returns 0.25
probability(0); // returns -1
```

-----

## 28 - Probabilità congiunta condizionata

### Probabilità condizionata

Per calcolare la probabilità che due eventi A e B si verifichino contemporaneamente, si moltiplica la probabilità di A dato che B è accaduto per la probabilità di B.
```
P(A∩B)=P(A∣B)⋅P(B)
```

**Esempio pratico:** In una classe di 20 studenti, ci sono 12 maschi e 8 femmine. Vogliamo calcolare la probabilità di selezionare casualmente uno studente maschio con i capelli neri. Supponiamo che metà dei maschi abbia i capelli neri.

- Probabilità di avere i capelli neri dato che lo studente scelto è maschio: metà =\> ½ = 0.5
- Probabilità di scegliere un maschio: 12/20 = 3/5
- Probabilità di selezionare un maschio con i capelli neri: 0.5 \* 3/5 = 3/10

### Descrizione:

Calcola la probabilità di ottenere un numero dispari maggiore di `t` lanciando un dado con `n` facce. **Suggerimento:** Calcola la probabilita' di ottenere un numero maggiore di `t` e di ottenere un numero dispari generando un numero casuale tra `t` e `n`. Poi usa la definizione di probabilita condizionata per calcolare la probabilita' richiesta.

### Prototipo della funzione:

```cpp
double jointProbability();
```

### Parametri:

* `t`: valore soglia, si considerano solo i risultati strettamente maggiori di t.

* `n`: numero totale di facce del dado.

### Valore di ritorno:

Restituisce la probabilità stimata.

### Esempio:

```cpp
jointProbability(3,6); // ritorna 0.166
jointProbability(14,10); // ritorna 0
jointProbability(4,0); // ritorna -1
```

-----

## 29 - Risiko: confronto tra dadi

### Descrizione:

Simula un round di Risiko tra attaccante e difensore, confrontando fino a 3 dadi per parte.

### Prototipo della funzione:

```cpp
void riskRound(int d11, int d12, int d13, int d21, int d22, int d23, int &p1lost, int &p2lost);
```

### Parametri:

* `d11, d12, d13`: dadi del giocatore 1 (attaccante, i dadi non sono in ordine)
* `d21, d22, d23`: dadi del giocatore 2 (difensore, i dadi non sono in ordine)
* `p1lost`: carri persi dal giocatore 1 (output)
* `p2lost`: carri persi dal giocatore 2 (output)

### Valore di ritorno:

Nessuno

### Esempio:

```cpp
int p1 = 0, p2 = 0;
riskRound(1, 5, 5, 4, 3, 1, p1, p2);
cout<< p1 << p2
// output: 1 2
```

-----

## 30 - Risiko: simulazione battaglia completa

### Descrizione:

Simula un'intera battaglia in Risiko finché uno dei due giocatori non ha più carri. Il valore dei dadi deve essere generato casualmente (dadi a 6 facce).

### Prototipo della funzione:

```cpp
int risk(int p1, int p2);
```

### Parametri:

* `p1`: carri del giocatore 1 (attaccante)
* `p2`: carri del giocatore 2 (difensore)

### Valore di ritorno:

* `1` o `2` a seconda del vincitore

### Esempio:

```cpp
risk(10, 5); // ritorna 1 o 2 a seconda di quale giocatore ha vinto
```

-----

## 31 - Tokio: calcola il vincitore

### Descrizione:

Simula un round del gioco Tokio e restituisce il vincitore in base ai punteggi.

### Prototipo della funzione:

```cpp
int Tokyo(int p1d1, int p1d2, int p2d1, int p2d2);
```

### Parametri:

* `p1d1`, `p1d2`: dadi giocatore 1
* `p2d1`, `p2d2`: dadi giocatore 2

### Valore di ritorno:

* `1` o `2` a seconda del vincitore

### Esempio:

```cpp
Tokyo(6, 3, 4, 2);  // ritorna 1 
Tokyo(2, 2, 5, 6);  // ritorna 1 
```

-----

## 32 - Tokio: singolo round

### Descrizione:

Simula un round casuale del gioco Tokio con valore dei dati generato casualmente fino a `max`.

### Prototipo della funzione:

```cpp
int roundTokyo(int max);
```

### Parametri:

* `max`: massimo valore sulle facce dei dadi

### Valore di ritorno:

* `1` o `2` a seconda del vincitore

### Esempio:

```cpp
roundTokyo(6); // ritorna 1 o 2 a seconda di quale giocatore ha vinto
```

-----

## 33 - Tokio: round completo multiplayer

### Descrizione:

Simula un round realistico di Tokyo con bluff tra due giocatori. Il giocatore 1 inizia sempre. **Consiglio:** modifica la funzione dell'esercizio precedente consentendo al giocatore di bleffare sul valore dei dati dopo che sono stati generati e all'avversario di accettare o rifiutare i dadi.

### Prototipo della funzione:

```cpp
int completeTokyoRound(int max);
```

### Parametri:

* `max`: massimo valore dei dadi

### Valore di ritorno:

* `1` o `2` a seconda del vincitore

### Esempio:

```cpp
completeTokyoRound(6); // ritorna 1 o 2 a seconda di quale giocatore ha vinto
```