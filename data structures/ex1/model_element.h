#ifndef MODEL_ELEMENT_H
#define MODEL_ELEMENT_H

class ModelElement {
public:
    ModelElement();

    ModelElement(int typeID, int modelID, int grade = 0);

    ~ModelElement() = default;

    bool operator>(const ModelElement &other) const;

    bool operator<(const ModelElement &other) const;

    bool operator==(const ModelElement &other) const;

    int getTypeId() const;

    int getGrade() const;

    int getModel() const;

private:
    int typeID_;
    int modelID_;
    int grade_;
};

ModelElement::ModelElement(int typeID, int modelID, int grade) :
    typeID_(typeID), modelID_(modelID), grade_(0)
{}

bool ModelElement::operator>(const ModelElement &other) const
{
    if (this->grade_ > other.grade_)
        return true;
    else if (this->grade_ == other.grade_) {
        if (this->typeID_ > other.typeID_)
            return true;
        else if (this->typeID_ == other.typeID_) {
            if (this->modelID_ > other.modelID_)
                return true;
        }
    }
    return false;
}

bool ModelElement::operator<(const ModelElement &other) const
{
    if (this->grade_ < other.grade_)
        return true;
    else if (this->grade_ == other.grade_) {
        if (this->typeID_ < other.typeID_)
            return true;
        else if (this->typeID_ == other.typeID_) {
            if (this->modelID_ < other.modelID_)
                return true;
        }
    }
    return false;
}

bool ModelElement::operator==(const ModelElement &other) const
{
    if (this->typeID_ == other.typeID_
        && this->modelID_ == other.modelID_)
        return true;
    return false;
}

int ModelElement::getTypeId() const
{
    return this->typeID_;
}

int ModelElement::getGrade() const
{
    return this->grade_;
}

int ModelElement::getModel() const
{
    return this->modelID_;
}
//default?
ModelElement::ModelElement()
{

}


#endif /* MODEL_ELEMENT_H */