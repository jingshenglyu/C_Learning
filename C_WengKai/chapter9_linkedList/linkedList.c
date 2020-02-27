// linked list

#include<stdio.h>
#include<string.h>

struct Student
{
    int id;
    char name[16];
    Student *next;
};

// global variable
Student ss[4] =
{
    {202001, "John", 0},
    {202002, "Tom", 0},
    {202003, "Anna", 0},
    {202004, "Unnamed", 0},

};

// Student *find(Student *head, int id)
// {
//     Student *p = head;
//     while (p)
//     {
//         if(p->id == id) // match the condition
//             return p;
        
//         p -> next = p;
//     }

//     return NULL;    
// }

int main(int argc, char const *argv[])
{
    // linked list structure
    ss[0].next = &ss[1];
    ss[1].next = &ss[2];
    ss[2].next = &ss[3];
    ss[3].next = 0;

    //traversal linked list 
    Student *p = &ss[0];
    while (p)
    {
        printf("ID: %d, name: %s\n", p->id, p->name);
        p = p -> next; // next object
    }
    

    return 0;
}
