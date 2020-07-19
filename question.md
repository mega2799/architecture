Esercizi
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
>ris: 1100 0011 1110 1100 0001 0000 0000 0000

- Siano A = (a_1 a_0) e B = (b_1 b_0) due numeri binari (con a_1 e b_1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A and (not B)) 
è un numero maggiore di 1 (and e not sono operatori bit a bit). Si scriva la tabella di verità di F, 
quindi si determini e si semplifichi la corrispondente espressione booleana.
>espressione: __A__ __B__ __C__ __D__ + __A__ B __C__ __D__ + __A__ B __C__ D + __A__ B C D + A B __C__ __D__ <br> sempl: __A__ B D + __C__ __D__(__A__ + B)

- Si consideri una CPU in grado di eseguire un programma P in 200ns. In una versione più evoluta della stessa CPU sono state accelerate alcune istruzioni di un fattore a: 
tale nuova CPU è in grado di eseguire P in 150ns. 
Sapendo che il fattore di accelerazione è a=2, si calcoli la percentuale di istruzioni accelerate p rispetto al totale di quelle contenute nel programma P.
>ris: 50%

- ((A+BC(X+Z)(ABX)+D) + 1 ) (ACD+AD+BA+DAB) NULL
((1 ) (ACD+AD+BA+DAB) Identità
(ACD+AD+BA+DAB) Raccoglimento (distributiva)
(A(CD+D+B+DB)) assorbimento
(A(D+B)) = AD + AB distributiva


- Sia B = b3 b2 b1 b0 un numero binario (con b3 bit di peso maggiore) e si consideri la funzione booleana F(B) che è vera se B è un numero primo 
(si ricordi che 0 e 1 non sono numeri primi). Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana.

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
>ris: C2EF4000h 

- A(BAD+A+ADB’)(C(A’B’C’+(C’+D)+1))

- Si converta in base 10 il numero rappresentato in formato IEEE754 singola precisione da: 
43800000h
>ris: 0100 0011 1000 0000 0000 0000 0000 0000 

- Siano A = (a1 a0) e B = (b1 b0) due numeri binari (con a1 e b1 bit più significativi); si consideri la funzione booleana F(A,B) che è vera se (A-B) è un numero positivo e primo. 
Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana

- 0x44e1f000 (probabilmente conversione in decimale, partendo da numero esadecimale IEEE 754)
>ris: 0100 0100 1110 0001 1111 0000 0000 0000

- Su una CPU, un algoritmo che necessita di 20.000 istruzioni viene eseguito in 10 secondi. 
Sapendo che la percentuale di istruzioni in virgola mobile dell’algoritmo è 60% e che si vuole sostituire l’unità che esegue le operazioni in virgola mobile con una più veloce, 
calcolare quanto dovrebbe essere il fattore di accelerazione della nuova unità affinché il tempo di esecuzione dell’intero algoritmo dimezzi.

- Si converta in base 10 il numero rappresentato in formato IEEE754 singola precisione da: 
449a4000h

- Si consideri un calcolatore dotato di una cache a 2 livelli. Il tempo di accesso a una parola è di 5ns per la cache di primo livello e 30ns per la RAM. Durante l’esecuzione di un programma, 20 parole sono lette dalla RAM, 12 dalla cache di primo livello e 18 parole sono lette dalla cache di secondo livello. Sapendo che il tempo totale di lettura delle parole è di 1230ns, determinare il tempo di accesso alla cache di secondo livello.

- Sia B = b3 b2 b1 b0 un numero binario (con b3 bit di peso maggiore) e si consideri la funzione booleana F(B) che è vera se B non è un numero primo. Si scriva la tabella di verità di F e si determini la corrispondente espressione booleana.
- (C(A’B’C’+(C’+D)+1)) (BAD+A+ADB’) 
- Si converta in base 10 il numero rappresentato in formato IEEE754 singola precisione da: 449a4000h

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

