//lang:CwC
#pragma once
#include "object.h"

/**
 * @brief Represents an immutable sequence of characters.
 */
class String : public Object {
  public:
    // Holds the value and length respectively of the sequence.
    const char* value_;
    unsigned long length_;

    /**
     * @brief Constructs a new empty String object.
     * Calls Object's constructor.
     */
    String();

    /**
     * @brief Constructs a new String object from a c-string.
     * Calls Object's constructor.
     * 
     * @param value 
     */
    String(const char* value);

    /**
     * @brief Construct a new String by copying the contents of a String.
     * Calls Object's constructor.
     * 
     * @param s 
     */
    String(String& s);

    /**
     * @brief Destroys the String object.
     * 
     */
    ~String();

    /**
     * @brief Returns the length of the String.
     * 
     * @return unsigned long 
     */
    unsigned long length();

    /**
     * @brief Gets the character at a specific index.
     * 
     * @param index       <length()
     * @return char 
     */
    char char_at(unsigned long index);

    /**
     * @brief Constructs a new string from concatenating this string to
     * the given string.
     * 
     * @param that 
     * @return String& 
     */
    String* concat(String& that);

    /**
     * @brief Returns the substring found within the given bounds. 
     * 
     * @param start         <length()
     * @param end           <length()
     * @return String& 
     */
    String* substring(unsigned long start, unsigned long end);

    /**
     * @brief Finds the first occurrence of the given substring. 
     * Returns >length() if it cannot find it.
     * 
     * @param that 
     * @return unsigned long 
     */
    unsigned long find(String& that);
    
    /**
     * @brief Determines whether this string is equal to the given object.
     * 
     * @param other 
     * @return bool
     */
    virtual bool equals(Object* other);

    /**
     * @brief Returns and computes the hashcode of this String.
     * 
     * @return unsigned long 
     */
    virtual unsigned long hash();

    /**
     * @brief Computes the hashcode of this String such that if two
     * Strings are equal, then they have the same hashcode.
     * 
     */
    virtual void compute_hash();
};
