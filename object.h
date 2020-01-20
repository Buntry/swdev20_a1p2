//lang:CwC
#pragma once
#include "string.h"

/**
 * @brief Represents a basic object.
 * 
 */
class Object {
  public:
    // Holds the memoized hashcode after it is computed.
    unsigned long hash_;

    /**
     * @brief Constructs a new Object.
     */
    Object();

    /**
     * @brief Destroys the Object.
     */
    ~Object();

    /**
     * @brief Determines whether this object is equal to the given object.
     * By default, it will check by memory address.
     * 
     * @param other 
     * @return bool
     */
    virtual bool equals(Object* other);

    /**
     * @brief Returns the hashcode if it's stored, otherwise, computes and
     * returns the hashcode.
     * 
     * @return unsigned long 
     */
    virtual unsigned long hash();

    /**
     * @brief Computes the hashcode.
     */
    virtual void compute_hash();

    /**
     * @brief Returns a string representation of this object.
     * In practice, this will allow for easy inspection during debugging.
     * 
     * @return String& 
     */
    virtual String& to_string();
};
