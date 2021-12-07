#ifndef MAIN_H
#define MAIN_H

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint_backward(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
void free_dlistint(dlistint_t *head);

#endif /* MAIN_H */
