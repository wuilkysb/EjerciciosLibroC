#include <stdio.h>
#include <ctype.h>

#define MORSELON 36
#define CODIGO 5
#define TEXTLON 144

int main(void)
{
	char morse[MORSELON][CODIGO+1] = {
		".-"   , "-..." , "-.-." , "-.."  , "."    , "..-." , "--."  , "...." , 
		".."   , ".---" , "-.-"  , ".-.." , "--"   , "-."   , "---"  , ".--." , 
		"--.-" , ".-."  , "..."  , "-"    , "..-"  , "...-" , ".--"  , "-..-" , 
		"-.--" , "--.." , "-----", ".----", "..---", "...--", "....-", ".....", 
		"-....", "--...", "---..", "----."
	};
	char texto[TEXTLON+1];
	int i;

	printf("\nEscriba un tweet (max. 144 caracteres): "); gets(texto);
	printf("\nRepresentación en código morse: \n");

	i = 0;
	do {
		texto[i] = toupper(texto[i]);
		if (texto[i] >= 65 && texto[i] <= 90)
			printf("%s ", morse[texto[i] - 65]);
		else if (texto[i] >= 48 && texto[i] <= 57)
			printf("%s ", morse[texto[i] - 22]);
		else if (texto[i] == 46)
			printf("STOP ");
		else if (texto[i] == 32 && texto[i-1] != 32 && i > 0)
			printf("  ");
	} while (texto[++i] != '\0');
	printf("\n\n");

	return 0;
}