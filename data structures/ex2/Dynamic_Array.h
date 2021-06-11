//
// Created by ASUS on 09/06/2021.
//

#ifndef DATA_STRUCT_1_HW_1_DYNAMIC_ARRAY_H
#define DATA_STRUCT_1_HW_1_DYNAMIC_ARRAY_H

template<class T>
class Dynamic_Array {

private:
    T **arr;
    int count;
    int size;

public:
    Dynamic_Array();

    void add(T *data = nullptr);

    void growSize();

    void shrinkSize();

    T &operator[](int index);

    const T &operator[](int index) const;

    void replaceAt(int index,T *data);

    ~Dynamic_Array();
};

template<class T>
Dynamic_Array<T>::Dynamic_Array()
{
    arr = new T*[1];
    count = 0;
    size = 1;
}

template<class T>
void Dynamic_Array<T>::add(T *data)
{
    if (count == size) {
        growSize(); // make array size double
    }
    arr[count] = data;
    count++;
}

template<class T>
void Dynamic_Array<T>::growSize()
{
    T **temp = nullptr;
    if (count == size) {
        temp = new T *[size * 2];
        {
            for (int i = 0; i < size; i++) {

                temp[i] = arr[i];
            }
        }
    }
    size = size * 2;
    delete[] arr;
    arr = temp;
}

template<class T>
void Dynamic_Array<T>::shrinkSize()
{
    T *temp = nullptr;
    if (count > 0) {
        temp = new T *[count];
        for (int i = 0; i < count; i++) {
            temp[i] = arr[i];
        }

        size = count;
        delete[] arr;
        arr = temp;
    }
}

template<class T>
T &Dynamic_Array<T>::operator[](int index)
{
    return *arr[index];
}

template<class T>
const T &Dynamic_Array<T>::operator[](int index) const
{
    if (index > count)
        return nullptr;
    else {
        return *arr[index];
    }
}

template<class T>
Dynamic_Array<T>::~Dynamic_Array()
{
    for (int i = 0; i < count; ++i) {
        auto  t= arr[i];
        delete t;
    }
    delete []arr;
}

template<class T>
void Dynamic_Array<T>::replaceAt(int index, T *data)
{
    delete arr[index];
    arr[index] = data;
}

#endif //DATA_STRUCT_1_HW_1_DYNAMIC_ARRAY_H
