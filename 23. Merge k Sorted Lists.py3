# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        if not lists or len(lists)==0:
            return None
        
        head = ListNode(None)
        current = head

        minheap= []

        for i in range(len(lists)):
            if lists[i]:
                heapq.heappush( minheap, (lists[i].val, i))
                lists[i] = lists[i].next

        while minheap:
            val, i=heapq.heappop(minheap)
            current.next = ListNode(val)
            current = current.next
            if lists[i]:
                heapq.heappush(minheap, (lists[i].val,i))
                lists[i] = lists[i].next

        return head.next
        
        

        
