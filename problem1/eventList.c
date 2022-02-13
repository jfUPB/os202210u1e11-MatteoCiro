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
    Event *a = this->head;
    if(this->isEmpty == 0)
    printf("empty\n");
    else{
        while(a!= NULL){
            printf("%s\n", a->eventName);
            a = a->next;
        }
    }
    DestroyEvent(a);
}
