/**
  Copyright (c) Microsoft Corporation.  All rights reserved.

  Create, traverse, and then destroy a singly-linked list.
**/

#include "sll.h"


void traverse(PSLL_ENTRY head) {
  while(head != NULL) {
    head = head->Flink ;
  }
}

void main(void) {
  PSLL_ENTRY head,head1,head2;

  head = SLL_create(nondet());
  head1 = SLL_create(nondet());
  head2 = SLL_create(nondet());
  traverse(head);
  SLL_destroy(head);
  free(head2);
}
