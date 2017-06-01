/*
* Program to evaluate face values.
* Released under the Vegas Public License.
* (c)2014 The College Blackjack Team.
*/

/*
 * gcc cards.c -o cards && ./cards
 */

#include <stdio.h>
#include <stdlib.h>
int main(){

	char card_name[3];
	int count = 0;
	while (card_name[0] != 'X'){
		puts("Coloque o card_name: ");
		scanf("%2s", card_name);
		int val = 0;

		/*if (card_name[0] == 'K') {val = 10;}
		else if (card_name[0] == 'Q'){val = 10;}
		else if (card_name[0] == 'J'){val = 10;}
		else if (card_name[0] == 'A'){val = 11;}
		else{val = atoi(card_name);}*/

		switch(card_name[0]){
			case 'K':
			case 'Q':
			case 'J': val=10;break;
			case 'A': val=11;break;
			case 'X': continue;
			default:  val=atoi(card_name);
			if ((val <1) || (val>10)){
				puts("Nao entendi esse valor!");
			continue;
			}
		}
		/* Ver se o valor esta entre 3 a 6 */
		if ((val > 2) && (val < 7)){
			count++;
		}
		else if (val == 10){
			count--;
		}

		printf("contagem corrente: %i\n", count);
	}

return 0;
}
