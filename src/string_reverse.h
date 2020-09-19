/*
 * string_reverse.h
 *
 *  Created on: 2020Äê9ÔÂ19ÈÕ
 *      Author: ASUS
 */

#ifndef STRING_REVERSE_H_
#define STRING_REVERSE_H_



#endif /* STRING_REVERSE_H_ */
void swap(char* a, char* b);
void reverseStringNolength(char *string);
void reverseString(char *string, int length);
int string_length(char *pointer);


void reverseString(char *string, int length){
	char *left= string;
	char *right= string;

	int c;
	for ( c = 0 ; c < ( length - 1 ) ; c++ )
	{
		right++;
	}

	printf("left pointing at character %c and right pointing at character %c\n", *left, *right);
	while (left < right){
		swap(left, right);
		left ++;
		right --;

	}
}

void reverseStringNolength(char *string){
	char *left= string;
	char *right= string;

	int c;
	int length = string_length(string);
	for ( c = 0 ; c < ( length - 1 ) ; c++ )
	{
		right++;
	}

	printf("left pointing at character %c and right pointing at character %c\n", *left, *right);
	while (left < right){
		swap(left, right);
		left ++;
		right --;

	}
}

int string_length(char *pointer)
{
   int c = 0;

   while( *(pointer+c) != '\0' )
      c++;

   return c;
}

void swap(char* a, char* b){
	char temp = *a;
	*a = *b;
	*b = temp;

}
