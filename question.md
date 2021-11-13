Esercizi
===
x = 0 y = 8 (numeri matricola usati)
---
<br>

- Una cisterna è dotata di 4 pompe: PA e PB riempiono la cisterna, PC e PD la svuotano. Sapendo che la capacità delle pompe è rispettivamente di 7, 5, 8 e 4 litri/secondo
si indichi (tramite tabella di verità) per quali configurazioni di pompe accese la vasca si riempirà. Si scriva la tavola di verità e si derivi
la corrispondente espressione booleana.
 
>__A__ __B__ C __D__ + __A__ B C __D__+ A __B__ __C__ __D__ + A __B__ C __D__ +A __B__ C D + A B __C__ __D__ +  A B C __D__  <br>
ris: __D__(A+C) + A __B__ C
 
- ABC+ABD+BC+C+AD+A+B+AA
>A+B+C
 
- Siano x e y le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465 x=6, y=5). Una CPU impiega 7 microsecondi per eseguire un frammento di programma
composto da: x istruzioni di tipo A, y di tipo B e 11 di tipo C. Sapendo che i tre tipi di istruzioni richiedono rispettivamente 14, 49 e 21 cicli di datapath,
si calcoli la frequenza della CPU, esprimendo il risultato in MHz
>ris: 0.000229 MHz 0.00211
 
- Sia x l’ultima cifra della propria matricola in base 10 (esempio: matricola 3465 x=5). Si consideri una CPU dotata di una cache di 1° livello
con tempo di accesso pari a 5 nanosecondi. Durante l’esecuzione di un programma, la CPU ha impiegato 2,11 microsecondi per leggere dalla memoria 22+x parole;
sapendo che x+2 di tali parole erano già contenute nella cache all’inizio dell’esecuzione del programma e che durante l’esecuzione non è mai stato necessario
rimpiazzare parole nella cache, si calcoli il tempo di accesso a una parola della RAM, esprimendo il risultato in nanosecondi.
>ris: 105 ns
 
- Su una CPU, un algoritmo viene inizialmente eseguito in (100+2𝑥+3𝑦)secondi. Sapendo che la percentuale di istruzioni in virgola mobile dell’algoritmo è 5∙(𝑥+1), si stimi il nuovo tempo di esecuzione nell’ipotesi di sostituire l’unità che esegue le operazioni in virgola mobile con una più veloce (fattore di accelerazione: 𝑦+2).
>ris: 118,4 s
 
- Siano A = (a1 a0) e B = (b1 b0) due numeri binari (con a1 e b1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A xor B) è un numero dispari.
Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana.
>ris: __A__ B + A __B__
 
 
- Sia x l’ultima cifra della propria matricola in base 10 (esempio: matricola 3465 x=5). Un programma P viene eseguito in 10 secondi su una CPU A,
dotata di una frequenza di clock di (1+x)*10 MHz. È stata progettata una nuova CPU B in grado di operare a una frequenza maggiore: B esegue P in soli 6 secondi.
Sapendo che, al fine di consentire l’aumento della frequenza, si è dovuto aumentare il numero di clock per istruzione (CPI) in media del 20%
(ad esempio, un’istruzione che nella CPU A richiedeva 5 CPI, nella CPU B ne richiede 6), si stimi la frequenza a cui opera la CPU B.
>ris: 20 MHz
 
- Siano x e y le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465  x=5, y=6). Si consideri una CPU in grado di eseguire un programma P in 100ns.
In una versione più evoluta della stessa CPU sono state accelerate alcune istruzioni di un fattore a: tale CPU è in grado di eseguire P in (80+y) ns.
Sapendo che la percentuale di istruzioni accelerate rispetto al totale di quelle contenute nel programma P è [(x+6)*5]%, si calcoli il fattore di accelerazione a.
>ris: 5/3
 
- Siano x e y le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465 x=5; y=6). In una CPU dotata di una cache di 1° livello, durante l’esecuzione di un programma il tempo totale di accesso a x+15 parole è stato di 1200ns. Sapendo che y+1 fra tali parole non sono state trovate nella cache e che la RAM ha un tempo di accesso di 100ns, si calcoli il tempo di accesso alla cache. Si può lasciare indicato un valore frazionario, purché semplificato.
>ris: 50 ns
 
- La nuova giunta provinciale ha deciso di rivoluzionare il flusso stradale tra Forlì a Cesena in modo da evitare il coro di critiche dei cittadini stanchi di passare ore in coda. Sono a disposizione 4 percorsi che verranno utilizzati come sensi unici (o da Forlì a Cesena o da Cesena a Forlì); le esigenze di trasferimento sono pari a 20 mila persone al giorno da Forlì a Cesena e 20 mila persone al giorno da Cesena a Forlì. Sapendo che le 4 strade possono essere percorse rispettivamente da 18, 8, 12, 16 mila persone al giorno. Si identifichi tramite tabella di verità le combinazioni di sensi unici che permettono di soddisfare le esigenze e si determini la corrispondente espressione booleana.
 
 
- Siano y e x le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465 : x=5, y=6).
Si consideri una CPU dotata di una cache di 1° livello con tempo di accesso pari a 4+y nanosecondi e una RAM con tempo di accesso pari a 101+(5*y) nanosecondi.
Durante l’esecuzione di un programma, la CPU ha impiegato 6,12 microsecondi per leggere dalla memoria 41+(3*x) parole;
sapendo che, all’inizio dell’esecuzione del programma, x+8 di tali parole erano già contenute nella cache di 1° livello e x+13 in quella di 2° livello
e che durante l’esecuzione non è mai stato necessario rimpiazzare parole nelle cache, si calcoli il tempo di accesso a una parola della cache di 2° livello,
esprimendo il risultato in nanosecondi.
>ris: 125,3 ns
 
- 0xc3ec1000
da esadecimale a decimale in IEEE754
>ris: -472.125
 
- Siano A = (a_1 a_0) e B = (b_1 b_0) due numeri binari (con a_1 e b_1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A and (not B))
è un numero maggiore di 1 (and e not sono operatori bit a bit). Si scriva la tabella di verità di F,
quindi si determini e si semplifichi la corrispondente espressione booleana.
>espressione: __A__ __B__ __C__ __D__ + __A__ B __C__ __D__ + __A__ B __C__ D + __A__ B C D + A B __C__ __D__ <br> sempl: __A__ B D + __C__ __D__(__A__ + B)
 
- Si consideri una CPU in grado di eseguire un programma P in 200ns. In una versione più evoluta della stessa CPU sono state accelerate alcune istruzioni di un fattore a:
tale nuova CPU è in grado di eseguire P in 150ns.
Sapendo che il fattore di accelerazione è a=2, si calcoli la percentuale di istruzioni accelerate p rispetto al totale di quelle contenute nel programma P.
>ris: 50%
 
- ((A+BC(X+Z)(ABX)+D) + 1 )
>(ACD+AD+BA+DAB) NULL
((1 ) (ACD+AD+BA+DAB) Identità
(ACD+AD+BA+DAB) Raccoglimento (distributiva)
(A(CD+D+B+DB)) assorbimento
(A(D+B)) = AD + AB distributiva
 
 
- Sia B = b3 b2 b1 b0 un numero binario (con b3 bit di peso maggiore) e si consideri la funzione booleana F(B) che è vera se B è un numero primo
(si ricordi che 0 e 1 non sono numeri primi). Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana.
>ris_ __A__ __B__ C __D__ + __A__ __B__ C D +__A__ B __C__ D +__A__ B C D +A __B__ C D +A B __C__ D
sempl:  __B__ C(__A__ +D) + B D __A__
 
- Calcolare il tempo impiegato da una CPU operante a 4GHz per eseguire un frammento di programma composto da: 7 istruzioni di tipo A, 9 di tipo B e 4 di tipo C,
sapendo che i tre tipi di istruzioni richiedono rispettivamente 10, 20 e 30 cicli di datapath
>ris: 0,09 micros
 
- Su una CPU, un algoritmo che necessita di 20.000 istruzioni viene eseguito in 10 secondi. Sapendo che la percentuale di istruzioni in virgola mobile dell’algoritmo è 80%,
si stimi il nuovo tempo di esecuzione nell’ipotesi di sostituire l’unità che esegue le operazioni in virgola mobile con una più veloce (fattore di accelerazione: 4)
>ris: 4 s
 
- Si trasformi in formato IEEE 754 singola precisione il seguente numero: 271.5
>ris: 4387C000h
 
- Si consideri un calcolatore dotato di una cache a 2 livelli. Il tempo di accesso a una parola è di 5ns per la cache di primo livello, 10ns per la cache di secondo livello.
Durante l’esecuzione di un programma, 20 parole sono lette dalla RAM, 12 dalla cache di primo livello e 18 parole sono lette dalla cache di secondo livello.
Sapendo che il tempo totale di lettura delle parole è di 1230ns, determinare il tempo di lettura di una singola parola dalla RAM.
>ris: 30 s
 
- Si trasformi in formato IEEE 754 singola precisione il seguente numero: -111.25
>ris: C2de8000h
 
- A(BAD+A+ADB’)(C(A’B’C’+(C’+D)+1))
>ris: A C
 
- Si converta in base 10 il numero rappresentato in formato IEEE754 singola precisione da:
43800000h
>ris: 256.0
 
- Siano A = (a1 a0) e B = (b1 b0) due numeri binari (con a1 e b1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A-B) è un numero positivo e primo.
Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana
>ris: A __C__ (B + __D__ )
 
- 0x44e1f000 (probabilmente conversione in decimale, partendo da numero esadecimale IEEE 754)
>ris: +1807.5
 
- Su una CPU, un algoritmo che necessita di 20.000 istruzioni viene eseguito in 10 secondi.
Sapendo che la percentuale di istruzioni in virgola mobile dell’algoritmo è 60% e che si vuole sostituire l’unità che esegue le operazioni in virgola mobile con una più veloce,
calcolare quanto dovrebbe essere il fattore di accelerazione della nuova unità affinché il tempo di esecuzione dell’intero algoritmo dimezzi.
> ris: 6 
 
- Si converta in base 10 il numero rappresentato in formato IEEE754 singola precisione da:
449a4000h
>ris: +1234
 
- Si consideri un calcolatore dotato di una cache a 2 livelli. Il tempo di accesso a una parola è di 5ns per la cache di primo livello e 30ns per la RAM. Durante l’esecuzione di un programma, 20 parole sono lette dalla RAM, 12 dalla cache di primo livello e 18 parole sono lette dalla cache di secondo livello. Sapendo che il tempo totale di lettura delle parole è di 1230ns, determinare il tempo di accesso alla cache di secondo livello.
>ris: 10 ns
 
- (C(A’B’C’+(C’+D)+1)) (BAD+A+ADB’)
>ris: A C
 
Domande
===
- Descrivere le principali caratteristiche del bus USB.
>L' universal serial bus è nato per soddisfare alcune esigenze, la necessita di collegare una periferica senza dover smontare parti/porte del calcolatore, poter collegare/scollegare un device senza dover riavviare il calcolatore, poter alimentare un device tramite questo bus, la necessita di un live enviroment, un collegamento economico, poter collegare fino a 127 dispositivi. L' usb opera ad alta velocità consiste in 4 line, 2 alimentazione 2 dati alle quali nella versione 3.0 si aggiungeranno altri 5 linee dati
- Descrivere brevemente le principali rappresentazioni dei numeri negativi nell’aritmetica binaria.
>I numeri negativi possono essere rappresentati tramite il complemento a 2 : prendendo un numero in forma binaria, sostituendo gli 0/1 e poi sommando 1, usando il bit più significativo come bit di segno, utilizzando l' eccesso 2^m-1 cioè mappando ad esempio i numeri dal -128 al +127 tra lo 0 e il 255.
- Che cosa si intende per “esecuzione speculativa delle istruzioni/micro-istruzioni” e in quali casi può essere utile?<br>
>La tecnica dell eseculazione speulativa è in utile nell'ambito del parallelismo (pipeline,architetture superscalari) e delle predizioni di salto, consiste nell'eseguire a priori una prte di codice gravosa prima ancora di sapere se questa parte verrà utilizzata o meno.
- Che cos’è l’unità floating point di una CPU? Quali tipi di operazioni rende disponibili? <br>
>L'unità Floating Point è un tipo di circuito che si occupa del calcolo delle operazioni in virgola mobile che una normale ALU non  può portare a compimento
- In base a quali caratteristiche possiamo affermare che una CPU è più potente di un’altra? Fornire un elenco. <br>
>Fondamentale è la frequenza ossia i cicli di clock con la quale lavora la CPU, a parità di frequenze una CPU con WORD maggiori può processare piu dati nello stesso ciclo quindi è preferibile, i registri sono fondamentali per le prestazioni di una CPU quindi maggiori se ne hanno maggiore sarà la capacità di calcolo, il numero di pin d'indirizzo e pin dati ossia il numero di locazioni di memoria che può indirizzare e il munero di bit di parole che può scrivere o leggere in un unica operazione.
- In quali casi (rispetto alla struttura di un programma) il pipelining non è efficace?<br>
>Il pipelining non è efficace se nel blocco di istruzioni ch si intende parallelizzare c'è un elevato numero di salti condizionali e casi in cui le istruzioni dipendono le une dalle altre
- Discutere brevemente le differenze esistenti tra bus PCI e PCI-Express.<br>
>La differenza si ha soprattutto in termini di velocità, il bus PCIe è notevolemente superiore, la vera differenza risiede nella composizione fisica del bus di collegamento, nella PCIe il bus diventa seriale, la connessione è punto a punto ed è possibile collegare coppie di master-slave (multi-master), esistono canali più grandi che operano in parallelo tra devices e CPU 
- Qual è l'intervallo di numeri interi rappresentabile utilizzando n bit in complemento a 2?<br>
>Da -2^(n-1) a 2^(n-1) -1 
- Che differenza c'è (a livello geometrico) tra una traccia di un disco magnetico e una di un disco ottico? <br>
>In un disco ottico esistono i pity/land cioè fori e zone piane che riflettono un laser ed utilizzano un principio ottico con il quale codificano dati in formato binario, mentre su un disco magnetico esistono delle strisce magnetizzate che inducono su una testina un campo elettrico variabile che codifica dati, utilizzano quindi un principio elletro-magnetico.
- Che differenza c'è tra la codifica numerica del numero 8 e la codifica ASCII del digit 8?
>La codifica ascii è ciò che il computer riconosce come numero 8 ma non lo è effettivamente, è solo un identificativo valido per tutti i calcolatori mentre la codifica del numero è rappresentare un numero attraverso un metodo uguale per tutti i numeri/caratteri (?)
- Descrivere brevemente la tassonomia di Flynn nell'ambito dei sistemi paralleli.
>La tassonomia o classificazione di Fylnn si basa sulla distinzione delle sequenze di istruzioni e al corrispettivo numero di sequenze di dati coinvolti in tali istruzioni
- Cosa succede se al registro AL che contiene il numero 250 viene sommato 10? Qual è il nuovo valore di AL?
>Il registro AL è un registro a 8 bit, questo vuol dire che il range di valori che può rappresentare va da 0 a 255 (se unsigned) e quindi se dovessi sommare a 250 il 10 si andrebbe fuori range e la cifra più significativa andrebbe ad occupare parte del registro AH, il valore sarebbe FA + A = 104
- Quali sono le principali famiglie di CPU RISC non x86 per il mercato server?
>Sparc, Alpha, Power
- Indicare il tempo necessario (come ordine di grandezza) per eseguire ciascuna delle tre fasi necessarie per la lettura di un settore in un disco magnetico.
> Average Seek: 8-10 millisecondi (di solito si riferisce a letture),Track-to-Track: 1 millisecondo , Full-stroke: 15-20 millisecondi (dalla traccia più interna alla traccia più esterna)
- Descrivere l'evoluzione delle istruzioni SIMD nell'ambito delle architetture x86.
>L' aggiunta di 8 nuovi registri a 128 bit chiamati XMM, che consentiranno operazioni SIMD floating point a doppia precisione
- Qual è il vantaggio della rappresentazione floating-point rispetto a una rappresentazione dove la virgola assume una posizione fissa?
>Il vantaggio sta quando si deve lavorare con numeri molto alti per i quali può essere comodo rappresentare solo le cifre più significative, si utilizza quindi una frazione moltiplicata per una delle potenze del 10
- Quale invenzione presso i Bell Labs ha dato il via alla generazione II della storia dei calcolatori? In quali anni è stata fatta tale invenzione?
>L' invenzione è il transistor, quest'invenzione è stata fatta nel 1948
- Che cosa si intende per MIPS e MFLOPS?
> Sono unità di misura della potenza di calcolo di un sistema, IPS è l'acronimo di instruction per second, MIPS sta per Milion IPS mentre MFFLOPS è semplicemente indirizzato verso numeri floating point( virgola mobile)
- Elencare i tipi di memoria (rappresentazione piramidale) e per ciascuno indicare l'utilizzo tipico.
>Volatile: l’informazione rimane memorizzata fino a che il calcolatore è alimentato, Persistente: l’informazione   rimane   memorizzata   anche   quando   il calcolatore non è alimentato (spento), On line :i dati sono sempre accessibili, off-line: il supporto deve essere montato per poter accedere ai dati
- Che cosa si intende con circuiti integrati VLSI?
> E' una tiopologia di circuiti che al suo interno possiede più di 100 000 transistor, VLSI stà per very large scale integrated
- Disegnare il circuito di un comparatore a 4 bit.
> 4 XOR che conflusicono in un NOR
- In una moderna CPU multi-core come sono generalmente organizzati i tre livelli di cache?
>Nella vera e propria CPU è collocato il livello 1, diviso tra dati ed istruzioni, nel package della CPU esterno al vero prprio chip risiede la cache di secondo livello unficata e poi collocata sulla motherboard abbiamo una cache di livello 3
- Quante diverse configurazioni si possono codificare con n bit?
> 2 ^ (n-1)
- Qual è il numero più grande che può essere codificato considerando solo numeri interi positivi?
> 65 536
- Che cosa si intende per RAM sincrona DDR e qual è la principale caratteristica rispetto a una RAM sincrona (non DDR)?
>Una ram sicrona è un tipo di ram sia dinamica sia statica, la differenza sta nel fatto che è guidata dal clock di sistema e quindi la risposta è sempre inviata dopo un numero prefissato di cicli di clock, perciò la CPU puo dedicarsi ad altro nel mentre non riceve una risposta
- Quali sono le principali interfacce per dischi magnetici?
> IDEEsercizi
===
x = 0 y = 8
---
- Una cisterna è dotata di 4 pompe: PA e PB riempiono la cisterna, PC e PD la svuotano. Sapendo che la capacità delle pompe è rispettivamente di 7, 5, 8 e 4 litri/secondo
si indichi (tramite tabella di verità) per quali configurazioni di pompe accese la vasca si riempirà. Si scriva la tavola di verità e si derivi
la corrispondente espressione booleana.
 
>__A__ __B__ C __D__ + __A__ B C __D__+ A __B__ __C__ __D__ + A __B__ C __D__ +A __B__ C D + A B __C__ __D__ +  A B C __D__  <br>
ris: __D__(A+C) + A __B__ C
 
- ABC+ABD+BC+C+AD+A+B+AA
>A+B+C
 
- Siano x e y le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465 x=6, y=5). Una CPU impiega 7 microsecondi per eseguire un frammento di programma
composto da: x istruzioni di tipo A, y di tipo B e 11 di tipo C. Sapendo che i tre tipi di istruzioni richiedono rispettivamente 14, 49 e 21 cicli di datapath,
si calcoli la frequenza della CPU, esprimendo il risultato in MHz
>ris: 0.000229 MHz 0.00211
 
