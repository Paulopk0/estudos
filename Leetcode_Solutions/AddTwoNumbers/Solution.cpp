class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        ListNode* dummyhead = new ListNode(0); // nó falso
        ListNode* atual = dummyhead; // ponteiro que passara o no
        int carry = 0; //solucao para as dezenas na soma


        while (l1 != nullptr || l2 != nullptr || carry > 0){
            int cur1 = (l1 != nullptr) ? l1->val : 0; // valor atual da lista1
            int cur2 = (l2 != nullptr) ? l2->val : 0; // valor atual da lista2
           
            int soma = cur1 + cur2 + carry;
            carry = soma / 10;
            int val = soma % 10;


            atual->next = new ListNode(val); // Cria e anexa o novo nó
            atual = atual->next;  // Move 'atual' para o novo último nó


            if (l1 != nullptr){l1 = l1->next;} // avanca o ponteiro
            if (l2 != nullptr){l2 = l2->next;}  
        }
    return dummyhead->next;
    }
};

