# include <vector>
# include <string>

using Result = std::vector<std::string>;
using DirectoryPath = std::string;
using Patterns = std::vector<std::string>;

class InputArgumentParser
{

private:
	Patterns textPatterns, filePatterns;

	bool recursion = false;   //By Default false its not Recursion
	bool allPatterns = true;  //By default true  ... Find Files which have all String Occurences

	DirectoryPath dirPath;

	public:
		bool parseCommandLineArgs2TextCompArguments(int argc, char ** argv);

		bool getRecursionFlag();
		bool getAllPatternsFlag();

		Patterns getTextPatterns();
		Patterns getFilePatterns();
		DirectoryPath getDirectoryPath();
	
};