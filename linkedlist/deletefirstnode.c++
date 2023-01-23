#include <bits/stdc++.h>

using namespace std;

class ListNode {
  public:
    int val;
  ListNode * next;
  ListNode(int x) {
    val = x;
    next = nullptr;
  }
};

ListNode * head, * tail; // head and tail of the LinkedList

void PrintList() // Function to print the LinkedList
{
  ListNode * curr = head;
  for (; curr != nullptr; curr = curr -> next)
    cout << curr -> val << "-->";
  cout << "null" << endl;
}

void InsertatLast(int value) // Function for creating a LinkedList
{

  ListNode * newnode = new ListNode(value);
  if (head == nullptr)
    head = newnode, tail = newnode;
  else
    tail = tail -> next = newnode;
}
void DeleteFirst() {
  if (head == nullptr)
    cout << "There are no nodes in LinkedList" << endl;
  else {
    // step1: Creating a Listnode pointer temp , and pointing it to head of LinkedList
    ListNode * temp = head;

    // Step2 : Making head->next as head
    head = head -> next;

    // Step3 : Making temp's next point to NULL
    temp -> next = nullptr;

    // step4 : Deleting the temp
    delete temp;
  }
}
int main() {
  InsertatLast(10);
  InsertatLast(20);
  InsertatLast(30);
  InsertatLast(40);
  cout << "LinkedList before Deleting First Node : " << endl;
  PrintList();
  DeleteFirst();
  cout << "LinkedList after Deleting First Node : " << endl;
  PrintList();
  return 0;
}