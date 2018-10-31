#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <iostream>

using namespace std;

class boolean {
    private:
        char* array;
        int theSize;
    
    public:
        boolean(int size)
        {
            theSize = size;
            array = new char[(size/8)+1];
            cout << "Array Initialized. (´｡• ᵕ •｡`)" << endl;
            cout << "The amount of chars needed is: " << (theSize/8)+1 << endl;
        }
        
        void bitOn(int position)
        {
            if (position > theSize)
                cout << "This position is out of bounds. (´-ω-`)" << endl;
            else
            {
                int arrayPosition, localPosition;
                arrayPosition = position/8;
                localPosition = position%8;
                array[arrayPosition] |= 1 << localPosition;
            }
        }
             
        void bitOff(int position)
        {
            if (position > theSize)
                cout << "This position is out of bounds. (´-ω-`)" << endl;
            else
            {
                int arrayPosition, localPosition;
                arrayPosition = position/8;
                localPosition = position%8;
                array[arrayPosition] &= ~(1 << localPosition);
            }
        }
             
        bool operator[](int position)
        {
            if (position > theSize)
                cout << "This position is out of bounds. (´-ω-`)" << endl;
            else
            {
                int arrayPosition, localPosition;
                arrayPosition = position/8;
                localPosition = position%8;
                return array[arrayPosition] >> localPosition & 1;
            }
        }
    
        void clear()
        {
            for(int i = 0; i < theSize; i++)
                bitOff(i);
        }
             
        ~boolean()
        {
            delete[] array;
        }
};

#endif