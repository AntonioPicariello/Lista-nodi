#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

int main()
{
    NodoPtr head = NULL;
    stampaLista(head);

    inserisciCoda(&head, 10);
    /* head ---> 10 ---> NULL */
    
    stampaLista(head);

    inserisciDopo(head, 9, 10);
    /*
        head ---> 10 ---> 9 ---> NULL
    */
    stampaLista(head);

    inserisciTesta(&head, 4);
    /*
        head ---> 4 ---> 10 ---> 9 ---> NULL
    */
    stampaLista(head);

    inserisciDopo(head, 8, 10);
    /*
        head ---> 4---> 10 --> 8 ---> 9 ---> NULL
    */
    stampaLista(head);

    inserisciCoda(&head, 1);
    /*
        head ---> 4 ---> 10 --> 8 ---> 9---> 1 --> NULL
    */
    stampaLista(head);

    pulisciLista(&head);
    
    return 0;
}
