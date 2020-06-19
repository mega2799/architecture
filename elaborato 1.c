#include <stdio.h>


void main()
{
	// Input
	//char frase[1024] = "Cantami, o Diva, del Pelide Achille l'ira funesta che infiniti addusse lutti agli Achei";
	//char frase[1024] = "test24 test.,;a test78";
	//char testo[1024] = "La fabbrica del futuro avra' solo due dipendenti, un uomo e un cane. L'uomo sara' la' per dare cibo al cane e il cane per impedire all'uomo di avvicinarsi alle apparecchiature.";
	char frase[1024] = "Prova 1; 2 3 test123, Password";
	char testo[1024] = "Chi non e' savio, paziente e forte, si lamenti di se', non della sorte";
	char decifra = 0; // 0 = cifra; 1 = decifra

	// Output
	char parolaMax[100];	//La parola pi� lunga
	char risultato[1024]; 	//Il testo cifrato/decifrato

	// Blocco assembler

	__asm
	{
		//////////////////////////////
		//							//
		//		   Tabelle			//
		//							//
		//////////////////////////////

		//label2: controllo carattere valido 
		//lavbel3: caso in cui il carattere � valido 
		//label4: caso in cui il carattere non � valido
		//label5: controllato intera stringa
		//label6: utile per la codifica 
		//label7: utile per la decodifica 



		xor esi,esi
		jmp start
		
	
	label2 :			//label2 controlla carattere per carattere 
		cmp[eax], 0x2e	//.
		jne dot
		mov esi,1  
		ret 
		dot:
		cmp[eax], 0x2c	//,
		jne comma
		mov esi,1 
		ret 
		comma:
		cmp[eax], 0x3b //;
		jne dot_comma
		mov esi,1
		ret 
		dot_comma:
		cmp[eax], 0x3a //:
		jne d_dot
		mov esi,1  
		ret 
		d_dot:
		cmp[eax], 0x27 //'
		jne apos
		mov esi,1
		ret 
		apos:
		cmp[eax], 0x3f //?
		jne question
		mov esi,1  
		ret 
		question:
		cmp[eax], 0x21 //!
		jne excl
		mov esi,1 
		ret 
		excl:
		cmp[eax], 0x20 // space
		jne space
		mov esi,1  
		ret 
		space:
		ret 

		start:
		lea eax,[frase] //carica l indirizzo della frase in eax 
		xor edx, edx	// max caratteri
		xor ecx, ecx	//tmp caratteri

		label1:
		cmp[eax], 0
		je label5
		call label2 //controllo carattere
		cmp esi,0
		je label3
		/////////////////////////
		//carattere non valido //
		/////////////////////////
		cmp edx, ecx
		jg continua					
		mov ebx, eax		
		mov edx, ecx		
		sub ebx, ecx					
		continua:
		inc eax				
		xor ecx, ecx		
		mov esi,0
		jmp label1
		/////////////////////////
		//carattere non valido //
		/////////////////////////
		label3:			
		inc eax
		inc ecx
		jmp label1 

			label5:
		////////
		cmp edx, ecx
		jge continua_0					
		mov ebx, eax		//non basta rivedere progetto di l�
		mov edx, ecx		//non basta rivedere progetto di l�
		sub ebx, ecx		//non basta rivedere progetto di l�			inizio parola pi� lunga
		continua_0:
		//////
		mov ecx, edx
		mov esi, ebx				//parola maggiore address 
		lea edi, dword ptr[parolaMax]
		rep movsb
		mov parolaMax[edx], 0

		//////////////////////////////////////
		//			cifrario				//
		//									//
		//////////////////////////////////////


		mov ecx, edx // ecx = lung parola max
		xor edx, edx
		xor ebx, ebx
		mov esi, ecx // salvo lunghezzza massima 
		xor eax,eax
		mov al,[testo]
		cmp al,0
		je nullo
		mov al,decifra
		cmp al,0
		jne label7 
		label6 :
		xor ecx, ecx
			correct :
		mov bl, testo[edx]
			add bl, parolaMax[ecx]
			mov risultato[edx], bl
			inc edx
			inc ecx
			cmp testo[edx], 0
			je end4
			cmp ecx, esi
			je label6
			jne correct
			end4 :
		inc eax
			mov risultato[edx], 0
		jmp over 

			label7 :
			xor ecx, ecx
			correct_0:
		mov bl, testo[edx]
			sub bl, parolaMax[ecx]
			mov risultato[edx], bl
			inc edx
			inc ecx
			cmp testo[edx], 0
			je end5
			cmp ecx, esi
			je label7
			jne correct_0
			end5:
		inc eax
		nullo:
			mov risultato[edx], 0
			over:
}

	// Stampa a video
	printf("Frase: %s\n", frase);
	printf("Testo: %s\n", testo);
	printf("Parola piu' lunga: %s\n", parolaMax);
	// Stampa su video testo cifrato
	printf("Risultato: %s\n", risultato);
	printf("Risultato (in esadecimale):\n");
	// N.B. Nella stringa precedente alcuni caratteri possono non essere stampabili: 
	//		crea anche una stringa con tutti i caratteri come codici ascii esadecimali
	char* t = risultato;
	while (*t)
	{
		printf("\\x%02X", (unsigned char)(*t++));
	}
	return;
}
