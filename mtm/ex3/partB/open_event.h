#ifndef OPEN_EVENT_H
#define OPEN_EVENT_H

#include "base_event.h"
using mtm::BaseEvent;

namespace mtm {
    class OpenEvent : public BaseEvent {
    public:
        OpenEvent(const DateWrap date, const string name = "");
    };
}

#endif /* OPEN_EVENT_H */