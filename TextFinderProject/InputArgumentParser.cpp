
# include "InputArgumentParser.h"
# include <iostream>
/*
	Schema of TextCompParsing :=

	<AppExec>.exe  /R(optional)   /O(optional)      -Path    _______    -Words  ______ ________   -Files ______ _______
					recursion      strings patterns
*/

void printVector(Result x)
{
    for(std::string res:x)
    {
        std::cout<<res<<" , ";
    }
    std::cout<<"\n";
}

void StoreAllPatterns(int argc, char ** argv, size_t currPos, Result & x)
{
	for (int i = currPos + 1; i < argc; i++)
	{
		std::string str(argv[i]);

		size_t pos = str.find("-");
		size_t maxPos = str.length();

		if ( pos >= 0 && pos <maxPos)
		{
			return;
		}

		else
		{
			x.push_back(str);
		}

	}

}

void scanTextCompFlags(int argc, char ** argv,bool & recursion,bool & allPatterns)
{

	for (int i = 0; i < argc; i++)
	{
		std::string arg(argv[i]);

		//If no /R mentioned .. then recursion is false
		if (arg == "/R")
		{
			recursion = true;
		}

		//If no /O is mentioned find allPatterns
		if (arg == "/O")
		{
			allPatterns = false;
		}
	}

}


void scanTextCompDirPath( int argc, char ** argv, DirectoryPath &dirPath)
{
	for (int i =0; i < argc; i++)
	{
		std::string arg(argv[i]);

		if (arg == "-Path"  && argc >= i+1)
		{
		    std::string path(argv[i+1]);
			dirPath = path;
			return;
		}
	}
}

void scanTextCompFileSearchString( int argc, char ** argv, Result &x)
{
	for (int i = 0; i < argc; i++)
	{
		std::string arg(argv[i]);

		if (arg == "-Files" && argc >= i + 1)
		{
			StoreAllPatterns(argc, argv, i, x);

			return;
		}
	}
}



void scanTextCompTextSearchString( int argc, char ** argv, Result &x)
{
	for (int i = 0; i < argc; i++)
	{

		std::string arg(argv[i]);

		if (arg == "-Words" && argc >= i + 1)
		{
			StoreAllPatterns(argc, argv, i, x);

			return;
		}
	}
}

Result InputArgumentParser::getFilePatterns()
{
	return filePatterns;
}


Result InputArgumentParser::getTextPatterns()
{
	return textPatterns;
}

DirectoryPath InputArgumentParser::getDirectoryPath()
{
	return dirPath;
}

bool InputArgumentParser::getRecursionFlag()
{
	return recursion;
}

bool InputArgumentParser::getAllPatternsFlag()
{
	return allPatterns;
}

bool InputArgumentParser::parseCommandLineArgs2TextCompArguments(int argc, char ** argv)
{
	scanTextCompDirPath(argc, argv, dirPath);

	scanTextCompFlags(argc, argv, recursion, allPatterns);

	scanTextCompFileSearchString(argc, argv, filePatterns);

	scanTextCompTextSearchString(argc, argv, textPatterns);

	if (filePatterns.size() == 0)
	{
		filePatterns.push_back("*.*");
	}

	if (textPatterns.size() == 0)
	{
		return false;
	}

	if (!(dirPath != "" || dirPath != " " || dirPath!="\t" || dirPath!= "\n" || dirPath!="\b" ))
	{
		dirPath = ".";
	}

        std::cout<<"Parsed Arguments from Command Line"<<std::endl;
        std::cout<<"Recursion Flag==>"<<recursion<<"\n Find All Patterns =>"<<allPatterns<<std::endl;
        std::cout<<"Search Directory Path : "<<dirPath<<std::endl;
        std::cout<<"File Patterns ==> ";
        printVector(filePatterns);
        std::cout<<"Text Patterns ==>";
        printVector(textPatterns);
        return true;
}
