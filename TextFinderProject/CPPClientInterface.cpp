//#include "CPPClientInterface.h"
//
//using TextComp = AbstractTextSearchComponentReferenceCounted;
//using namespace std;
//
//void displayFilesPassed(Result fileSet)
//{
//    	std::cout << "Displaying Files Generated from the C++ Interface from Shared Library" << std::endl;
//
//        int i=0;
//                    
//	for (std::string file : fileSet)
//	{
//                i++;
//            	std::cout <<"Qualified File #"<<i<<" : "<< file << std::endl;
//                    
//        }
//
//}
//
//
//void CPPCLIENTINTERFACE::performTextComponentSearchMechanism(int argc,char ** argv)
//{
//
//            std::cout << "\n  Demonstrating Text Search Component C++ Client Via Shared Dynamic Link Library Simulation";
//            std::cout << "\n =========================================================\n";
//            
//            TextComp *comp = TextSearchFactory::createTextSearchComponent();
//
//            comp->verbose();
//
//            InputArgumentParser parser;
//
//            if (parser.parseCommandLineArgs2TextCompArguments(argc, argv))
//            {
//                    static_cast<TextSearchComponent*>(comp)->searchFilesRecursive(parser.getRecursionFlag());
//
//                    static_cast<TextSearchComponent*>(comp)->searchAllPatterns(parser.getAllPatternsFlag());
//
//                    Result fileSet=comp->search(parser.getDirectoryPath(),parser.getFilePatterns(),parser.getTextPatterns());
//
//                    displayFilesPassed(fileSet);
//
//                    comp->Release();
//            }
//
//            else
//            {
//                    std::cout << "Error During Parsing of Arguments of the TextSearchComponent"<< endl;
//                    std::cout << "Arguments==> /R(opt)   /O(opt)   -Path ______  -Words __ ___   -Files ___ ___"<<endl;
//                    std::cout << "             recursion Condition  DirectoryPath TextPatterns     FilePatterns  "<< endl;
//            }
//
//
//}
