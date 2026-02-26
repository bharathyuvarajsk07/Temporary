# Definition for singly-linked list.
 #class ListNode:
  #   def __init__(self, val=0, next=None):
   #      self.val = val
    #     self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        #first create a dummy node
        dummy=ListNode(0) #creating this so ,we  can continuosly create the actual listnodes with values
        current=dummy #to traverse through the dummy after 
        carry=0 #after adding the numbers,carry sending to next node(basic addition)
        
        #l1 and l2 doesn't have even numbers of nodes/elements
        while l1 or l2 or carry : #carry to create a new node for that '1 carry after addition'
            value1= l1.val if l1 else 0
            value2= l2.val if l2 else 0
            #now addtion after getting actual values or subst with 0 if not values in either of l1,l2,carry
            total=value1+value2+carry
            carry=total//10     #if more than 10 , carry of 1 is generated
            new_number=total % 10   #if remainder is got , its a single digit and stored ,if the carry produced , no 2digit number is stored in a single digit 

            current.next=ListNode(new_number)
             #Create the actual node after the dummy head and store the current total without carry
            current=current.next     #move to next node after storing the current value
            if l1: l1=l1.next #l1 iruntha next digit , illana false aagum from the line 15 , l1 0 nu irukkum
            if l2: l2=l2.next #same like previous line
        return dummy.next
             #returning after the dummy head , cuz dummy head is temporary head , actiual head starts from the current toalled value



