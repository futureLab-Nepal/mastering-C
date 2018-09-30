#include <stdio.h>
#include "list.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

void display_list(List *list){
	ListElmt *ptr;
	ptr = list->head;

	while(ptr != NULL){
		printf("\t %s",(char *) ptr->data);
		ptr = ptr->next;
	}
}

void list_free(void *data){
	free(data);
}

int main(int argv, char *argc[]){
	List list;


	list_init(&list, NULL);
	assert(list_size(&list) == 0);
	printf("testing list library\n");

	printf("adding in the tail of the list\n");
	int num_chars ;

	char *test1 = "test1";
	char *test2 = "test2";
	char *test3 = "test3";

	num_chars = strlen(test1) + 1;
	char *copy1, *copy2, *copy3;
	//copy1 = (char *) malloc(sizeof(char) * num_chars);
	//copy2 = (char *) malloc(sizeof(char) * num_chars);
	//copy3 = (char *) malloc(sizeof(char) * num_chars);

	//strcpy(copy1, test1);
	//strcpy(copy2, test2);
	//strcpy(copy3, test3);

	list_ins_next(&list, list_tail(&list), test1);
	list_ins_next(&list, list_tail(&list), test2);
	list_ins_next(&list, list_tail(&list), test3);
	display_list(&list);
	list_destroy(&list);

	List list2;

	list_init(&list2, NULL);
	printf("\nadding in the head of the list\n");
	list_ins_next(&list2, NULL, "test1");
	list_ins_next(&list2, NULL, "test2");
	list_ins_next(&list2, NULL, "test3");
	display_list(&list2);
	list_destroy(&list2);


}