- Sia x l’ultima cifra della propria matricola in base 10 (esempio: matricola 3465 x=5). Si consideri una CPU dotata di una cache di 1° livello
con tempo di accesso pari a 5 nanosecondi. Durante l’esecuzione di un programma, la CPU ha impiegato 2,11 microsecondi per leggere dalla memoria 22+x parole;
sapendo che x+2 di tali parole erano già contenute nella cache all’inizio dell’esecuzione del programma e che durante l’esecuzione non è mai stato necessario
rimpiazzare parole nella cache, si calcoli il tempo di accesso a una parola della RAM, esprimendo il risultato in nanosecondi.
>ris: 105 ns
 
- Su una CPU, un algoritmo viene inizialmente eseguito in (100+2𝑥+3𝑦)secondi. Sapendo che la percentuale di istruzioni in virgola mobile dell’algoritmo è 5∙(𝑥+1), si stimi il nuovo tempo di esecuzione nell’ipotesi di sostituire l’unità che esegue le operazioni in virgola mobile con una più veloce (fattore di accelerazione: 𝑦+2).
>ris: 118,4 s
 
- Siano A = (a1 a0) e B = (b1 b0) due numeri binari (con a1 e b1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A xor B) è un numero dispari.
Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana.
>ris: __A__ B + A __B__
 
 
- Sia x l’ultima cifra della propria matricola in base 10 (esempio: matricola 3465 x=5). Un programma P viene eseguito in 10 secondi su una CPU A,
dotata di una frequenza di clock di (1+x)*10 MHz. È stata progettata una nuova CPU B in grado di operare a una frequenza maggiore: B esegue P in soli 6 secondi.
Sapendo che, al fine di consentire l’aumento della frequenza, si è dovuto aumentare il numero di clock per istruzione (CPI) in media del 20%
(ad esempio, un’istruzione che nella CPU A richiedeva 5 CPI, nella CPU B ne richiede 6), si stimi la frequenza a cui opera la CPU B.
>ris: 20 MHz
 
- Siano x e y le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465  x=5, y=6). Si consideri una CPU in grado di eseguire un programma P in 100ns.
In una versione più evoluta della stessa CPU sono state accelerate alcune istruzioni di un fattore a: tale CPU è in grado di eseguire P in (80+y) ns.
Sapendo che la percentuale di istruzioni accelerate rispetto al totale di quelle contenute nel programma P è [(x+6)*5]%, si calcoli il fattore di accelerazione a.
>ris: 5/3
 
- Siano x e y le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465 x=5; y=6). In una CPU dotata di una cache di 1° livello, durante l’esecuzione di un programma il tempo totale di accesso a x+15 parole è stato di 1200ns. Sapendo che y+1 fra tali parole non sono state trovate nella cache e che la RAM ha un tempo di accesso di 100ns, si calcoli il tempo di accesso alla cache. Si può lasciare indicato un valore frazionario, purché semplificato.
>ris: 50 ns
 
- La nuova giunta provinciale ha deciso di rivoluzionare il flusso stradale tra Forlì a Cesena in modo da evitare il coro di critiche dei cittadini stanchi di passare ore in coda. Sono a disposizione 4 percorsi che verranno utilizzati come sensi unici (o da Forlì a Cesena o da Cesena a Forlì); le esigenze di trasferimento sono pari a 20 mila persone al giorno da Forlì a Cesena e 20 mila persone al giorno da Cesena a Forlì. Sapendo che le 4 strade possono essere percorse rispettivamente da 18, 8, 12, 16 mila persone al giorno. Si identifichi tramite tabella di verità le combinazioni di sensi unici che permettono di soddisfare le esigenze e si determini la corrispondente espressione booleana.
 
 
- Siano y e x le ultime due cifre della propria matricola in base 10 (esempio: matricola 3465 : x=5, y=6).
Si consideri una CPU dotata di una cache di 1° livello con tempo di accesso pari a 4+y nanosecondi e una RAM con tempo di accesso pari a 101+(5*y) nanosecondi.
Durante l’esecuzione di un programma, la CPU ha impiegato 6,12 microsecondi per leggere dalla memoria 41+(3*x) parole;
sapendo che, all’inizio dell’esecuzione del programma, x+8 di tali parole erano già contenute nella cache di 1° livello e x+13 in quella di 2° livello
e che durante l’esecuzione non è mai stato necessario rimpiazzare parole nelle cache, si calcoli il tempo di accesso a una parola della cache di 2° livello,
esprimendo il risultato in nanosecondi.
>ris: 125,3 ns
 
- 0xc3ec1000
da esadecimale a decimale in IEEE754
>ris: -472.125
 
- Siano A = (a_1 a_0) e B = (b_1 b_0) due numeri binari (con a_1 e b_1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A and (not B))
è un numero maggiore di 1 (and e not sono operatori bit a bit). Si scriva la tabella di verità di F,
quindi si determini e si semplifichi la corrispondente espressione booleana.
>espressione: __A__ __B__ __C__ __D__ + __A__ B __C__ __D__ + __A__ B __C__ D + __A__ B C D + A B __C__ __D__ <br> sempl: __A__ B D + __C__ __D__(__A__ + B)
 
- Si consideri una CPU in grado di eseguire un programma P in 200ns. In una versione più evoluta della stessa CPU sono state accelerate alcune istruzioni di un fattore a:
tale nuova CPU è in grado di eseguire P in 150ns.
Sapendo che il fattore di accelerazione è a=2, si calcoli la percentuale di istruzioni accelerate p rispetto al totale di quelle contenute nel programma P.
>ris: 50%
 
