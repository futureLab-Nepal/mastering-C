#include <stdio.h>
#include "list.h"
#include <assert.h>

void display_list(List *list){
	ListElmt *ptr;
	ptr = list->head;

	while(ptr != NULL){
		printf("\t %s", ptr->data);
		ptr = ptr->next;
	}
}

int main(int argv, char *argc[]){
	List list;

	list_init(&list, NULL);
	assert(list_size(&list) == 0);
	printf("testing list library\n");

	printf("adding in the tail of the list\n");
	list_ins_next(&list, list_tail(&list), "test1");
	list_ins_next(&list, list_tail(&list), "test2");
	list_ins_next(&list, list_tail(&list), "test3");
	display_list(&list);

	List list2;

	list_init(&list2, NULL);
	printf("\nadding in the head of the list\n");
	list_ins_next(&list2, NULL, "test1");
	list_ins_next(&list2, NULL, "test2");
	list_ins_next(&list2, NULL, "test3");
	display_list(&list2);


}
