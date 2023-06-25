#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <filesystem>
using namespace std;

namespace fs = std::filesystem;

class trie
{
public:
	std::map<char, trie> children;
	std::map<std::string, int> mp;
	bool isColmplete;

	trie()
	{
		isColmplete = 0;
		children.clear();
	}
	void add_word(const char *word, std::string &path);

	std::map<std::string, int> *get_word_stats(const char *word);

	void store_trie(std::string file_path, std::string word);
};
void trie::add_word(const char *word, std::string &path)
{
	if (*word == '\0')
	{
		isColmplete = 1;
		trie::mp[path]++;
	}
	else
	{
		char cur = *word;
		if (children.find(cur) == children.end())
		{
			trie a;
			children[cur] = a;
		}

		children[cur].add_word(word + 1, path);
	}
}

std::map<std::string, int> *trie::get_word_stats(const char *word)
{

	if (*word == '\0')
	{

		return &mp;
	}
	else
	{

		char cur = *word;
		if (children.find(cur) == children.end())
			return nullptr;


		return children[cur].get_word_stats(word + 1);
	}
}

void trie::store_trie(string file_path, string word)
{

	if (isColmplete)
	{
		// this is a word
		// add a new json entry

		auto word_map = mp;
		ofstream my_file;
		my_file.open(file_path, ios::app);
		my_file << word << ": \n";
		vector<pair<string, int>> v;
		for (auto entry : word_map)
		{
			string path = entry.first;
			int freq = entry.second;
			my_file << freq << " time in : " << path << "\n";
			v.push_back({path, freq});
		}
		//return;
	}


		for (auto child : children)
		{

			trie *sub_trie = &child.second;

			sub_trie->store_trie(file_path, word + child.first);
		}

}


int main()
{
        trie myTrie;
	vector<string> words;

   	for (auto file : fs::directory_iterator("/home/boda/Desktop/Data2"))
		{
            words.clear();
			string file_name = file.path();
			// opne file, and adds all words in it into a vector then in inserts them into the trie
			ifstream myfile(file_name);
			if (myfile.is_open())
			{
				string word;
				while (myfile >> word)
				{
					words.push_back(word);
				}
				myfile.close();
			}

			for (auto word : words)
			{
				myTrie.add_word(word.data(), file_name);
			}
		}

		cout<<words.size()<<endl;


		ofstream ofs;
		ofs.open("data.txt", std::ofstream::out | std::ofstream::trunc);
		myTrie.store_trie("data.txt", "");
		ofs.close();

    return 0;
}
