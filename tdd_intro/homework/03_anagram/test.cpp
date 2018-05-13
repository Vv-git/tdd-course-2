/*
Given a word and a list of possible anagrams, select the correct sublist.

Given "listen" and a list of candidates like "enlists" "google" "inlets" "banana" the program should return a list containing "inlets".

_from http://exercism.io/_
*/
#include <gtest/gtest.h>

#include <string>
#include <vector>

std::vector<std::string> GetAnagrams(const std::string& word,
                                     const std::vector<std::string>& wordList)
{
    return std::vector<std::string>();
}

TEST(GetAnagrams, GiveOnlyOneWord_ReturnIt)
{
    std::vector<std::string> expectedAnagrams;
    std::vector<std::string> givenWords;

    givenWords.push_back("word");
    expectedAnagrams = givenWords;
    EXPECT_EQ(expectedAnagrams, GetAnagrams("word", givenWords));
}
