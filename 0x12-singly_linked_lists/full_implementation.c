#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#include <stdio.h>

int main() {
list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}

void free_list(list_t *head)
{
    list_t *temp = head;
    while (head)
    {
        head = head->next;
        free(temp);
        temp = head;
    }
    free(head);
}
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        printf("Error\n");
    }
    new_node->str = strdup(str);
    new_node->len = strlen(str);
    new_node->next = *head;
    *head=new_node;
    return (new_node);
}
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    new_node = malloc(sizeof(list_t));
    list_t *temp;
    temp = *head;

    new_node->str = strdup(str);
    new_node->len = strlen(str);

    if (*head == NULL)
    {
        *head = new_node;
        new_node->next = NULL;
    }

    while(temp)
    {
        if (temp->next == NULL)
        {
            temp->next = new_node;
            new_node->next = NULL;
        }
        
        temp=temp->next;
    }
    
    return (new_node);
}
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		size++;
	}
	return (size);
}
