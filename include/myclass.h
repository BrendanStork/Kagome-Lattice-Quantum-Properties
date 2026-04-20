//Unmodified ITensor code. 
//Prevents header files being included more than once.
#ifndef __MY_CLASS_H_
#define __MY_CLASS_H_

#include <string>
#include <iostream>

class MyClass
    {
    int i_;
    std::string name_;
    public:
    
    //Default constructor
    MyClass() : i_(0) { }

    MyClass(std::string name, int i)
      : i_(i),
        name_(name)
        { }

    std::string const&
    name() const { return name_; }

    int
    value() const { return i_; }

    };


inline std::ostream&
operator<<(std::ostream& s, MyClass const& m)
    {
    s << "MyClass(" << m.name() << "," << m.value() << ")";
    return s;
    }


#endif //__MY_CLASS_H
