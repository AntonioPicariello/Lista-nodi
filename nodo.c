#include<stdio.h>
#include<stdlib.h>
#include "nodo.h"

void stampaLista(NodoPtr attuale){
    if(attuale == NULL){
        printf("Lista vuota\n");
    }else{
    while(attuale != NULL){
        printf("%d --> ", attuale->val);
        attuale = attuale->next;
    }
    printf("Lista finita\n");
} }

void inserisciCoda(NodoPtr *head, int val){
     if (*head == NULL) {
        inserisciTesta(head, val);
        return;
    }

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = NULL;

    NodoPtr temp = *head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nuovoNodo;
}

void inserisciTesta(NodoPtr *head, int val) {
    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = *head;

    *head = nuovoNodo;
}

void inserisciDopo(NodoPtr head, int val, int chiave)
{
    while (head != NULL && head->val != chiave) {
        head = head->next;
    }

    if (head == NULL) return;

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = head->next;

    head->next = nuovoNodo;
}

void pulisciLista(NodoPtr *head)
{
    NodoPtr temp;

    while (*head != NULL) {
        temp = *head;    
        *head = (*head)->next;
        
        printf("Pulizia nodo con valore %d\n", temp->val);
        free(temp);
    }
}