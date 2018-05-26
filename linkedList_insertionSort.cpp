#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* next;
    node(int x) : val(x),next(NULL) {}
};

node* createList(){
    node *A = new node(0);
    node *it = A;

    for (int i = 0; i < 10; ++i)
    {
        node* temp = new node(rand() % 10 +1);
        it->next = temp;
        it = it->next;
    }
    return A;
}

void displayList(node* display)
{
    while(display)
    {
        if(display->next == NULL)
            cout<<display->val;
        else
            cout<<display->val<<" -> ";

        display = display->next;
    }
}

node* insertionSort(node* A)
{
    if(!A || !A->next)
        return A;

    node* sorted = NULL;
    node* list = A;

    while(list)
    {
        node* current = list;
        list = list->next;

        if(!sorted || sorted->val >= current->val)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            node* temp = sorted;
            while(sorted)
            {
                node* it = temp;
                temp = temp->next;

                if(!it->next || it->next->val > current->val)
                {
                    current->next = it->next;
                    it->next = current;
                    break;
                }
            }

        }
    }
    return sorted;
}

int main(int argc, char **argv)
{
    node* A = createList();
    cout<<"Before sorting\n";
    displayList(A);
    node* B = insertionSort(A);
    cout<<"\nAfter sorting\n";
    displayList(B);
    return 0;
}

