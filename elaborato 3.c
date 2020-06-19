/*******************************************************************************
*                                                                              *
*                   Architetture dei sistemi di Elaborazione                   *
*                                                                              *
********************************************************************************

Elaborato 3
Descrizione: Data una sequenza di bit, restituire la lunghezza media (arrotondata
			 all’intero più vicino), minima e massima delle sotto-sequenze di
			 bit (contigui) a 0 e a 1.

********************************************************************************/

#include <stdio.h>

void main()
{
	// Input
//	unsigned char vet[] = { 0xBC,0xFF,0x01 };	//Sequenza di bit
//	unsigned short int len = 18;				// Lunghezza (in bit) della sequenza
//	unsigned char vet[] = { 0xFF,0x01 };	//Sequenza di bit
//	unsigned short int len = 9;				// Lunghezza (in bit) della sequenza

//	unsigned char vet[] = { 0x01 };	//Sequenza di bit
//	unsigned short int len = 1;				// Lunghezza (in bit) della sequenza

	unsigned char vet[] = { 0x21 };	//Sequenza di bit
	unsigned short int len = 8;				// Lunghezza (in bit) della sequenza


//	unsigned char vet[] = { 0xfc,0xff };	//Sequenza di bit
//	unsigned short int len = 16;				// Lunghezza (in bit) della sequenza

//	unsigned char vet[] = { 0x00 };	//Sequenza di bit
//	unsigned short int len = 1;				// Lunghezza (in bit) della sequenza

	
//	unsigned char vet[] = { 0xfc,0xff,0x00 };	//Sequenza di bit
//	unsigned short int len = 17;				// Lunghezza (in bit) della sequenza


	//unsigned char vet[] = { 0x95,0xDF,0xFF,0xC2,0x13,0xEA,0x26,0x89,0x90,0x8D,0x87,0x66,0x18,0x92,0x21,0x35,0xC0,0x05,0xAD,0x18,0xD4,0x1E,0x39,0x20,0xDF,0x10,0x3A,0x33,0x23,0x74,0xE1,0x9F,0x61,0x7B,0x97,0xC4,0xD5,0xCE,0x4B,0x69,0x6F };	//Sequenza di bit
	//unsigned short int len = 327;				// Lunghezza (in bit) della sequenza

	// Output
	unsigned short int minLungSeq0;		//Lunghezza minima sotto-sequenza di 0
	unsigned short int maxLungSeq0;		//Lunghezza massima sotto-sequenza di 0
	unsigned short int mediaLungSeq0;	//Media arrotondata sotto-sequenze di 0
	unsigned short int minLungSeq1;		//Lunghezza minima sotto-sequenza di 1
	unsigned short int maxLungSeq1;		//Lunghezza massima sotto-sequenza di 1
	unsigned short int mediaLungSeq1;	// Media arrotondata sotto-sequenze di 1

	// Blocco assembler
	__asm
	{
		mov cx, len
		//inzializzazione variabili 
		mov minLungSeq0, cx 
		mov maxLungSeq1, 0
		mov minLungSeq1, cx
		mov maxLungSeq0, 0
		mov mediaLungSeq0, 0
		mov mediaLungSeq1, 0
		
		////////////////////////////////////
		//	label1: ciclo che controlla il byte ed anche tutto l'array 
		//	label0: tabella nel caso in cui il bit è 0 
		//	label2: tabella che controlla la fine dell'array/byte 
		//	label_max_min: tabella che controlla i massimi 
		//	got_n: tabelle che gestiscono la conta delle sotto sequenze, con la sentinella 
		//	label3: tabella che gestiràle sotto sqeunze
		//	label4: gestisce casi in cui ci sono solo 0 e 1 
		//	no_sub_min: non ce nessuna sotto seq minore 
		//	no_sub_min_0: non ce nessuna sotto seq minore con 0 
		//	label6: gestisce le medie, prima parte corrisponde alla media degli 1 
		//	possib_1: possibile 1 in fondo 
		//	possib_0: possibile 0 in fondo 
		//	average_1: media degli 1 
		//	denim_end: la fine in cui stistemo lo stack  
		/////////////////////////////////
		//stack operations 

		push 0			//esp		cnt_1
		push 0			//esp +4	cnt_0

		push 0			//esp +8	num_1 => len - (esp+16) = num_0
		push 0			//esp +12	sotto seq di 1 
		push 0			//esp +16	sotto seq di 0

		mov [esp-4],3	//sentinella 

		
		xor edi,edi
		
		label1:
		xor edx,edx 
		mov dl,[vet+edi]
		inc edi 
		xor esi,esi 
		mov esi,8		//esi 8 bit per non perdere dati 

		label_max_min:
		xor eax,eax 
		xor ebx,ebx 
		mov al,dl 
		shr dl,1
		dec cx //controllato 1 bit 
		test ax,1 
		je label0	//caso in cui ci sia 0 jumpa 
		
		inc [esp+8]	//contatore di 1 
		cmp [esp-4],1	//sentinella  
		je got_1 
		inc [esp+12]	//cnt sotto seq di 1	//se vengono eseguite prima avevo 0 
		mov [esp-4],1		//sentinella = 1 		//se vengono eseguite prima avevo 0 
		mov eax, [esp+4]	//ho avuto una seq di zeri, è la minore ?
		mov bx, minLungSeq0
		cmp eax, 0	//caso in cui ho appena inziato a contare
		je got_1
		cmp eax, ebx
		jg got_1
		mov minLungSeq0, ax
		got_1:
		mov [esp+4],0	//reset del contatore di 0
		inc [esp]		//cnt_1++
		mov bx,maxLungSeq1	//max_1
		mov eax,[esp]	//cnt_1
		cmp eax,ebx		//if cnt>max
		jb label2
		mov maxLungSeq1,ax
		jmp label2 

		label0:
		cmp [esp-4],0	//sentinella 
		je got_0
		inc [esp+16]	//sotto seq di 0 ++
		mov [esp-4],0
		mov bx, minLungSeq1	//ho avuto una sequenza di 1, è la minore ?
		mov eax, [esp]
		cmp eax,0	//caso in cui ho appena inziato a contare
		je got_0 
		cmp eax, ebx	//if cnt<min
		jg got_0
		mov minLungSeq1, ax
		got_0:
		mov [esp],0		//reset cnt_1
		inc [esp+4]		//cnt_0++
		mov bx,maxLungSeq0//max_0
		mov eax,[esp+4]//cnt_0
		cmp eax,ebx 
		jb label2
		mov maxLungSeq0,ax

		label2:
		cmp ecx,0	//controllato tutta la len ?
		je label3
		dec esi 
		cmp esi,0	//controllato tutto il byte ?
		je label1	//sì, percio passa al successivo 
		jmp label_max_min //no, percio continua 

		//controllo che l ultimo bit non generi un'altra sottosequenza
		
		label3:
		cmp [esp-4],1	//ultimo bit era 1 ?
		jne real_0		//no, ora controllo che non sia uno 0 
		mov ax,minLungSeq1
		mov ebx,[esp]
		cmp ebx,eax		//cnt > min_1 
		jge no_sub_min
		mov minLungSeq1,bx	//allora la minore è l'ultima sotto sequenza
		jmp real_0 
		no_sub_min:
		cmp cx,0
		je real_0 
		inc [esp+12]	
		real_0:
		cmp[esp-4],0	//ultimo bit è 0 ?
		jne label4		//no,percio jumpo ai casi speciali 
		mov ax,minLungSeq0
		mov ebx,[esp+4]
		cmp ebx,eax //cnt>min_0
		jge no_sub_min_0 
		mov minLungSeq0,bx 
		jmp label4 
		no_sub_min_0:
		cmp cx,0
		je label4
		inc [esp+16]		
		
		label4:
		xor ebx,ebx 
		mov ebx,[esp+12]	//sotto seq 1
		cmp ebx,0
		jne label5 
		mov minLungSeq1,0
		label5:
		mov ebx, [esp+16]	//sotto seq 0
		cmp ebx, 0
		jne label6 
		mov minLungSeq0,0
		
		//medie 	
			label6:   
			mov     dx, 0 // dividendo
			xor ecx, ecx
			mov ax, len
			mov ecx, [esp + 8]
			sub ax, cx
			cmp ax, 0
			jne possib_1
			mov mediaLungSeq0, 0
			jmp average_1
			
			possib_1 :
		mov ecx, [esp + 8]
			xor ebx, ebx
			mov     cx, [esp + 16]//divisore	
			cmp cx, 1		 //le sottosequenze sono una soltanto ? 
			jne  not_alone				//caso in cui ci sia solo una sequenza 
			mov mediaLungSeq0,ax
			jmp average_1
	not_alone :		
		div     cx  //ax = high, dx = low
			cmp dx, 0
			je no_resto
			mov bx, 1		//resto
			imul dx, 2
			cmp dx, cx
			jb not_eccesso
			no_resto :
		add ax, bx

			not_eccesso :
		mov mediaLungSeq0, ax

			average_1 :
		
		mov     dx, 0 // dividendo
			mov ax, [esp + 8]
			
			cmp ax, 0
			jne possib_0
			mov mediaLungSeq1, 0
			jmp denim_end
			
			possib_0 :
		xor ebx, ebx
			mov     cx, [esp+12]//divisore
			cmp cx, 1			//le sottosequenze sono una soltanto ? 
			jne not_alone_1		//caso in cui ci sia solo una sequenza 
			mov mediaLungSeq1, ax
			jmp denim_end
			////
			not_alone_1 :
		div     cx  //ax = high, dx = low
			cmp dx, 0
			je no_resto_1
			mov bx, 1				//resto 
			imul dx, 2
			cmp dx, cx
			jnge not_eccesso_1
			no_resto_1 :
		add ax, bx
			not_eccesso_1 :
		mov mediaLungSeq1, ax
			denim_end :
		pop eax
		pop eax
		pop eax
		pop eax
		pop eax 
	}		

	// Stampa su video
	printf("Lunghezza minima delle sotto-sequenze di 0: %d\n", minLungSeq0);
	printf("Lunghezza massima delle sotto-sequenze di 0: %d\n", maxLungSeq0);
	printf("Lunghezza Media delle sotto-sequenze di 0: %d\n", mediaLungSeq0);
	printf("Lunghezza minima delle sotto-sequenze di 1: %d\n", minLungSeq1);
	printf("Lunghezza massima delle sotto-sequenze di 1: %d\n", maxLungSeq1);
	printf("Lunghezza Media delle sotto-sequenze di 1: %d\n", mediaLungSeq1);

}

