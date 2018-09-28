#include <stdio.h>
#include "list.h"
#include <assert.h>

int main(int argv, char *argc[]){
	List list;

	list_init(&list, NULL);
	assert(list_size(&list) == 0);
	printf("testing list library\n");

}
