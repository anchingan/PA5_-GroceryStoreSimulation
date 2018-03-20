//
//  Data.hpp
//  PA5_ GroceryStoreSimulation
//
//  Created by Ching-An Tsai on 05/03/2018.
//  Copyright © 2018 Chingan. All rights reserved.
//

#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>


class Data

{
    
public: // Member functions
    Data();
    ~Data();
    void setCustomerNumber(int customerNumber);
    void setServiceTime(int serviceTime);
    void setTotalTime(int totalTime);
    
    int getCustomerNumber() const;
    int getServiceTime() const;
    int getTotalTime() const;
    
private:
    
    int customerNumber; // Unique identifier; starts at 1; after 24 hours should be reset to 1
    int serviceTime; // Random time; varies between express and normal lanes; units in minutes
    int totalTime;     // totalTime = serviceTime + sum of serviceTimes of customers in line before this customer; units in minutes
    
}; // This memory needs to be allocated on the heap!

#endif /* Data_hpp */
