#ifndef __INTEGER_ARRAY__
#define __INTEGER_ARRAY__

class IntegerArray {
    private:
        int *data;
        int size;
        int index;
    public:
        IntegerArray(int size);
        IntegerArray(IntegerArray &o);
        ~IntegerArray();
		
		void push_back(int p); 	
		
		void remove(); 
					
		void print(); 			
};

#endif
