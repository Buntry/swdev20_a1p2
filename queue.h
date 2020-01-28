#pragma once
#include "object.h"
#include "string.h"

/**
 * @brief Represents a FIFO queue for containing objects.
 * 
 */
class Queue : public Object {
  public:
    /**
     * @brief Constructs a new empty Queue object.
     * 
     */
    Queue();

    /**
     * @brief Destroys the Queue object.
     * This will delete all objects currently in the queue.
     */
    ~Queue();

    /**
     * @brief Adds the given object to the queue.
     * 
     * @param other 
     */
    void enqueue(Object *other);

    /**
     * @brief Removes an object from the queue, returning
     * nullptr if the queue is empty.
     * 
     * @return Object* 
     */
    Object* dequeue();

    /**
     * @brief Returns, but doesn't remove, the head of the queue.
     * Returns nullptr if the queue is empty.
     * 
     * @return Object* 
     */
    Object* peek();

    /**
     * @brief Returns the number of elements in the queue.
     * 
     * @return unsigned long 
     */
    unsigned long size();

    /**
     * @brief Returns whether the queue contains any elements.
     * 
     * @return bool 
     */
    bool is_empty();

    /**
     * @brief Removes all elements from the queue, deleting them.
     */
    void clear();

    /**
     * @brief Returns the hashcode of this Queue.
     * 
     * @return unsigned long 
     */
    virtual unsigned long hash();

    /**
     * @brief Determines whether this queue is equal to the
     * given object.
     * 
     * @param o 
     * @return bool
     */
    virtual bool equals(Object* o);
};

/**
 * @brief Represents a FIFO queue for containing strings.
 * 
 */
class StrQueue : public Object {
  public:
    /**
     * @brief Constructs a new empty StrQueue object.
     * 
     */
    StrQueue();

    /**
     * @brief Destroys the StrQueue object.
     * This will delete all strings currently in the queue.
     */
    ~StrQueue();

    /**
     * @brief Adds the given string to the queue.
     * 
     * @param other 
     */
    void enqueue(String *other);

    /**
     * @brief Removes a string from the queue, returning
     * nullptr if the queue is empty.
     * 
     * @return String* 
     */
    String* dequeue();

    /**
     * @brief Returns, but doesn't remove, the head of the queue.
     * Returns nullptr if the queue is empty.
     * 
     * @return String* 
     */
    String* peek();

    /**
     * @brief Returns the number of elements in the queue.
     * 
     * @return unsigned long 
     */
    unsigned long size();

    /**
     * @brief Returns whether the queue contains any elements.
     * 
     * @return bool 
     */
    bool is_empty();

    /**
     * @brief Removes all elements from the queue, deleting them.
     */
    void clear();

    /**
     * @brief Returns the hashcode of this Queue.
     * 
     * @return unsigned long 
     */
    virtual unsigned long hash();

    /**
     * @brief Determines whether this queue is equal to the
     * given object.
     * 
     * @param o 
     * @return bool
     */
    virtual bool equals(Object* o);
};