- ((A+BC(X+Z)(ABX)+D) + 1 )
>(ACD+AD+BA+DAB) NULL
((1 ) (ACD+AD+BA+DAB) Identità
(ACD+AD+BA+DAB) Raccoglimento (distributiva)
(A(CD+D+B+DB)) assorbimento
(A(D+B)) = AD + AB distributiva
 
 
- Sia B = b3 b2 b1 b0 un numero binario (con b3 bit di peso maggiore) e si consideri la funzione booleana F(B) che è vera se B è un numero primo
(si ricordi che 0 e 1 non sono numeri primi). Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana.
>ris_ __A__ __B__ C __D__ + __A__ __B__ C D +__A__ B __C__ D +__A__ B C D +A __B__ C D +A B __C__ D
sempl:  __B__ C(__A__ +D) + B D __A__
 
- Calcolare il tempo impiegato da una CPU operante a 4GHz per eseguire un frammento di programma composto da: 7 istruzioni di tipo A, 9 di tipo B e 4 di tipo C,
sapendo che i tre tipi di istruzioni richiedono rispettivamente 10, 20 e 30 cicli di datapath
>ris: 0,09 micros
 
- Su una CPU, un algoritmo che necessita di 20.000 istruzioni viene eseguito in 10 secondi. Sapendo che la percentuale di istruzioni in virgola mobile dell’algoritmo è 80%,
si stimi il nuovo tempo di esecuzione nell’ipotesi di sostituire l’unità che esegue le operazioni in virgola mobile con una più veloce (fattore di accelerazione: 4)
>ris: 4 s
 
- Si trasformi in formato IEEE 754 singola precisione il seguente numero: 271.5
>ris: 4387C000h
 
- Si consideri un calcolatore dotato di una cache a 2 livelli. Il tempo di accesso a una parola è di 5ns per la cache di primo livello, 10ns per la cache di secondo livello.
Durante l’esecuzione di un programma, 20 parole sono lette dalla RAM, 12 dalla cache di primo livello e 18 parole sono lette dalla cache di secondo livello.
Sapendo che il tempo totale di lettura delle parole è di 1230ns, determinare il tempo di lettura di una singola parola dalla RAM.
>ris: 30 s
 
- Si trasformi in formato IEEE 754 singola precisione il seguente numero: -111.25
>ris: C2de8000h
 
- A(BAD+A+ADB’)(C(A’B’C’+(C’+D)+1))
>ris: A C
 
- Si converta in base 10 il numero rappresentato in formato IEEE754 singola precisione da:
43800000h
>ris: 256.0
 
- Siano A = (a1 a0) e B = (b1 b0) due numeri binari (con a1 e b1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A-B) è un numero positivo e primo.
Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana
>ris: A __C__ (B + __D__ )
 
- 0x44e1f000 (probabilmente conversione in decimale, partendo da numero esadecimale IEEE 754)
>ris: +1807.5
 
- Su una CPU, un algoritmo che necessita di 20.000 istruzioni viene eseguito in 10 secondi.
Sapendo che la percentuale di istruzioni in virgola mobile dell’algoritmo è 60% e che si vuole sostituire l’unità che esegue le operazioni in virgola mobile con una più veloce,
calcolare quanto dovrebbe essere il fattore di accelerazione della nuova unità affinché il tempo di esecuzione dell’intero algoritmo dimezzi.
> ris: 6 
 
- Si converta in base 10 il numero rappresentato in formato IEEE754 singola precisione da:
449a4000h
>ris: +1234
 
- Si consideri un calcolatore dotato di una cache a 2 livelli. Il tempo di accesso a una parola è di 5ns per la cache di primo livello e 30ns per la RAM. Durante l’esecuzione di un programma, 20 parole sono lette dalla RAM, 12 dalla cache di primo livello e 18 parole sono lette dalla cache di secondo livello. Sapendo che il tempo totale di lettura delle parole è di 1230ns, determinare il tempo di accesso alla cache di secondo livello.
>ris: 10 ns
 
- (C(A’B’C’+(C’+D)+1)) (BAD+A+ADB’)
>ris: A C
 
Domande
===
- Descrivere le principali caratteristiche del bus USB.
>L' universal serial bus è nato per soddisfare alcune esigenze, la necessita di collegare una periferica senza dover smontare parti/porte del calcolatore, poter collegare/scollegare un device senza dover riavviare il calcolatore, poter alimentare un device tramite questo bus, la necessita di un live enviroment, un collegamento economico, poter collegare fino a 127 dispositivi. L' usb opera ad alta velocità consiste in 4 line, 2 alimentazione 2 dati alle quali nella versione 3.0 si aggiungeranno altri 5 linee dati
- Descrivere brevemente le principali rappresentazioni dei numeri negativi nell’aritmetica binaria.
>I numeri negativi possono essere rappresentati tramite il complemento a 2 : prendendo un numero in forma binaria, sostituendo gli 0/1 e poi sommando 1, usando il bit più significativo come bit di segno, utilizzando l' eccesso 2^m-1 cioè mappando ad esempio i numeri dal -128 al +127 tra lo 0 e il 255.
- Che cosa si intende per “esecuzione speculativa delle istruzioni/micro-istruzioni” e in quali casi può essere utile?<br>
>La tecnica dell eseculazione speulativa è in utile nell'ambito del parallelismo (pipeline,architetture superscalari) e delle predizioni di salto, consiste nell'eseguire a priori una prte di codice gravosa prima ancora di sapere se questa parte verrà utilizzata o meno.
- Che cos’è l’unità floating point di una CPU? Quali tipi di operazioni rende disponibili? <br>
>L'unità Floating Point è un tipo di circuito che si occupa del calcolo delle operazioni in virgola mobile che una normale ALU non  può portare a compimento
- In base a quali caratteristiche possiamo affermare che una CPU è più potente di un’altra? Fornire un elenco. <br>
>Fondamentale è la frequenza ossia i cicli di clock con la quale lavora la CPU, a parità di frequenze una CPU con WORD maggiori può processare piu dati nello stesso ciclo quindi è preferibile, i registri sono fondamentali per le prestazioni di una CPU quindi maggiori se ne hanno maggiore sarà la capacità di calcolo, il numero di pin d'indirizzo e pin dati ossia il numero di locazioni di memoria che può indirizzare e il munero di bit di parole che può scrivere o leggere in un unica operazione.
- In quali casi (rispetto alla struttura di un programma) il pipelining non è efficace?<br>
>Il pipelining non è efficace se nel blocco di istruzioni ch si intende parallelizzare c'è un elevato numero di salti condizionali e casi in cui le istruzioni dipendono le une dalle altre
- Discutere brevemente le differenze esistenti tra bus PCI e PCI-Express.<br>
>La differenza si ha soprattutto in termini di velocità, il bus PCIe è notevolemente superiore, la vera differenza risiede nella composizione fisica del bus di collegamento, nella PCIe il bus diventa seriale, la connessione è punto a punto ed è possibile collegare coppie di master-slave (multi-master), esistono canali più grandi che operano in parallelo tra devices e CPU 
- Qual è l'intervallo di numeri interi rappresentabile utilizzando n bit in complemento a 2?<br>
>Da -2^(n-1) a 2^(n-1) -1 
- Che differenza c'è (a livello geometrico) tra una traccia di un disco magnetico e una di un disco ottico? <br>
>In un disco ottico esistono i pity/land cioè fori e zone piane che riflettono un laser ed utilizzano un principio ottico con il quale codificano dati in formato binario, mentre su un disco magnetico esistono delle strisce magnetizzate che inducono su una testina un campo elettrico variabile che codifica dati, utilizzano quindi un principio elletro-magnetico.
- Che differenza c'è tra la codifica numerica del numero 8 e la codifica ASCII del digit 8?
>La codifica ascii è ciò che il computer riconosce come numero 8 ma non lo è effettivamente, è solo un identificativo valido per tutti i calcolatori mentre la codifica del numero è rappresentare un numero attraverso un metodo uguale per tutti i numeri/caratteri (?)
- Descrivere brevemente la tassonomia di Flynn nell'ambito dei sistemi paralleli.
>La tassonomia o classificazione di Fylnn si basa sulla distinzione delle sequenze di istruzioni e al corrispettivo numero di sequenze di dati coinvolti in tali istruzioni
- Cosa succede se al registro AL che contiene il numero 250 viene sommato 10? Qual è il nuovo valore di AL?
>Il registro AL è un registro a 8 bit, questo vuol dire che il range di valori che può rappresentare va da 0 a 255 (se unsigned) e quindi se dovessi sommare a 250 il 10 si andrebbe fuori range e la cifra più significativa andrebbe ad occupare parte del registro AH, il valore sarebbe FA + A = 104
- Quali sono le principali famiglie di CPU RISC non x86 per il mercato server?
>Sparc, Alpha, Power
- Indicare il tempo necessario (come ordine di grandezza) per eseguire ciascuna delle tre fasi necessarie per la lettura di un settore in un disco magnetico.
> Average Seek: 8-10 millisecondi (di solito si riferisce a letture),Track-to-Track: 1 millisecondo , Full-stroke: 15-20 millisecondi (dalla traccia più interna alla traccia più esterna)
- Descrivere l'evoluzione delle istruzioni SIMD nell'ambito delle architetture x86.
>L' aggiunta di 8 nuovi registri a 128 bit chiamati XMM, che consentiranno operazioni SIMD floating point a doppia precisione
- Qual è il vantaggio della rappresentazione floating-point rispetto a una rappresentazione dove la virgola assume una posizione fissa?
>Il vantaggio sta quando si deve lavorare con numeri molto alti per i quali può essere comodo rappresentare solo le cifre più significative, si utilizza quindi una frazione moltiplicata per una delle potenze del 10
- Quale invenzione presso i Bell Labs ha dato il via alla generazione II della storia dei calcolatori? In quali anni è stata fatta tale invenzione?
>L' invenzione è il transistor, quest'invenzione è stata fatta nel 1948
- Che cosa si intende per MIPS e MFLOPS?
> Sono unità di misura della potenza di calcolo di un sistema, IPS è l'acronimo di instruction per second, MIPS sta per Milion IPS mentre MFFLOPS è semplicemente indirizzato verso numeri floating point( virgola mobile)
- Elencare i tipi di memoria (rappresentazione piramidale) e per ciascuno indicare l'utilizzo tipico.
>Volatile: l’informazione rimane memorizzata fino a che il calcolatore è alimentato, Persistente: l’informazione   rimane   memorizzata   anche   quando   il calcolatore non è alimentato (spento), On line :i dati sono sempre accessibili, off-line: il supporto deve essere montato per poter accedere ai dati
- Che cosa si intende con circuiti integrati VLSI?
> E' una tiopologia di circuiti che al suo interno possiede più di 100 000 transistor, VLSI stà per very large scale integrated
- Disegnare il circuito di un comparatore a 4 bit.
> 4 XOR che conflusicono in un NOR
- In una moderna CPU multi-core come sono generalmente organizzati i tre livelli di cache?
>Nella vera e propria CPU è collocato il livello 1, diviso tra dati ed istruzioni, nel package della CPU esterno al vero prprio chip risiede la cache di secondo livello unficata e poi collocata sulla motherboard abbiamo una cache di livello 3
- Quante diverse configurazioni si possono codificare con n bit?
> 2 ^ (n-1)
- Qual è il numero più grande che può essere codificato considerando solo numeri interi positivi?
> 65 536
- Che cosa si intende per RAM sincrona DDR e qual è la principale caratteristica rispetto a una RAM sincrona (non DDR)?
>Una ram sicrona è un tipo di ram sia dinamica sia statica, la differenza sta nel fatto che è guidata dal clock di sistema e quindi la risposta è sempre inviata dopo un numero prefissato di cicli di clock, perciò la CPU puo dedicarsi ad altro nel mentre non riceve una risposta
- Quali sono le principali interfacce per dischi magnetici?
> IDE, EIDE, SCSI, SATA: cambiamento da seriale a parallelo
- Quali sono le 'generazioni' della storia dei calcolatori?
> Zero; calcolatori meccanici, Prima; relè valvole termodinamiche, Seconda; transistor, Terza; circuiti integrati, Quarta; VLSI, Quinta: smartphone, tablet e sistemi embedded
- Quali sono le principali caratteristiche delle CPU ARM utilizzate nei sistemi embedded rispetto alle CPU utilizzate nei PC?
>Hanno una capacita di calcolo di poco inferiore e sono a bassissimo consumo 
- Come può essere eseguita una sottrazione all'interno di una ALU utilizzando il circuito sommatore?
>Si potrebbe eseguire una somma, pero utilizzando il complemento a 2, quindi facendo un not bit a bit del secondo operando, sommargli 1 e poi eseguire una normale somma tra interi
- Descrivere brevemente la codifica digitale di un suono.
>Un suono è un onda quindi un segnale analogico, viene quindi rappresentata attraverso un campionamento ed una quantizzazione con elevato numero di bit
- Una CPU moderna (es. Intel Core I7) che ordine di grandezza (GigaFlops) raggiunge in termini di prestazioni?
>dai 50 ai 1000 GigaFlops
- In quale periodo storico furono realizzati i primi calcolatori meccanici? Descriverne i principali rappresentanti.
>Il periodo storico è circa quello del 1600, Pascal con dispositivo ad ingranaggi azionati a manovella (addizioni e sottrazioni), VOn Leibiniz 1672 macchina in grado di eseguire moltiplicazioni, 1834 Macchina di turing 
- Che cosa si intende con il termine 'canali' nell'ambito del BUS PCI-Express?
>I canali nella PCIe sono i collegamenti paralleli sui quali viaggiano le informazioni dalla periferica alla CPU per poter aumentare ulteriormente la banda
- Principi istruzioni RISC
> Istruzioni ISA eseguite direttamente dal hardware cioè dalla control unit, utilizzo di pipeling e parallelismo per incrementare i MIPS, istruzioni facilmente decodificabili, struttura regolare e lunghezza fissa, eliminare i tempi morti nelle istruzioni dati dal ritardo della lettura in memoria di dati limitare quindi che solo le istruzioni LOAD e STORE contengano indirizzi di memoria,  molti registri significa una potenza di calcolo maggiore incrementare il numero utliizzando spazio fisico ricavato dai primi punti del discorso 
- Architettura Penthium 4
>CPU intel a 32 bit, architettura CISC, IA-32, supporta operazioni su interi a 32 bit e floating point a 64, 8 registri visibili, lunghezza istruzioni 1 -17 byte, nucleo RISC che utilizza pipeling e arhitetture superscalari, 4 parti principali: 1) sottosistema di memoria: include cache L2 unificata (dati ed istruzioni) 2)front-end: preleva le istruzioni dalla cache L2 e le codifica, scompone ogni istruzione in una serie di micro-istruzioni RISC eseguite nel cuore RISC della CPU e le savla nella L1(predizione di salto) 3)controllo ed esecuzione fuori sequenza 4) unita esecutive
- Cosa si intende per disco RAID?
>E' un sistema di organizzazione della memoria in cui una serie di dischi economici vengono collegati tra loro ed appaioiono al compilatore come un unica memoria, tutto cio per incrementare le prestazioni e poter sostituire dischi piu facilmente
- Descrivere brevemente la codifica digitale di un'immagine a livelli di grigio.
>L' immagine viene rappresentata come una matrice ed ogni termine di questa matrice potrebbe essere un pixel, ogni elemento della matrice indica numericamente la quantita di grigio cioe luminosita in una scala a 256 grigi, 1 pixel => 1 byte
- Che cos'è il processo di fotolitografia utilizzato nella fabbricazione dei circuiti integrati?
>E' un processo utilizzato per creare circuiti, funziona prendendo sabbie silicee e fondendole si ottengono dei dischi molto sottili, successivamente su questi dischi chiamati wafer vengono applicati degli strati di materiali semiconduttori, ora sui dischi dei laser incidono delle tracce, dopo una bagno in solventi e una serie di incisioni/lavaggi vengono creati tramite rilievo dei piccolissimi transistor i quali verranno poi ritagliati ed utilizzati nei circuiti che tutti conosciamo
- Quali sono le principali differenze in termini di prestazioni tra dischi magnetici e dischi allo stato solido?
>I dischi SSD sono un evoluzione degli HDD, la loro velocità è maggiore 100-600 Mb/s rispoetto a quello degli HDD 100-300Mb/s, i primi sono composti da circuiti e transistor il che li rende molto compatti ma poco capienti, i secondi sono dischi magnetici con testine che operano ad altazze di nanometri quindi estremamente delicati ma molto capienti, un altr differenza percio risiede nel costo, gli SSD hanno un costo di 0,23 $/Gb mentre gli HDD 0,03 $/Gb, solitamente gli SSD si usano installando un sistema operativo su di essi per la velocita d'avvio 
- Che cos'è la codifica dei caratteri UNICODE e per quale motivo è stata introdotta?
>E' una codifica internazionale dei caratteri di qualsiasi  lingua, simbolo, braille, è stata introdotta per permetttere una comunicazione da chiunque verso chiunque
- Cosa si intende con il termine 'maschera di bit' e in quali casi può essere utile?
> E' un insieme di bit di lunghezza predefinita che può essere usato come operatore nelle operazioni bit a bit, oppure nel codice di correzione degli errori
- Cosa si intende per località spaziale e località temporale in una memoria Cache?
>Questi concetti esprimono due operazioni della cache ossia l' allocazione di blocchi ed il loro rimpiazzamento, il principio di spazialità dice che dopo aver prelevato un istruzione dalla memoria la probabilità di dover prelevare istruzioni vicine ad essa è molto alto, percio si preleva tuttop  il blocco di istruzioni e lo si alloca nella cache, il principio di spazialià invece dice che la probabilità che un blocco appena prelevato venga utilizzato di lì a poco tempo è alta, perciò si rimpiazza con il blocco appena utilizzato quello in memoria da più tempo, la politica è quella del LRU (Last Recently Used)
- differenza tra compilatore/assemblatore
>Il compilatore è un programma che traduce le daun linguaggio di programmazione di alto livello le istruzioni ISA e le esegue in una seconda passata creando un file eseguibile .exe (SIMI) mentre l'assemblatore legge direttamente codice in formato assembly (SISI)
- frequenza di campionamento dei CD
>44.1kHz
- DMA
>(Direct Memory Acces) E' un circuito che consente il trasferimento di dati tra le periferiche senza la partecipazione della CPU. Ha 4 registri che contengono: Indirizzo iniziale, numero di byte, il numero del dispositivo e se i dati vanno letti o scritti. La CPU riempie questi registri e poi da il via al trasferimento. Al termine la CPU viene avvertita attraverso un Interrupt.
- i bit per quantizzazione quanti sono? un byte o due?
> 16 bit per canale su due canali 
- Perchè l' USB è definita come BUS ?
>Perchè un bus è un sistema elettrico con il quale un compilatore trasporta dati, l' usb è un bus seriale universale
- Cos'è un multiplexer e a cosa può servire?
>Il multiplexer è un circuito che permettere tramite n bit di controllo di indirizzare un segnale scelte tra 2^n verso l'output
- fetch decode ed execute
>fetch corrisponde alla lettura dell istruzione, decode corrisponde alla sua traduzione in linguaggio ISA ed execute l'esecuzione della stessa
- eflags
>Questo registro contiene diversi bit utili sia alla CPU  sia  al  programmatore.  I  bit  principali  determinano  i  cosiddetti condition code:  questi  bit  vengono  scritti  a  ogni  ciclo  dell'ALU  e riflettono  il  risultato  dell'operazione  più  recente (parita, zero, carry, segno etc...)
- differenza fra little endian e big endian
> La differenza sta nella posizione delle cifre meno significative nella rappresentazione binaria, nel Big Endian le cifre meno significative occupano l' offset minore mentre nel Little Endian occupano l'offset maggiore
- le espressioni booleane sono isomorfe ai circuiti digitali. Cosa significa?
>Un  circuito  digitale  può  essere espresso tramite un’espressione booleana e viceversa
-  ho un disco magnetico e dram per leggere delle parole. In che ordine di grandezza siamo?
> decine di millisecondi per HD e una o due decine di nanosecondi per la DRAM
- i tipi di RAM
> SRAM, DRAM, SDRAM
- differenza tra DRAM e SRAM
>I due tipi di RAM differiscono per struttura, le SRAM sono costituite da Flip-flop e sono quindi molto veloci e costose, spesso utilizzate nelle cache di secondo livello le DRAM invece sono costituite da un transitor e un condensatore, tempi di prelevamento delle istruzioni passano da alcuni nanosecondi (SRAM) a decine di nanosecondi (DRAM)
- flip flop
>Prima di parlare del Flip-Flop bisogna spiegare cosa sia un latch SR, un circuito che dato un input è in grado di ricordare se quell input è uno 0 oppure un 1 attraverso la caratteristica di questo circuito di potersi mantenere tramite una corrente in due stati stabili ben definiti(bistabile), il latch di tipo D ulitlizza il clock per regolare questi cambiamenti il flip-flop fa una cosa simile solo che al posto di utilizzare 'alto/basso del segnale di clock usa il fronte di discesa e di salita.
- pipeline
>Una tecnica utilizzata nell ambito del miglioramento delle prestazioni con la quale un istruzione viene divisa in piu stadi che una volta completato il loro lavoro al posto di aspettare a vuoto la fine del ciclo di quell istruzione passano a quella dopo
- tipi di rom
>PROM; programmable ROM, i programmi possono essere scritti una volta con tecnioche a basso costo, EPROM; Erasable PROM i campi possono esseere programmati ma anche cancellati con UVA, EEPROM; Elettrically EPROM una EPROM che può essere cancellata elettronicamente senza essere smontata, FLASH; cancellabile come EEPROM ma non con singole parole bensi a blocchi (card sd, Memory FLash)
- ordini di grandezza nei tempi di lettura delle memorie e hard disk
>Hard disk; average seek 8-10 millisecondi, track to track 2 millisecondi, full stroke 15-20 millisecondi mentre gli SSD hanno un tempo di accesso di 100 microsecondi
- quante configurazioni con n bit e intervalli rappresentabili nelle diverse codifiche
> con n bit sono rappresentabili 2^n configurazioni
- parallelismo nel chip
>Multi-thread; ossia nella stessa CPU vengono elaborati contemporaneamente piu di un processo, come se esistessero due chip virtuali, a livello di istruzioni; pipeling e architetture supercalari, MUlti-core: vero mutli-threading, core eterogenei nei chip
- clock\periodo di clock\frequenza di clock
> T clock = 1 /frequenza => frequenza = 1/T clock
- distanza di hamming e uso per identificare\correggere errori
>La distanza di Hamming identifica il numero di bit che devo cambiare ad una WORD per renderla equivalente ad un'altra, nel codice di correzioni degli errori viene usato un bit di parità supplementare per il conto degli 1 nel numero in formato binario, questo bit vale 1 o 0 a seconda della quantità pari o dispari di 1, da qui si può correggere una parola sbagliata entro una distanza di hamming 2, cioè errori pari aa 1 bit
- Legge di Moore
>Ogni 18 mesi la dimensione dei transistor si dimezza, perciò ne aumenta del doppio la quantità collocabile entro la stessa area
- Arbitraggio del bus: dare una definizione e discutere le principali differenze tra arbitraggio centralizzato e distribuito
> (51) Le politiche di arbitraggio del bus sono la soluzione al fatto che più dispositivi possono richiedere il controllo del bus nello stesso momento. Quindi uno dei due deve aspettare e ciò viene deciso dalle poliche di arbitraggio che può essere centralizzato o distribuito. Nell'arbitraggio centralizzato è presente un chip arbitro collegato a tutti i dispositivi, quando un dispositivo chiede il controllo del bus l'arbitro attiva un metodo di priorità. Nell'arbitraggio distribuito non c'è un chip arbitro, vengono utilizzate 16 linee di richiesta. Ogni dispositivo è collegato a tutte e 16 le linee ed è anche in grando di valutare la sua priorità rispetto agli altri
- Che cos’è il fetch di un’istruzione ?  Cosa si intende per pre-fetching ?
>Il fetch di un'istruzione consiste nel caricare questa nel registro IR ed incrementare PC. Il pre-fetch è un'operazione di predizione dell'istruzione seguente in modo che sia già pronta una volta eseguita l'istruzione corrente
- È corretto affermare che le frequenze di clock delle CPU nei prossimi anni non potranno aumentare significativamente? Motivare la risposta 
> Si in quanto sono stati ormai raggiunti i limiti fisici:-le frequenze creano disturbi e calore difficile da dissipare-ci sono ritardi nella propagazione del segnale-problemi di sincronizzazione
- Discutere PRO e CONTRO di bus sincroni e asincroni
> Nel bus sincrono lo scambio di dati è scandito da un clock, è più facile da realizzare ma è limitato in quanto tutto deve avvenire in tempi multipli del tempo di ciclo, quindi si spreca tempo. Nel bus asincrono invece lo slave esegue il lavoro nel minor tempo possibile poi mette i dati sul bus e il master li legge. Quindi c'è un risparmio di tempo ma questo genere di bus è più complesso da realizzare
- Cos’è il “Data Path”?
> Il ciclo di Data Parh è il passaggio di due operandi attraverso la ALU e la memorizzazione del risultato in un nuovo registro
- Si descriva brevemente cosa si intende per: 1) compilatore, 2) assemblatore, 3) linker
> Compilatore: è un programma che traduce una serie di istruzioni scritte in un linguaggio di alto livello in istruzioni di un'altro linguaggio.     Assemblatore: traduce le istruzioni assembly in linguaggio macchina.Linker: è il programma che si occupa di collegare i vari moduli (librerie o sottoprogrammi) creando una singola unità eseguibile
- A cosa può servire in pratica un multiplexer?
> Seleziona uno degli n ingressi attraverso dei bitdi controllo mandandolo in una solo uscita. Viene utilizzato per linee telefoniche e in qualsiasi altro ambiente in cui serva uno switch tra più ingressi.
- Attraverso quali componenti di base è possibile realizzare memorie RAM statiche? e memorie RAM dinamiche?
> Static RAM (SRAM) : circuiti FLIP-FLOP tipo D, molto veloci ma costose. Dinamic RAM (DRAM) : array di celle ognuna costiuita da un transistor più un condensatore, economiche ma più lente
- Descrivere (anche attraverso un esempio) che cos’è il fetch delle istruzioni
> Il fetch delle istruzioni consiste nel leggere l'istruzione seguente dalla memoria e metterla in IR e poi incrementare PC per indicare l'istruzione seguente. Es: viene messa in IR l'istruzione 00 04 56 00 00 00 che si trovava all'indirizzo 20h (puntato da PC). PC viene incrementato
- A cosa servel’unità floating point in una CPU? Che differenze ci sono tra unità floating point e ALU?
> Serve a processare informazioni in formato floating point (virgola mobile), mentre la ALU lavora solo con numeri interi
- Per quale motivo una memoria cache èin grado di migliorare (anche radicalmente) le prestazioni di una CPU?
> La RAM per quanto sia veloce è comunque molto più lenta della CPU, così viene interposta una piccola e rapidissima memoria (la cache) tra CPU e RAM. Si cerca quindi di prevedere lerichieste della CPU mettendo blocchi di memoria non richiesti nella cache. Così la CPU prima di controllare nella RAM avrà buone probabilità di trovare subito il dato cercato nella Cache. In caso la previsione non si dimostri utile il tempo per trovare ildato risulterà leggermente maggiore perchè oltre a controllare nella RAM la CPU sarà passata anche per la Cache
- Cosa significa che una CPU ha un’architettura a 32 bit? Per quale  motivo una CPU a 32 bit è più veloce di una CPU a 16 bit che opera alla stessa frequenza ?
> 32 bit è un aggettivo usato per descrivere l'architettura di una determinata CPU, che usa i registri interni, il busdegli indirizzi o bus dei dati di quella dimensione. E’ più veloce di un’architettura a 16 bit perché in uno stesso ciclo di clock alla stessa frequenza vengono processati il doppio dei dati
- Quali operazioni è normalmente in grado di eseguire una ALU?
> Operazioni logiche come AND,OR..., operazioni aritmetiche come sottrazioni e addizione,spesso anche divisione e moltiplicazione, addizione binaria
- Che cos’è un Interrupt ?
> Un Interrupt è il metodo con cui una periferica interrompe la CPU per segnalare
un determinato evento. La CPU può decidere se accettare o meno l'interruzione. Esiste una politica di arbitraggio (analoga a quella dei bus) in caso ci siano più interrupt contemporaneamente ed è gestita dal chip Intel 8259A
- Definire le modalità “Big Endian” e “Little Endian” e mostrare come la DWORD (12345678h) viene memorizzata, in ciascuna delle due modalità, a partire dall’indirizzo di memoria 1024
> Big endian inizia a scrivere dal byte piu significativo, Little endian inizia dal byte meno significativo.Big endian: (1024) 1-2,3-4,5-6,7-8 (1027)Little endian: (1024) 7-8,5-6,3-4,1-2 (1027)
- Descrivere il funzionamento di un Hard Disk
> Una testina attraversata da corrente elettrica scrive polarizzando la superficie del disco magnetico sotto di essa. Legge analizzando la corrente indotta nella testina dall'area del disco polarizzata
- Spiegare che cos'è, a cosa serve e come funziona il DMA
> (Direct Memory Acces) E' un circuito che consente il trasferimento di dati tra le periferiche senza la partecipazione della CPU. Ha 4 registri che contengono: Indirizzo iniziale, numero di byte, il numero del dispositivo e se i dati vanno letti o scritti. La CPU riempie questi registri e poi da il via al trasferimento. Al termine la CPU viene avvertita attraverso un Interrupt
- Quale risposta dareste a un amico, non esperto di informatica, che vi chiede: è più efficiente un PC con una CPU a 64 bit che lavora a 1GHz o un PC con una CPU a 32 bit che lavora a 3GHz ?
> Le prestazioni di un sistema a 64bit in teoriasono superiori a quelle diun 32bit, sempre che i programmi siano ottimizzati per questo tipo di architettura. Risponderei che se dovessi processare una grande quantità di dati, ottimizzata per lavorare in una CPU a 64 bit, sceglierei il primo. Se dovessi processare invece una quantità modesta di  dati,  che  quindi  non  richiederebbero  l’utilizzo  di  registri  a  64  bit  ma  inferiori, preferirei   avere   una   frequenza   di   clock   maggiore   in   modo   da   calcolare   più velocemente, sceglierei perciò il secondo
- Come è noto la CPU carica dalla memoria sia le istruzioni che gli (eventuali) operandi delle stesse. Discutere le differenze tra i due caricamenti indicando le fasi nei quali avvengono
> Il caricamento delle istruzioni viene eseguito nella fase di fetch. Durante la fase
di decodifica la CPU capisce se ci sono degli operandi e, se ci sono, li carica dalla memoria nella fase di execute
- Spiegare brevemente perché un flip-flop può essere usato per memorizzare un bit
> Un flip flop può essere utilizzato per memorizzare un bit in quanto attraverso l'uso di due porte NOR (collegando l'uscita di una a un ingresso dell'altra) si riesce a mantenere lo stato impostato inizialmente e quindi mantenere i due output (il bit memorizzato e il suo complementare) invariati
- Discutere le principali differenze tra una porta di comunicazione seriale tipo RS232 e una porta USB
> Un porta seriale RS232 ha una velocità massima di 115 KBit/sec in quanto utilizza solo 3 segnali per il trasferimento. I bit vengono trasmessi uno alla volta. Nei connettori sono spesso presenti molte linee per il controllo e per la sincronizzazione. Una porta USB ha una velocità di 1,5 MB/sec nella versione 1.1 e 60 MB/sec nella versione 2.0. Essa permette di collegare fino a 127 periferiche allo stesso PC, alimenta la periferica, la quale può anche essere collegata e scollegata dal PC senza che questo venga riavviato
- Discutere i casi in cui il risultato di un’operazione in aritmetica finita non appartiene all’insieme dei valori rappresentabili e fare alcuni esempi pratici
> I casi possono essere 3:OVERFLOW: quando il risultato è troppo grande in valore assoluto nell’insieme dei valori e non è rappresentabileUNDERFLOW: quando il risultato è troppo piccolo in valore assoluto nell’insieme dei valori e non è rappresentabileNON APPARTENENZA ALL'INSIEME: quando il risultato non appartiene all'insieme dei valori rappresentabili.ES: numeri a precisione finita con 3 cifre senza virgola e senza segnoOVERFLOW:  600 + 600  = 1200UNDERFLOW : 300 –600 = -300NON APPARTENENZA ALL'INSIEME: 007 / 002 = 3,5
- Che cos’è e a cosa può servire l’Algebra di Boole?
> L'algebra di Boole è un particolare tipo di algebra in cui levariabili e le funzioni possono solo avere valori 0 e 1. L'algebra Booleana può essere utilizzata per esprimere e semplificare circuiti digitali
- Spiegare perché nelle CPU più recenti si utilizzano due o più livelli di cache
> Nelle più recenti CPUvengono utilizzate più Cache in cascata per ottimizzare il rapporto costo/prestazioni. Infatti più la Cache è vicina alla CPU (livello più basso) più questa è veloce e costosa, e viceversa. Si utilizzano quindi livelli di Cache sempre più lontani, con ampiezza maggiore ma meno veloci,quindi anche meno costose
- Definire la “Distanza di Hamming” e mostrarne un esempio
> Date due stringhe (chiamiamole A e B) di bit e di ugual lunghezza si dice distanza di Hamming il numero di bit che bisogna cambiare in A per fare in modo che diventi uguale a B.Es:   10011010 - 11011000   In questo caso la distanza di Hamming è 2.
- Discutere brevemente la relazione esistente tra ISA e micro assembly language
> Il livello ISA e il micro assembly language sono entrambi “linguaggi” di basso livello. L'assembly è la trasformazione del livello ISA in un linguaggio mnemonico che oltre alla maggior intuitività offre anche altri vantaggi per il programmatore, come l'uso di etichette, costanti, macro ecc..
- Illustrare il funzionamento della tecnica di arbitraggio del bus “Daisy Chaining”, precisando in quale modo è stabilita la priorità fra le periferiche
> Il Daisy Chaining è una tecnica di abitraggio centralizzata, utilizza quindi un chip arbitro dal quale esce una linea output (Grant) che collega in serie tutti i dispositivi, e una linea “di richiesta” input comune a tutti i dispositivi. Quando un dispositivo vuole il controllo manda un segnale sulla linea di richiesta e di conseguenza l'arbitro attiva la linea di Grant. Il dispositivo più vicino controlla se è lui il richiedente, se così non fosse propaga il segnale al successivo ecc..fino ad arrivare al richiedente. Quindi hanno precedenza i dispositivi più “vicini” all'arbitro che solitamente sono le periferiche piuttosto che la CPU in modo da salvaguardarsi dalla perdita di dati
- Spiegare la differenza tra assembly e micro assembly
> Il linguaggio assembly (che costituisce l'ISA) contiene molte istruzioni che necessitano di diversi cicli di clock (corispondenti ai cicli di data path) per essere eseguite. La sequenza dei cicli di data path che formano un istruzione ISA è detta Microprogramma costituita da Microistruzioni (1xciclo, ognuna da 36 bit). Il MAL (micro assemly language) è il “linguaggio” nel quale vengono scritte le microistruzioni
- Quali sono le principali differenze fra un compilatore e un assemblatore?
> Il compilatore è un traduttore che lavora su un linguaggio sorgente ad alto livello (il rapporto tra istruzioni sorgente e istruzioni macchina è 1 a molti). L'assemblatore invece opera sul linguaggio assembly (il rapporto è 1 a 1)
- Discutere i principi di funzionamento dei monitor CRT e LCD
> CRT: (Cathode Ray Tube) un cannone elettronico spara elettroni su uno schermo ricoperto di un materiale a base di fosforo. Il cannone viene spostato velocemente in modo da potersparare a tutti i punti dello schermo a una velocità maggiore di quella che l'occhio può percepire.LCD: (Liquid Crystal Display) delle “molecole organiche vischiose” comunemente dette cristalli liquidi, sono contenute in miscroscopiche cellette (i pixel del monitor). Polarizzati attraverso un campo elettrico, i cristalli variano la resistenza al passaggio della luce (posta dietro di essi) rendendo così possibile il controllo della luminosità.Sia per gli LCD che per i CRT, i colori sono ottenuti mescolando Red Green Blue (RGB)
- Quali sono le principali differenze fra un compilatore e un interprete? Perché un programma compilato è in genere più veloce di uno interpretato?
> Un compilatore traduce le istruzioni in linguaggio macchina e alla fine di tutto il processo avremo un programma compilato  e quindi pronto ad essere eseguito, mentre un interprete traduce ed esegue direttamente le istruzioni ogni volta. Un programma interpretato quindi è piu lento e necessita di piu memoria rispetto ad uno compilato.
- Descrivere le funzionalità di una ALU a 8 bit e spiegare come può essere fisicamente realizzata
> Una ALU a 8 bit consente di eseguire le operazioni aritmetiche e logiche di base su due parole di 8 bit. Il circuito è realizzato concatenando 8 ALUa 1 bit, ogni ALU a 1 bit è collegata agli input e il riporto viene propagato di alu in alu
- Spiegare la differenza fra “polling” e “interrupt”
> Il polling e l'interrupt sono due tecniche per monitorare lo stato di una periferica da parte della CPU. Il polling consiste nel controllare in modo periodico, durante un ciclo, lo stato della periferica. Questo però porta a perdita di cicli e quindi di tempo. L'interrupt invece viene eseguito dalla periferica che invia un segnale alla CPU la quale può decidere se accettare o rifiutare
- Elencare e descrivere brevemente i modi di indirizzamento del Pentium II (livello ISA)
> -Indirizzamento immediato: l'operando contiene un valore costante MOV AL,10-Indirizzamento diretto: l'operando contiene un indirizzo di memoriaMOV AL,[104532a0h]-Indirizzamento dei registri: l'operando ontiene un registro  MOV AL,AH-Indirizzamento indiretto dei registri: il registro contiene un indirizzo di memoria che è l'operando   MOV EAX,[EBX]-Indirizzamento con offset:  MOV AL,Vettore[ECX*4+4]
- In cosa consiste una tabella della verità?  Darne una definizione formale
> Sono tabelle che contengono variabili e funzioni booleane, le righe sono 2^n dove n è il numero di variabili in modo da creare tutte le configurazioni possibili. Ogni riga mostra il valore restituito a partire da una particolare configurazione dell'input
- Definire le architetture superscalari e indicarne i principali vantaggi
> Le architetture superscalari supportano il calcolo parallelo su un singolo chip, ovvero sono presenti più unità funzionali dello stesso tipo, per esempio solitamente sono presenti più ALU, ma anche unità floating point ecc. In questo modo si possono eseguire in un singolo ciclo più operazioni
- Per quali motivi in uno stesso calcolatore vengono tipicamente impiegate più tecnologie di memoria (SRAM, DRAM, ROM)?
> Ogni tipo di memoria ha pregi e difetti, quindi ogni componente viene utilizzato nel modo giusto. Ad esempio le SRAM particolarmente veloci ma anche costose vengono utilizzate solo come Cache L2, le DRAM invece sono un buon compromesso per essere utilizzate come memoria centrale. Una ROM invece è permanente e di poca capacità quindi perfetta per il suo compito.
- Discutere brevemente le differenze esistenti tra bus ISA e PCI
> Il bus ISA introdotto da IBM funziona a una velocità massima di 8,33 Mhz e larghezza di banda di 16,7 MB/sec. Utilizza 16 linee dati. Il bus PCI introdotto da Intel utilizza 32 linee dati, opera a 33MHz e ha una larghezza di banda di 133 MB/sec
- Elencare le più comuni tecnologie utilizzate dalle stampanti, descrivendone brevemente i principi di funzionamento
> Esistono stampanti a matrice,a laser e a getto d'inchiostro.-Le stampanti a matrice sono basate su una testina mobile che contiene da 2 a 24 aghi, più è il numero di aghi e più è precisa la stampa.-Le stampanti a laser utilizzano un rullo sul quale passa il foglio, un laser riflesso da uno specchio ottagonale colpisce il rullo che nei punti colpiti perde carica elettrica. I punti rimasti carichi arrirano il materiale colorante che viene poi fissato da rulli riscaldati.-Le stampanti a getto d'inchiostro sono le più usate per stampe colorate. Usano 4 cartucce (magenta,ciano,giallo,nero). La testina mobile spruzza l'inchiostro per mezzo di piccoli uggelli.47) Quante linee di uscita ha un decoder che possiede 2 linee di input? Disegnare il circuito mediante porte logiche.47) in base alla combinazione dei  bit presenti ai suoi ingressi, attiva una rispettiva combinazione di bit sulle linee di uscita.
- Che cosa si intende per “Program Counter”?
> Il PC (Program Counter) è il registro più importante, fa parte dell'unità di controllo e indica la prossima istruzione da eseguire.
- Che cos’è IJVM ?
> Java è un linguaggio ad alto livello indipendente dalla piattaforma hardware.Può essere interpretato a run time da un interprete che genera da esso istruzioni ISA adatte al architettura in uso (metodo lento), o può essere compilato in un codice binario detto Bytecode, eseguito poi da un JVM (java virtual machine). La seconda opzione, più performante, impone l'esistenza di una JVM per ogni piattaforma hardware diversa. La JVM è comunque anch'essa un interprete, ma a basso livello. IJVM (IntegerJVM) è il sottoinsieme delle istruzioni Bytecode-java relative ai numeri interi
- Che cosa si intende per “esecuzione fuori ordine delle istruzioni/micro-istruzioni” e in quali casi può essere utile?
> L' esecuzione fuori ordine consiste nel scavalcare un'operazione e passare a quelle successive facendo in modo che i risultati finali siano gli stessi. Viene quindi applicata quando per esempio un'istruzione per essere eseguita deve aspettare che ne venga eseguita un'altra, la CPU così invece di aspettare esegue alcune operazioni successive.
- Arbitraggio del bus: dare una definizione e discutere le principali differenze tra arbitraggio centralizzato e distribuito.
> Le politiche di arbitraggio del bus sono la soluzione al fatto che più dispositivi possono richiedere il controllo del bus nello stesso momento. Quindi uno dei due deve aspettare e ciò viene deciso dalle poliche di arbitraggio che può essere centralizzato o distribuito. Nell'arbitraggio centralizzato è presente un chip arbitro collegato a tutti i dispositivi, quando un dispositivo chiede il controllo del bus l'arbitro attiva un metodo di priorità. Nell'arbitraggio distribuito non c'è un chip arbitro, vengono utilizzate 16 linee di richiesta. Ogni dispositivo è collegato a tutte e 16 le linee ed è anche in grando di valutare la sua priorità rispetto agli altri
- Spiegare la differenza fra un segnale digitale e un segnale analogico
> Un segnale è digitale quando i valori utili che lo rappresentano sono discreti e finiti. Un segnale è analogico quando i valori utili che lo rappresentano sono continui (infiniti) in un intervallo
- Cosa significa che una CPU ha un’architettura a 32 bit? Per quale motivo una CPU a 32 bit è più veloce di una CPU a 16 bit che opera alla stessa frequenza?5
> Una CPU a 32 bit è migliore di una a 16 bit in quanto la prima in un ciclo di data path riesce a eseguire operazioni sul doppio dei dati avendo registri a 32 bit e bus adeguati
- Dare una definizione formale di CPU e descriverne i principali componenti
> La CPU (central process unit) ha il compito di eseguire i programmi immagazzinati nella memoria centrale.-unità di controllo: legge le istruzioni dalla memoria centrale (RAM) e ne determina il tipo-ALU: esegue le operazioni necessarie  all'esecuzioni delle istruzioni (AND, OR ...).-Registri: piccola e veloce memoria usata per contenere i risultati temporanei e varie informazioni di controllo
- Descrivere quali approcci vengono comunemente utilizzati per migliorare le prestazioni di un calcolatore
> Solitamente si cerca di ridurre il numero di cicli, aumentare la frequenza di clock semplificando l'organizzazione, sovrapporre l'esecuzione delle istruzioni(parallelismo) attraverso l'uso di pipeling, architetture superscalarie CPU in parallelo
- Si descrivano le diverse operazioni che compongono il ciclo di fetch-decode-execute
> Fetch:1-legge l'istruzione seguente e la mette in IR2-Incrementa PC per indicare l'istruzione seguenteDecode:    3-Decodifica l'istruzione appena lettaExecute:   4-Determina dove si trovano gli operandi nel caso ci siano5-Se necessario mette gli operandi nei registri6-Esegue l'istruzione7-Salva il risultato nel registro
- Discutere differenze e analogie tra ROM, PROM ed EPROM
> ROM: (Read Only Memory) memoria che non può essere cancellata in quanto i
dati vengono memorizzati durante la fase di costruzione.PROM: (Programmable ROM) anche questa memoria può essere scritta una sola volta ma la differenza è che i metodi con cui è scritta sono più semplici e meno dispendiosi, Può essere usata per prototipi e solitamente non è prodotta in serie.EPROM: (Erasable PROM) funziona ed è programmata esattamente come una PROM ma il suo contenuto può essere canellato da luceultravioletta e quindi riscritta
- Descrivere le funzionalità di una ALU a N bit
> Una generica ALU (unità aritmetico-logica) come suggerisce il nome può eseguire svariate operazioni aritmetiche e operazioni logiche (AND, OR, XOR....) sfruttando l'architettura a N bit dei registri
- Descrivere l’architettura di Von Neumann con l’aiuto di uno schema esplicativo
> L'architettura di Von Neumann sibasa sul fatto che la memoria viene utilizzata non solo per i dati ma anche per i prgrammi.La CPU legge attraverso il bus inidirzzi un'istruzione per volta e attraverso il bus dati può leggere o scrivere dati
- Che cos’è il fetch di un’istruzione ?  Cosa si intende per pre-fetching ?
> Il fetch di un'istruzione consiste nel caricare questa nel registro IR ed incrementare PC. Il pre-fetch è un'operazione di predizione dell'istruzione seguente in modo che sia già pronta una volta eseguita l'istruzione corrente
- Descrivere il processo di traduzione da un generico linguaggio di alto livello al linguaggio macchina
> Il linguaggio ad alto livello è completamente indipendente dalla macchina, per poter funzionare deve essere tradotto da un compilatore (o eventualmente da un interprete). Il “risultato” della compilazione (già a basso livello) deve passare per il linker che collega i vari moduli (librerie / sottoprogrammi) prima di diventare un vero e proprio eseguibile
- Che cosa si intende per “tecniche di predizione di salto” e in quali casi possono essere utili?
> Le architetture pipeline velocizzano molto l'esecuzione delle istruzioni, ma sono inutili quando sono presenti molti salti. Per ottimizzare questa architettura si utilizzano tecniche di predizione di salto che con criteri basati su statistiche o sul “buon senso” (abitudini dei programmatori) cercano di prevedere un salto
- Descrivere le caratteristiche di un’interfaccia seriale e asincrona
> Un'interfaccia seriale significa che ibit che costituiscono l'informazione vengono trasmessi uno alla volta su di un unico conduttore e si sincronizzano utilizzando un clock, mentre in un'interfaccia asincrona i dati sono trasmessi senza far riferimento ad un clock comune
- Si scriva la legge di Amdhale si indichi in quale contesto viene utilizzata. (mostrare un semplice esempio della sua applicazione.)
> La legge di Amdhal afferma che il miglioramento delle prestazioni di un sistema che si ottine accelerando un qualsialsi sottinsieme del calcolatore è proporzionale alla percentuale di tempo per cui quel sottinsieme è utilizzato.(l'esercizio che abbiamo sul quaderno, quello con la P, con lambda ecc)
- Che cos’è un GATEWAY
> E' l'apparecchio che (in una rete) si occupa di instradare i pacchetti verso l' esterno della rete
- Quali meccanismi vengono utilizzati per sincronizzare CPU e memorie (che sono tipicamente più lente)?
> Per sincronizzare memorie e CPU si utilizza una piccola ma veloce memoria, la cache. Nella cache vengono memorizzati i dati che devono essere processati e insieme a questi anche i dati contigui che risiedono in memoria cercando così di prevedere la prossima richiesta della CPU. La CPU prima di cercare nella memoria, richiede il dato alla cache che è molto piu veloce
- Quali sono le principali tipologie di architetture parallele?
> -Parallelismo nel Chip: comprende Pipeling, Architetture superscalari, multicore, multi-threating.
-Coprocessori: al processore viene aggiunto un altro processore indipendente che esegue compiti specializzati.-Multiprocessori: sono sistemi con più di una CPU e con memoria condivisa, ogni processore comunica attraverso le celle di memoria, c'è una sola copia del sistema operativo in esecuzione.-Multicomputer: sono sistemi con più di una CPU e con memoria propria, questo implica una bassa interezione tra le varie CPU perchè bisogna utilizzare una rete di interconnessione che comporta anche un complesso sitema di instradamento. Su ogni CPU è in esecuzione una copia del sistema operativo.-Cluster: Sono più PC collegati attraverso schede di rete, quindi sono più economici e possono essere utilizzati in vari modi, per esempio sfruttati nello stesso momento e al massimo, oppure il secondo PC sostituisce il primo se questo smetti di funzionare...ecc.
- Si indichi in che modo sono memorizzate le informazioni in un disco magnetico, specificando i tre elementi che ne caratterizzano l’organizzazione
> I dischi magnetici sono composti principalmente da cilindri,settori e tracce. L'interastruttura è formata da più cilindri (dischi) posizionati uno sopra l'altro. Ogni cilindro contiene le tracce, sequenze circolari di bit, mentre un settore è una porzione di traccia di dimensione fissa (solitamente 512 byte)
- Quanti chip di memoria 32K x 8 sono necessari per realizzare una memoria centrale con parole di 32 bit e capacità 256Kparole?  Motivare la risposta.
> 32K X 8      32k=numero parole    8=numero flip flop per parola (grandezza parola). Per arrivare a parole grandi 32 mettiamo in parallelo4(32k x 8). Per arrivare a 256k parole usiamo 8(4(32k x 8))   Quindi 4*8 volte 32k x 8  = 32 chip di memoria.
- Quanti flip-flop sono necessari per realizzare una SRAM  32K x 8? Motivare la risposta
> 32k x 8 =256000 perchè ci sono 32000 parole, ognuna rappresentata da 8 flip flop.81) Descrivere le differenze fra parallelismo a “livello di istruzione” e a “livello di processore”.81) Il parallelismo a livello di istruzione consiste nell'eseguire più istruzioni contemporaneamente attraverso tecniche di pipeling e Architetture Superscalari. Si parla di parallelismo a livello di processore quando lo stesso problema (o processo) è suddiviso in più parti (più thread) che vengono eseguite in modo suddiviso da più CPU
- Che cos’è il “control store” in unamicroarchitettura?
> E' una memoria ROM al interno della CPU che contiene le microistruzioni che formano i microprogrammi che codificano le itruzioni ISA, EIDE, SCSI, SATA: cambiamento da seriale a parallelo
- Quali sono le 'generazioni' della storia dei calcolatori?
> Zero; calcolatori meccanici, Prima; relè valvole termodinamiche, Seconda; transistor, Terza; circuiti integrati, Quarta; VLSI, Quinta: smartphone, tablet e sistemi embedded
- Quali sono le principali caratteristiche delle CPU ARM utilizzate nei sistemi embedded rispetto alle CPU utilizzate nei PC?
>Hanno una capacita di calcolo di poco inferiore e sono a bassissimo consumo 
- Come può essere eseguita una sottrazione all'interno di una ALU utilizzando il circuito sommatore?
>Si potrebbe eseguire una somma, pero utilizzando il complemento a 2, quindi facendo un not bit a bit del secondo operando, sommargli 1 e poi eseguire una normale somma tra interi
- Descrivere brevemente la codifica digitale di un suono.
>Un suono è un onda quindi un segnale analogico, viene quindi rappresentata attraverso un campionamento ed una quantizzazione con elevato numero di bit
- Una CPU moderna (es. Intel Core I7) che ordine di grandezza (GigaFlops) raggiunge in termini di prestazioni?
>dai 50 ai 1000 GigaFlops
- In quale periodo storico furono realizzati i primi calcolatori meccanici? Descriverne i principali rappresentanti.
>Il periodo storico è circa quello del 1600, Pascal con dispositivo ad ingranaggi azionati a manovella (addizioni e sottrazioni), VOn Leibiniz 1672 macchina in grado di eseguire moltiplicazioni, 1834 Macchina di turing 
- Che cosa si intende con il termine 'canali' nell'ambito del BUS PCI-Express?
>I canali nella PCIe sono i collegamenti paralleli sui quali viaggiano le informazioni dalla periferica alla CPU per poter aumentare ulteriormente la banda
- Principi istruzioni RISC
> Istruzioni ISA eseguite direttamente dal hardware cioè dalla control unit, utilizzo di pipeling e parallelismo per incrementare i MIPS, istruzioni facilmente decodificabili, struttura regolare e lunghezza fissa, eliminare i tempi morti nelle istruzioni dati dal ritardo della lettura in memoria di dati limitare quindi che solo le istruzioni LOAD e STORE contengano indirizzi di memoria,  molti registri significa una potenza di calcolo maggiore incrementare il numero utliizzando spazio fisico ricavato dai primi punti del discorso 
- Cosa si intende per disco RAID?
>E' un sistema di organizzazione della memoria in cui una serie di dischi economici vengono collegati tra loro ed appaioiono al compilatore come un unica memoria, tutto cio per incrementare le prestazioni e poter sostituire dischi piu facilmente
- Descrivere brevemente la codifica digitale di un'immagine a livelli di grigio.
>L' immagine viene rappresentata come una matrice ed ogni termine di questa matrice potrebbe essere un pixel, ogni elemento della matrice indica numericamente la quantita di grigio cioe luminosita in una scala a 256 grigi, 1 pixel => 1 byte
- Che cos'è il processo di fotolitografia utilizzato nella fabbricazione dei circuiti integrati?
>E' un processo utilizzato per creare circuiti, funziona prendendo sabbie silicee e fondendole si ottengono dei dischi molto sottili, successivamente su questi dischi chiamati wafer vengono applicati degli strati di materiali semiconduttori, ora sui dischi dei laser incidono delle tracce, dopo una bagno in solventi e una serie di incisioni/lavaggi vengono creati tramite rilievo dei piccolissimi transistor i quali verranno poi ritagliati ed utilizzati nei circuiti che tutti conosciamo
- Quali sono le principali differenze in termini di prestazioni tra dischi magnetici e dischi allo stato solido?
>I dischi SSD sono un evoluzione degli HDD, la loro velocità è maggiore 100-600 Mb/s rispoetto a quello degli HDD 100-300Mb/s, i primi sono composti da circuiti e transistor il che li rende molto compatti ma poco capienti, i secondi sono dischi magnetici con testine che operano ad altazze di nanometri quindi estremamente delicati ma molto capienti, un altr differenza percio risiede nel costo, gli SSD hanno un costo di 0,23 $/Gb mentre gli HDD 0,03 $/Gb, solitamente gli SSD si usano installando un sistema operativo su di essi per la velocita d'avvio 
- Che cos'è la codifica dei caratteri UNICODE e per quale motivo è stata introdotta?
>E' una codifica internazionale dei caratteri di qualsiasi  lingua, simbolo, braille, è stata introdotta per permetttere una comunicazione da chiunque verso chiunque
- Cosa si intende con il termine 'maschera di bit' e in quali casi può essere utile?
> E' un insieme di bit di lunghezza predefinita che può essere usato come operatore nelle operazioni bit a bit, oppure nel codice di correzione degli errori
- Cosa si intende per località spaziale e località temporale in una memoria Cache?
>Questi concetti esprimono due operazioni della cache ossia l' allocazione di blocchi ed il loro rimpiazzamento, il principio di spazialità dice che dopo aver prelevato un istruzione dalla memoria la probabilità di dover prelevare istruzioni vicine ad essa è molto alto, percio si preleva tuttop  il blocco di istruzioni e lo si alloca nella cache, il principio di spazialià invece dice che la probabilità che un blocco appena prelevato venga utilizzato di lì a poco tempo è alta, perciò si rimpiazza con il blocco appena utilizzato quello in memoria da più tempo, la politica è quella del LRU (Last Recently Used)
- differenza tra compilatore/assemblatore
>Il compilatore è un programma che traduce le daun linguaggio di programmazione di alto livello le istruzioni ISA e le esegue in una seconda passata creando un file eseguibile .exe (SIMI) mentre l'assemblatore legge direttamente codice in formato assembly (SISI)
- Cos'è un multiplexer e a cosa può servire?
>Il multiplexer è un circuito che permettere tramite n bit di controllo di indirizzare un segnale scelte tra 2^n verso l'output
- fetch decode ed execute
>fetch corrisponde alla lettura dell istruzione, decode corrisponde alla sua traduzione in linguaggio ISA ed execute l'esecuzione della stessa
- differenza fra little endian e big endian
> La differenza sta nella posizione delle cifre meno significative nella rappresentazione binaria, nel Big Endian le cifre meno significative occupano l' offset minore mentre nel Little Endian occupano l'offset maggiore
- le espressioni booleane sono isomorfe ai circuiti digitali. Cosa significa?
>Un  circuito  digitale  può  essere espresso tramite un’espressione booleana e viceversa
-  ho un disco magnetico e dram per leggere delle parole. In che ordine di grandezza siamo?
> decine di millisecondi per HD e una o due decine di nanosecondi per la DRAM
- i tipi di RAM
> SRAM, DRAM, SDRAM
- differenza tra DRAM e SRAM
>I due tipi di RAM differiscono per struttura, le SRAM sono costituite da Flip-flop e sono quindi molto veloci e costose, spesso utilizzate nelle cache di secondo livello le DRAM invece sono costituite da un transitor e un condensatore, tempi di prelevamento delle istruzioni passano da alcuni nanosecondi (SRAM) a decine di nanosecondi (DRAM)
- flip flop
>Prima di parlare del Flip-Flop bisogna spiegare cosa sia un latch SR, un circuito che dato un input è in grado di ricordare se quell input è uno 0 oppure un 1 attraverso la caratteristica di questo circuito di potersi mantenere tramite una corrente in due stati stabili ben definiti(bistabile), il latch di tipo D ulitlizza il clock per regolare questi cambiamenti il flip-flop fa una cosa simile solo che al posto di utilizzare 'alto/basso del segnale di clock usa il fronte di discesa e di salita.
- pipeline
>Una tecnica utilizzata nell ambito del miglioramento delle prestazioni con la quale un istruzione viene divisa in piu stadi che una volta completato il loro lavoro al posto di aspettare a vuoto la fine del ciclo di quell istruzione passano a quella dopo
- tipi di rom
>PROM; programmable ROM, i programmi possono essere scritti una volta con tecnioche a basso costo, EPROM; Erasable PROM i campi possono esseere programmati ma anche cancellati con UVA, EEPROM; Elettrically EPROM una EPROM che può essere cancellata elettronicamente senza essere smontata, FLASH; cancellabile come EEPROM ma non con singole parole bensi a blocchi (card sd, Memory FLash)
- ordini di grandezza nei tempi di lettura delle memorie e hard disk
>Hard disk; average seek 8-10 millisecondi, track to track 2 millisecondi, full stroke 15-20 millisecondi mentre gli SSD hanno un tempo di accesso di 100 microsecondi
- quante configurazioni con n bit e intervalli rappresentabili nelle diverse codifiche
> con n bit sono rappresentabili 2^n configurazioni
- parallelismo nel chip
>Multi-thread; ossia nella stessa CPU vengono elaborati contemporaneamente piu di un processo, come se esistessero due chip virtuali, a livello di istruzioni; pipeling e architetture supercalari, MUlti-core: vero mutli-threading, core eterogenei nei chip
- clock\periodo di clock\frequenza di clock
> T clock = 1 /frequenza => frequenza = 1/T clock
- distanza di hamming e uso per identificare\correggere errori
>La distanza di Hamming identifica il numero di bit che devo cambiare ad una WORD per renderla equivalente ad un'altra, nel codice di correzioni degli errori viene usato un bit di parità supplementare per il conto degli 1 nel numero in formato binario, questo bit vale 1 o 0 a seconda della quantità pari o dispari di 1, da qui si può correggere una parola sbagliata entro una distanza di hamming 2, cioè errori pari aa 1 bit
- Legge di Moore
>Ogni 18 mesi la dimensione dei transistor si dimezza, perciò ne aumenta del doppio la quantità collocabile entro la stessa area
- Arbitraggio del bus: dare una definizione e discutere le principali differenze tra arbitraggio centralizzato e distribuito
> (51) Le politiche di arbitraggio del bus sono la soluzione al fatto che più dispositivi possono richiedere il controllo del bus nello stesso momento. Quindi uno dei due deve aspettare e ciò viene deciso dalle poliche di arbitraggio che può essere centralizzato o distribuito. Nell'arbitraggio centralizzato è presente un chip arbitro collegato a tutti i dispositivi, quando un dispositivo chiede il controllo del bus l'arbitro attiva un metodo di priorità. Nell'arbitraggio distribuito non c'è un chip arbitro, vengono utilizzate 16 linee di richiesta. Ogni dispositivo è collegato a tutte e 16 le linee ed è anche in grando di valutare la sua priorità rispetto agli altri
- Che cos’è il fetch di un’istruzione ?  Cosa si intende per pre-fetching ?
>Il fetch di un'istruzione consiste nel caricare questa nel registro IR ed incrementare PC. Il pre-fetch è un'operazione di predizione dell'istruzione seguente in modo che sia già pronta una volta eseguita l'istruzione corrente
- È corretto affermare che le frequenze di clock delle CPU nei prossimi anni non potranno aumentare significativamente? Motivare la risposta
 
