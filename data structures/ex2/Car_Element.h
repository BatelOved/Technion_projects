#ifndef CAR_ELEMENT_H
#define CAR_ELEMENT_H

class Car_Element {
public:

    explicit Car_Element(int typeID);

    bool operator<(Car_Element& element);

    bool operator==(Car_Element& element);

    ~Car_Element();

private:
    int typeID_;
    int sales_;
};

#endif /* CAR_ELEMENT_H */
