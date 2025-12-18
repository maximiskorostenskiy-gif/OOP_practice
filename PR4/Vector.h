#ifndef VECTOR_H
#define VECTOR_H

template <typename T>
class Vector
{
private:
    T* array;
    int size;
    int capacity;

public:
    Vector()
    {
        this->capacity = 10;
        this->size = 0;
        this->array = new T[this->capacity];
    }

    ~Vector()
    {
        delete[] this->array;
    }

    int getSize()
    {
        return this->size;
    }

    int getCapacity()
    {
        return this->capacity;
    }

    void push_back(T element)
    {
        if (this->size == this->capacity)
        {
            int newCapacity = this->capacity + 10;
            T* newArray = new T[newCapacity];

            for (int i = 0; i < this->size; i++)
            {
                newArray[i] = this->array[i];
            }

            delete[] this->array;
            this->array = newArray;
            this->capacity = newCapacity;
        }

        this->array[this->size] = element;
        this->size++;
    }

    void pop_back()
    {
        if (this->size > 0)
        {
            this->size--;
        }
    }

    T at(int index)
    {
        return this->array[index];
    }

    T operator[](int index)
    {
        return this->array[index];
    }
};

#endif