> Si in quanto sono stati ormai raggiunti i limiti fisici:-le frequenze creano disturbi e calore difficile da dissipare-ci sono ritardi nella propagazione del segnale-problemi di sincronizzazione
- Discutere PRO e CONTRO di bus sincroni e asincroni
> Nel bus sincrono lo scambio di dati è scandito da un clock, è più facile da realizzare ma è limitato in quanto tutto deve avvenire in tempi multipli del tempo di ciclo, quindi si spreca tempo. Nel bus asincrono invece lo slave esegue il lavoro nel minor tempo possibile poi mette i dati sul bus e il master li legge. Quindi c'è un risparmio di tempo ma questo genere di bus è più complesso da realizzare
- Cos’è il “Data Path”?
> Il ciclo di Data Parh è il passaggio di due operandi attraverso la ALU e la memorizzazione del risultato in un nuovo registro
- Si descriva brevemente cosa si intende per: 1) compilatore, 2) assemblatore, 3) linker
> Compilatore: è un programma che traduce una serie di istruzioni scritte in un linguaggio di alto livello in istruzioni di un'altro linguaggio.     Assemblatore: traduce le istruzioni assembly in linguaggio macchina.Linker: è il programma che si occupa di collegare i vari moduli (librerie o sottoprogrammi) creando una singola unità eseguibile
- A cosa può servire in pratica un multiplexer?
> Seleziona uno degli n ingressi attraverso dei bitdi controllo mandandolo in una solo uscita. Viene utilizzato per linee telefoniche e in qualsiasi altro ambiente in cui serva uno switch tra più ingressi.
- Attraverso quali componenti di base è possibile realizzare memorie RAM statiche? e memorie RAM dinamiche?
> Static RAM (SRAM) : circuiti FLIP-FLOP tipo D, molto veloci ma costose. Dinamic RAM (DRAM) : array di celle ognuna costiuita da un transistor più un condensatore, economiche ma più lente
- Descrivere (anche attraverso un esempio) che cos’è il fetch delle istruzioni
> Il fetch delle istruzioni consiste nel leggere l'istruzione seguente dalla memoria e metterla in IR e poi incrementare PC per indicare l'istruzione seguente. Es: viene messa in IR l'istruzione 00 04 56 00 00 00 che si trovava all'indirizzo 20h (puntato da PC). PC viene incrementato
- A cosa servel’unità floating point in una CPU? Che differenze ci sono tra unità floating point e ALU?
> Serve a processare informazioni in formato floating point (virgola mobile), mentre la ALU lavora solo con numeri interi
- Per quale motivo una memoria cache èin grado di migliorare (anche radicalmente) le prestazioni di una CPU?
> La RAM per quanto sia veloce è comunque molto più lenta della CPU, così viene interposta una piccola e rapidissima memoria (la cache) tra CPU e RAM. Si cerca quindi di prevedere lerichieste della CPU mettendo blocchi di memoria non richiesti nella cache. Così la CPU prima di controllare nella RAM avrà buone probabilità di trovare subito il dato cercato nella Cache. In caso la previsione non si dimostri utile il tempo per trovare ildato risulterà leggermente maggiore perchè oltre a controllare nella RAM la CPU sarà passata anche per la Cache
- Cosa significa che una CPU ha un’architettura a 32 bit? Per quale  motivo una CPU a 32 bit è più veloce di una CPU a 16 bit che opera alla stessa frequenza ?
> 32 bit è un aggettivo usato per descrivere l'architettura di una determinata CPU, che usa i registri interni, il busdegli indirizzi o bus dei dati di quella dimensione. E’ più veloce di un’architettura a 16 bit perché in uno stesso ciclo di clock alla stessa frequenza vengono processati il doppio dei dati
- Quali operazioni è normalmente in grado di eseguire una ALU?
> Operazioni logiche come AND,OR..., operazioni aritmetiche come sottrazioni e addizione,spesso anche divisione e moltiplicazione, addizione binaria
- Che cos’è un Interrupt ?
> Un Interrupt è il metodo con cui una periferica interrompe la CPU per segnalare
un determinato evento. La CPU può decidere se accettare o meno l'interruzione. Esiste una politica di arbitraggio (analoga a quella dei bus) in caso ci siano più interrupt contemporaneamente ed è gestita dal chip Intel 8259A
- Definire le modalità “Big Endian” e “Little Endian” e mostrare come la DWORD (12345678h) viene memorizzata, in ciascuna delle due modalità, a partire dall’indirizzo di memoria 1024
> Big endian inizia a scrivere dal byte piu significativo, Little endian inizia dal byte meno significativo.Big endian: (1024) 1-2,3-4,5-6,7-8 (1027)Little endian: (1024) 7-8,5-6,3-4,1-2 (1027)
- Descrivere il funzionamento di un Hard Disk
> Una testina attraversata da corrente elettrica scrive polarizzando la superficie del disco magnetico sotto di essa. Legge analizzando la corrente indotta nella testina dall'area del disco polarizzata
- Spiegare che cos'è, a cosa serve e come funziona il DMA
> (Direct Memory Acces) E' un circuito che consente il trasferimento di dati tra le periferiche senza la partecipazione della CPU. Ha 4 registri che contengono: Indirizzo iniziale, numero di byte, il numero del dispositivo e se i dati vanno letti o scritti. La CPU riempie questi registri e poi da il via al trasferimento. Al termine la CPU viene avvertita attraverso un Interrupt
- Quale risposta dareste a un amico, non esperto di informatica, che vi chiede: è più efficiente un PC con una CPU a 64 bit che lavora a 1GHz o un PC con una CPU a 32 bit che lavora a 3GHz ?
> Le prestazioni di un sistema a 64bit in teoriasono superiori a quelle diun 32bit, sempre che i programmi siano ottimizzati per questo tipo di architettura. Risponderei che se dovessi processare una grande quantità di dati, ottimizzata per lavorare in una CPU a 64 bit, sceglierei il primo. Se dovessi processare invece una quantità modesta di  dati,  che  quindi  non  richiederebbero  l’utilizzo  di  registri  a  64  bit  ma  inferiori, preferirei   avere   una   frequenza   di   clock   maggiore   in   modo   da   calcolare   più velocemente, sceglierei perciò il secondo
- Come è noto la CPU carica dalla memoria sia le istruzioni che gli (eventuali) operandi delle stesse. Discutere le differenze tra i due caricamenti indicando le fasi nei quali avvengono
> Il caricamento delle istruzioni viene eseguito nella fase di fetch. Durante la fase
di decodifica la CPU capisce se ci sono degli operandi e, se ci sono, li carica dalla memoria nella fase di execute
- Spiegare brevemente perché un flip-flop può essere usato per memorizzare un bit
> Un flip flop può essere utilizzato per memorizzare un bit in quanto attraverso l'uso di due porte NOR (collegando l'uscita di una a un ingresso dell'altra) si riesce a mantenere lo stato impostato inizialmente e quindi mantenere i due output (il bit memorizzato e il suo complementare) invariati
- Discutere le principali differenze tra una porta di comunicazione seriale tipo RS232 e una porta USB
> Un porta seriale RS232 ha una velocità massima di 115 KBit/sec in quanto utilizza solo 3 segnali per il trasferimento. I bit vengono trasmessi uno alla volta. Nei connettori sono spesso presenti molte linee per il controllo e per la sincronizzazione. Una porta USB ha una velocità di 1,5 MB/sec nella versione 1.1 e 60 MB/sec nella versione 2.0. Essa permette di collegare fino a 127 periferiche allo stesso PC, alimenta la periferica, la quale può anche essere collegata e scollegata dal PC senza che questo venga riavviato
- Discutere i casi in cui il risultato di un’operazione in aritmetica finita non appartiene all’insieme dei valori rappresentabili e fare alcuni esempi pratici
> I casi possono essere 3:OVERFLOW: quando il risultato è troppo grande in valore assoluto nell’insieme dei valori e non è rappresentabileUNDERFLOW: quando il risultato è troppo piccolo in valore assoluto nell’insieme dei valori e non è rappresentabileNON APPARTENENZA ALL'INSIEME: quando il risultato non appartiene all'insieme dei valori rappresentabili.ES: numeri a precisione finita con 3 cifre senza virgola e senza segnoOVERFLOW:  600 + 600  = 1200UNDERFLOW : 300 –600 = -300NON APPARTENENZA ALL'INSIEME: 007 / 002 = 3,5
- Che cos’è e a cosa può servire l’Algebra di Boole?
> L'algebra di Boole è un particolare tipo di algebra in cui levariabili e le funzioni possono solo avere valori 0 e 1. L'algebra Booleana può essere utilizzata per esprimere e semplificare circuiti digitali
- Spiegare perché nelle CPU più recenti si utilizzano due o più livelli di cache
> Nelle più recenti CPUvengono utilizzate più Cache in cascata per ottimizzare il rapporto costo/prestazioni. Infatti più la Cache è vicina alla CPU (livello più basso) più questa è veloce e costosa, e viceversa. Si utilizzano quindi livelli di Cache sempre più lontani, con ampiezza maggiore ma meno veloci,quindi anche meno costose
- Definire la “Distanza di Hamming” e mostrarne un esempio
> Date due stringhe (chiamiamole A e B) di bit e di ugual lunghezza si dice distanza di Hamming il numero di bit che bisogna cambiare in A per fare in modo che diventi uguale a B.Es:   1001101011011000   In questo caso la distanza di Hamming è 2.
- Discutere brevemente la relazione esistente tra ISA e micro assembly language
> Il livello ISA e il micro assembly language sono entrambi “linguaggi” di basso livello. L'assembly è la trasformazione del livello ISA in un linguaggio mnemonico che oltre alla maggior intuitività offre anche altri vantaggi per il programmatore, come l'uso di etichette, costanti, macro ecc..
- Illustrare il funzionamento della tecnica di arbitraggio del bus “Daisy Chaining”, precisando in quale modo è stabilita la priorità fra le periferiche
> Il Daisy Chaining è una tecnica di abitraggio centralizzata, utilizza quindi un chip arbitro dal quale esce una linea output (Grant) che collega in serie tutti i dispositivi, e una linea “di richiesta” input comune a tutti i dispositivi. Quando un dispositivo vuole il controllo manda un segnale sulla linea di richiesta e di conseguenza l'arbitro attiva la linea di Grant. Il dispositivo più vicino controlla se è lui il richiedente, se così non fosse propaga il segnale al successivo ecc..fino ad arrivare al richiedente. Quindi hanno precedenza i dispositivi più “vicini” all'arbitro che solitamente sono le periferiche piuttosto che la CPU in modo da salvaguardarsi dalla perdita di dati
- Spiegare la differenza tra assembly e micro assembly
> Il linguaggio assembly (che costituisce l'ISA) contiene molte istruzioni che necessitano di diversi cicli di clock (corispondenti ai cicli di data path) per essere eseguite. La sequenza dei cicli di data path che formano un istruzione ISA è detta Microprogramma costituita da Microistruzioni (1xciclo, ognuna da 36 bit). Il MAL (micro assemly language) è il “linguaggio” nel quale vengono scritte le microistruzioni
- Quali sono le principali differenze fra un compilatore e un assemblatore?
> Il compilatore è un traduttore che lavora su un linguaggio sorgente ad alto livello (il rapporto tra istruzioni sorgente e istruzioni macchina è 1 a molti). L'assemblatore invece opera sul linguaggio assembly (il rapporto è 1 a 1)
 
- Discutere i principi di funzionamento dei monitor CRT e LCD
> CRT: (Cathode Ray Tube) un cannone elettronico spara elettroni su uno schermo ricoperto di un materiale a base di fosforo. Il cannone viene spostato velocemente in modo da potersparare a tutti i punti dello schermo a una velocità maggiore di quella che l'occhio può percepire.LCD: (Liquid Crystal Display) delle “molecole organiche vischiose” comunemente dette cristalli liquidi, sono contenute in miscroscopiche cellette (i pixel del monitor). Polarizzati attraverso un campo elettrico, i cristalli variano la resistenza al passaggio della luce (posta dietro di essi) rendendo così possibile il controllo della luminosità.Sia per gli LCD che per i CRT, i colori sono ottenuti mescolando Red Green Blue (RGB)
- Quali sono le principali differenze fra un compilatore e un interprete? Perché un programma compilato è in genere più veloce di uno interpretato?
> Un compilatore traduce le istruzioni in linguaggio macchina e alla fine di tutto il processo avremo un programma compilato  e quindi pronto ad essere eseguito, mentre un interprete traduce ed esegue direttamente le istruzioni ogni volta. Un programma interpretato quindi è piu lento e necessita di piu memoria rispetto ad uno compilato.
- Descrivere le funzionalità di una ALU a 8 bit e spiegare come può essere fisicamente realizzata
> Una ALU a 8 bit consente di eseguire le operazioni aritmetiche e logiche di base su due parole di 8 bit. Il circuito è realizzato concatenando 8 ALUa 1 bit, ogni ALU a 1 bit è collegata agli input e il riporto viene propagato di alu in alu
- Spiegare la differenza fra “polling” e “interrupt”
> Il polling e l'interrupt sono due tecniche per monitorare lo stato di una periferica da parte della CPU. Il polling consiste nel controllare in modo periodico, durante un ciclo, lo stato della periferica. Questo però porta a perdita di cicli e quindi di tempo. L'interrupt invece viene eseguito dalla periferica che invia un segnale alla CPU la quale può decidere se accettare o rifiutare
- Elencare e descrivere brevemente i modi di indirizzamento del Pentium II (livello ISA)
> -Indirizzamento immediato: l'operando contiene un valore costante MOV AL,10-Indirizzamento diretto: l'operando contiene un indirizzo di memoriaMOV AL,[104532a0h]-Indirizzamento dei registri: l'operando ontiene un registro  MOV AL,AH-Indirizzamento indiretto dei registri: il registro contiene un indirizzo di memoria che è l'operando   MOV EAX,[EBX]-Indirizzamento con offset:  MOV AL,Vettore[ECX*4+4]
- In cosa consiste una tabella della verità?  Darne una definizione formale
> Sono tabelle che contengono variabili e funzioni booleane, le righe sono 2^n dove n è il numero di variabili in modo da creare tutte le configurazioni possibili. Ogni riga mostra il valore restituito a partire da una particolare configurazione dell'input
- Definire le architetture superscalari e indicarne i principali vantaggi
> Le architetture superscalari supportano il calcolo parallelo su un singolo chip, ovvero sono presenti più unità funzionali dello stesso tipo, per esempio solitamente sono presenti più ALU, ma anche unità floating point ecc. In questo modo si possono eseguire in un singolo ciclo più operazioni
- Per quali motivi in uno stesso calcolatore vengono tipicamente impiegate più tecnologie di memoria (SRAM, DRAM, ROM)?
> Ogni tipo di memoria ha pregi e difetti, quindi ogni componente viene utilizzato nel modo giusto. Ad esempio le SRAM particolarmente veloci ma anche costose vengono utilizzate solo come Cache L2, le DRAM invece sono un buon compromesso per essere utilizzate come memoria centrale. Una ROM invece è permanente e di poca capacità quindi perfetta per il suo compito.
- Discutere brevemente le differenze esistenti tra bus ISA e PCI
> Il bus ISA introdotto da IBM funziona a una velocità massima di 8,33 Mhz e larghezza di banda di 16,7 MB/sec. Utilizza 16 linee dati. Il bus PCI introdotto da Intel utilizza 32 linee dati, opera a 33MHz e ha una larghezza di banda di 133 MB/sec
- Elencare le più comuni tecnologie utilizzate dalle stampanti, descrivendone brevemente i principi di funzionamento
> Esistono stampanti a matrice,a laser e a getto d'inchiostro.-Le stampanti a matrice sono basate su una testina mobile che contiene da 2 a 24 aghi, più è il numero di aghi e più è precisa la stampa.-Le stampanti a laser utilizzano un rullo sul quale passa il foglio, un laser riflesso da uno specchio ottagonale colpisce il rullo che nei punti colpiti perde carica elettrica. I punti rimasti carichi arrirano il materiale colorante che viene poi fissato da rulli riscaldati.-Le stampanti a getto d'inchiostro sono le più usate per stampe colorate. Usano 4 cartucce (magenta,ciano,giallo,nero). La testina mobile spruzza l'inchiostro per mezzo di piccoli uggelli.47) Quante linee di uscita ha un decoder che possiede 2 linee di input? Disegnare il circuito mediante porte logiche.47) in base alla combinazione dei  bit presenti ai suoi ingressi, attiva una rispettiva combinazione di bit sulle linee di uscita.
- Che cosa si intende per “Program Counter”?
> Il PC (Program Counter) è il registro più importante, fa parte dell'unità di controllo e indica la prossima istruzione da eseguire.
- Che cos’è IJVM ?
> Java è un linguaggio ad alto livello indipendente dalla piattaforma hardware.Può essere interpretato a run time da un interprete che genera da esso istruzioni ISA adatte al architettura in uso (metodo lento), o può essere compilato in un codice binario detto Bytecode, eseguito poi da un JVM (java virtual machine). La seconda opzione, più performante, impone l'esistenza di una JVM per ogni piattaforma hardware diversa. La JVM è comunque anch'essa un interprete, ma a basso livello. IJVM (IntegerJVM) è il sottoinsieme delle istruzioni Bytecode-java relative ai numeri interi
- Che cosa si intende per “esecuzione fuori ordine delle istruzioni/micro-istruzioni” e in quali casi può essere utile?
> L' esecuzione fuori ordine consiste nel scavalcare un'operazione e passare a quelle successive facendo in modo che i risultati finali siano gli stessi. Viene quindi applicata quando per esempio un'istruzione per essere eseguita deve aspettare che ne venga eseguita un'altra, la CPU così invece di aspettare esegue alcune operazioni successive.
- Arbitraggio del bus: dare una definizione e discutere le principali differenze tra arbitraggio centralizzato e distribuito.
> Le politiche di arbitraggio del bus sono la soluzione al fatto che più dispositivi possono richiedere il controllo del bus nello stesso momento. Quindi uno dei due deve aspettare e ciò viene deciso dalle poliche di arbitraggio che può essere centralizzato o distribuito. Nell'arbitraggio centralizzato è presente un chip arbitro collegato a tutti i dispositivi, quando un dispositivo chiede il controllo del bus l'arbitro attiva un metodo di priorità. Nell'arbitraggio distribuito non c'è un chip arbitro, vengono utilizzate 16 linee di richiesta. Ogni dispositivo è collegato a tutte e 16 le linee ed è anche in grando di valutare la sua priorità rispetto agli altri
- Spiegare la differenza fra un segnale digitale e un segnale analogico
> Un segnale è digitale quando i valori utili che lo rappresentano sono discreti e finiti. Un segnale è analogico quando i valori utili che lo rappresentano sono continui (infiniti) in un intervallo
- Cosa significa che una CPU ha un’architettura a 32 bit? Per quale motivo una CPU a 32 bit è più veloce di una CPU a 16 bit che opera alla stessa frequenza?5
> Una CPU a 32 bit è migliore di una a 16 bit in quanto la prima in un ciclo di data path riesce a eseguire operazioni sul doppio dei dati avendo registri a 32 bit e bus adeguati
- Dare una definizione formale di CPU e descriverne i principali componenti
> La CPU (central process unit) ha il compito di eseguire i programmi immagazzinati nella memoria centrale.-unità di controllo: legge le istruzioni dalla memoria centrale (RAM) e ne determina il tipo-ALU: esegue le operazioni necessarie  all'esecuzioni delle istruzioni (AND, OR ...).-Registri: piccola e veloce memoria usata per contenere i risultati temporanei e varie informazioni di controllo
- Descrivere quali approcci vengono comunemente utilizzati per migliorare le prestazioni di un calcolatore
> Solitamente si cerca di ridurre il numero di cicli, aumentare la frequenza di clock semplificando l'organizzazione, sovrapporre l'esecuzione delle istruzioni(parallelismo) attraverso l'uso di pipeling, architetture superscalarie CPU in parallelo
- Si descrivano le diverse operazioni che compongono il ciclo di fetch-decode-execute
> Fetch:1-legge l'istruzione seguente e la mette in IR2-Incrementa PC per indicare l'istruzione seguenteDecode:    3-Decodifica l'istruzione appena lettaExecute:   4-Determina dove si trovano gli operandi nel caso ci siano5-Se necessario mette gli operandi nei registri6-Esegue l'istruzione7-Salva il risultato nel registro
- Discutere differenze e analogie tra ROM, PROM ed EPROM
> ROM: (Read Only Memory) memoria che non può essere cancellata in quanto i
dati vengono memorizzati durante la fase di costruzione.PROM: (Programmable ROM) anche questa memoria può essere scritta una sola volta ma la differenza è che i metodi con cui è scritta sono più semplici e meno dispendiosi, Può essere usata per prototipi e solitamente non è prodotta in serie.EPROM: (Erasable PROM) funziona ed è programmata esattamente come una PROM ma il suo contenuto può essere canellato da luceultravioletta e quindi riscritta
- Descrivere le funzionalità di una ALU a N bit
> Una generica ALU (unità aritmetico-logica) come suggerisce il nome può eseguire svariate operazioni aritmetiche e operazioni logiche (AND, OR, XOR....) sfruttando l'architettura a N bit dei registri
- Descrivere l’architettura di Von Neumann con l’aiuto di uno schema esplicativo
> L'architettura di Von Neumann sibasa sul fatto che la memoria viene utilizzata non solo per i dati ma anche per i prgrammi.La CPU legge attraverso il bus inidirzzi un'istruzione per volta e attraverso il bus dati può leggere o scrivere dati
- Che cos’è il fetch di un’istruzione ?  Cosa si intende per pre-fetching ?
> Il fetch di un'istruzione consiste nel caricare questa nel registro IR ed incrementare PC. Il pre-fetch è un'operazione di predizione dell'istruzione seguente in modo che sia già pronta una volta eseguita l'istruzione corrente
- Descrivere il processo di traduzione da un generico linguaggio di alto livello al linguaggio macchina
> Il linguaggio ad alto livello è completamente indipendente dalla macchina, per poter funzionare deve essere tradotto da un compilatore (o eventualmente da un interprete). Il “risultato” della compilazione (già a basso livello) deve passare per il linker che collega i vari moduli (librerie / sottoprogrammi) prima di diventare un vero e proprio eseguibile
- Che cosa si intende per “tecniche di predizione di salto” e in quali casi possono essere utili?
> Le architetture pipeline velocizzano molto l'esecuzione delle istruzioni, ma sono inutili quando sono presenti molti salti. Per ottimizzare questa architettura si utilizzano tecniche di predizione di salto che con criteri basati su statistiche o sul “buon senso” (abitudini dei programmatori) cercano di prevedere un salto
- Descrivere le caratteristiche di un’interfaccia seriale e asincrona
> Un'interfaccia seriale significa che ibit che costituiscono l'informazione vengono trasmessi uno alla volta su di un unico conduttore e si sincronizzano utilizzando un clock, mentre in un'interfaccia asincrona i dati sono trasmessi senza far riferimento ad un clock comune
- Si scriva la legge di Amdhale si indichi in quale contesto viene utilizzata. (mostrare un semplice esempio della sua applicazione.)
> La legge di Amdhal afferma che il miglioramento delle prestazioni di un sistema che si ottine accelerando un qualsialsi sottinsieme del calcolatore è proporzionale alla percentuale di tempo per cui quel sottinsieme è utilizzato.(l'esercizio che abbiamo sul quaderno, quello con la P, con lambda ecc)
- Che cos’è un GATEWAY
> E' l'apparecchio che (in una rete) si occupa di instradare i pacchetti verso l' esterno della rete
- Quali meccanismi vengono utilizzati per sincronizzare CPU e memorie (che sono tipicamente più lente)?
> Per sincronizzare memorie e CPU si utilizza una piccola ma veloce memoria, la cache. Nella cache vengono memorizzati i dati che devono essere processati e insieme a questi anche i dati contigui che risiedono in memoria cercando così di prevedere la prossima richiesta della CPU. La CPU prima di cercare nella memoria, richiede il dato alla cache che è molto piu veloce
- Quali sono le principali tipologie di architetture parallele?
> -Parallelismo nel Chip: comprende Pipeling, Architetture superscalari, multicore, multi-threating.
-Coprocessori: al processore viene aggiunto un altro processore indipendente che esegue compiti specializzati.-Multiprocessori: sono sistemi con più di una CPU e con memoria condivisa, ogni processore comunica attraverso le celle di memoria, c'è una sola copia del sistema operativo in esecuzione.-Multicomputer: sono sistemi con più di una CPU e con memoria propria, questo implica una bassa interezione tra le varie CPU perchè bisogna utilizzare una rete di interconnessione che comporta anche un complesso sitema di instradamento. Su ogni CPU è in esecuzione una copia del sistema operativo.-Cluster: Sono più PC collegati attraverso schede di rete, quindi sono più economici e possono essere utilizzati in vari modi, per esempio sfruttati nello stesso momento e al massimo, oppure il secondo PC sostituisce il primo se questo smetti di funzionare...ecc.
- Si indichi in che modo sono memorizzate le informazioni in un disco magnetico, specificando i tre elementi che ne caratterizzano l’organizzazione
> I dischi magnetici sono composti principalmente da cilindri,settori e tracce. L'interastruttura è formata da più cilindri (dischi) posizionati uno sopra l'altro. Ogni cilindro contiene le tracce, sequenze circolari di bit, mentre un settore è una porzione di traccia di dimensione fissa (solitamente 512 byte)
- Quanti chip di memoria 32K x 8 sono necessari per realizzare una memoria centrale con parole di 32 bit e capacità 256Kparole?  Motivare la risposta.
> 32K X 8      32k=numero parole    8=numero flip flop per parola (grandezza parola). Per arrivare a parole grandi 32 mettiamo in parallelo4(32k x 8). Per arrivare a 256k parole usiamo 8(4(32k x 8))   Quindi 4*8 volte 32k x 8  = 32 chip di memoria.
- Quanti flip-flop sono necessari per realizzare una SRAM  32K x 8? Motivare la risposta
> 32k x 8 =256000 perchè ci sono 32000 parole, ognuna rappresentata da 8 flip flop.81) Descrivere le differenze fra parallelismo a “livello di istruzione” e a “livello di processore”.81) Il parallelismo a livello di istruzione consiste nell'eseguire più istruzioni contemporaneamente attraverso tecniche di pipeling e Architetture Superscalari. Si parla di parallelismo a livello di processore quando lo stesso problema (o processo) è suddiviso in più parti (più thread) che vengono eseguite in modo suddiviso da più CPU
- Che cos’è il “control store” in unamicroarchitettura?
> E' una memoria ROM al interno della CPU che contiene le microistruzioni che formano i microprogrammi che codificano le itruzioni ISA
