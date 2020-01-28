//lang:CwC
#pragma once

/**
 * @brief Represents a basic object.
 * 
 */
class Object {
  public:
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
};
