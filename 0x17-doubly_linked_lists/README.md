0x17-doubly_linked_lists

0-print_dlistint.c - C function that prints all the elements of a dlistint_t list
Prototype: size_t print_dlistint(const dlistint_t *h);

1-dlistint_len.c - C function that returns the number of elements in a linked dlistint_t list
Prototype: size_t dlistint_len(const dlistint_t *h);

2-add_dnodeint.c - C function that adds a new node at the beginning of a dlistint_t list
Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

3-add_dnodeint_end.c - C function that adds a new node at the end of a dlistint_t list
Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

4-free_dlistint.c - C function that frees a dlistint_t list
Prototype: void free_dlistint(dlistint_t *head);

5-get_dnodeint.c - C function that returns the nth node of a dlistint_t linked list
Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

6-sum_dlistint.c - C function that returns the sum of all the data (n) of a dlistint_t linked list
Prototype: int sum_dlistint(dlistint_t *head);

7-insert_dnodeint.c - C function that inserts a new node at a given position
Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

8-delete_dnodeint.c - C function that deletes the node at index index of a dlistint_t linked list
Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

