# Reverse-a-Linked-List-in-Groups

## Difficulty: Hard
Given a linked list, the task is to reverse every k node (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).

Examples:

Input: Linked List: 1->2->2->4->5->6->7->8, k = 4
Output: 4 -> 2 -> 2 -> 1 -> 8 -> 7 -> 6 -> 5 

Explanation: The first 4 elements 1,2,2,4 are reversed first and then the next 4 elements 5,6,7,8. Hence, the resultant linked list is 4->2->2->1->8->7->6->5.
Input: LinkedList: 1->2->3->4->5, k = 3
Output: 3 -> 2 -> 1 -> 5 -> 4

Explanation: The first 3 elements 1,2,3 are reversed first and then element 4,5 are reversed. Hence, the resultant linked list is 3->2->1->5->4.

Expected Time Complexity: O(n)
Expected Space Complexity: O(1)
