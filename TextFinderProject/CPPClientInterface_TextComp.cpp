/* 
 * File:   CPPClientInterface_TextComp.cpp
 * Author: mohitb117
 *
 * Created on March 25, 2014, 9:18 PM
 */

#include <dlfcn.h>
#include <cstdlib>
# include "CPPClientInterface.h"

/*
 *   
 */

# ifdef TEST_CPPCLIENT_INTERACE

int main(int argc, char** argv) 
{
        void * lib_handle = dlopen("libTextSearchComponent.so", RTLD_LAZY);
        
        if(lib_handle == NULL)
        {
          std::cout << "can't open libTextSearchComponent.so" << std::endl;
          return 0;
        }
    	
        else
        {
            std::cout<<"DLL Successfully Loaded"<<std::endl;
            
            CPPCLIENTINTERFACE ref;
            
            ref.performTextComponentSearchMechanism(argc,argv);
        
        }

    return 0;
}

#endif