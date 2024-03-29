#ifndef _MYSTRING_H_
#define _MYSTRING_H_

// #include "Mystring.cpp"

class Mystring
{
private:
 char *str;  //pointer to character that holds a c -style string.
public:
    Mystring(); //no arg constructor
    Mystring(const char *s);  //overloaded constructor
    Mystring(const Mystring &source);  //copy constructor
    ~Mystring();
    
    void display() const;
    int get_length() const;
    const char *get_str() const;


};

#endif












