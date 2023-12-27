#include<bits/stdc++.h>
std::map<char, std::string> morseCodeDict = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
    {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
    {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
    {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
    {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
    {'8', "---.."}, {'9', "----."},
    {' ', "\n"}
};
std::string input;

std::string string_to_Morse(std::string &text)
{
    std::string Morse_Code;
    for(char ch :text)
    {
        ch=std::toupper(ch);
        if(morseCodeDict.find(ch)!=morseCodeDict.end())
            Morse_Code+=morseCodeDict[ch];
        Morse_Code+=" ";
    }
    return Morse_Code;
}
int main()
{
    std::getline(std::cin,input);
    std::cout<<string_to_Morse(input);
}
