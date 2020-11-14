
```C++
template <typename Type>
void DynamicQueue<Type>::push( const Type &obj ) {
    // enter your implementation here
    // if the array is full, double the size
    if ( this->full() ) {        
        //create temporary container
        Type* temp = new Type[array_capacity*2];
        //copy 'elements' into 'temp'
        for(int i =0; i < queue_size;i++){
          temp[i]=elements[ifront+i%array_capacity];
        }
        // 'element' pointer same as 'temp' then delete temp
        elements = temp;
        // delete isn't working as expected.
        //delete[] temp;
    }
    // increase back index
    iback = (iback+1) % array_capacity;
    // add element to the top
    elements[iback] = obj;
    ++queue_size;
}
```
