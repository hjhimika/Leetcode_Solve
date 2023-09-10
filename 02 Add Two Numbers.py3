class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry=0
        dummyhead = ListNode(0)
        cr = dummyhead
        
        while l1!= None or l2!= None or carry!=0:
            l1value= l1.val if l1 else 0
            l2value= l2.val if l2 else 0
            colsum = l1value +l2value +carry
            carry = colsum//10
            newNode = ListNode(colsum %10)
            cr.next = newNode
            cr = newNode
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        return dummyhead.next
