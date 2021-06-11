#ifndef CAR_ELEMENT_H
#define CAR_ELEMENT_H

class CarElement {
public:

    explicit CarElement(int typeID);

    bool operator<(CarElement& element);

    bool operator==(CarElement& element);

    ~CarElement();

private:
    int typeID_;
    int sales_;
};

#endif /* CAR_ELEMENT_H */
