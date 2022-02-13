#include "eventList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EventList *CreateEventList(void)
{
    EventList *eventList = NULL;
    return eventList;
}
void DestroyEventList(EventList *this)
{
    free(this);
}
Event *SearchEvent(EventList *this, char *name)
{
    Event *a = this->head;
    if(this->isEmpty == 0){
        return NULL;
    }
    else{
        while (a!= NULL){
            if(*(a->eventName + 2) == *(name + 2) && *(a->eventName + 3) == *(name + 3)){
                return a;
            }
            a = a->next;
        }
    }
}
void AddEvent(EventList *this, Event *event)
{

}

void RemoveEvent(EventList *this, char *name)
{
}

void ListEvents(EventList *this)
{
    // imprime esto si la lista está vacía
    printf("empty\n");
}
