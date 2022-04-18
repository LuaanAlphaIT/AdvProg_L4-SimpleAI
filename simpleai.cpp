{
    vector<string> answer;
    //Write your code here
    for (string s : vocabulary)
    {
        if (s.length() == wordLen) answer.push_back(s);
    }
    return answer;
}


{
    char answer;
    //Write your code here
    for (int i='a'; i<= 'z'; i++)
    {
        if (selectedChars.count(i) == 0)
        {
            answer = i;
            break;
        }

    }
    return answer;
}


{
    map<char, int> answer;
    //Write your code here
    for (string s : candidateWords)
    {
        for (int i=0; i<s.length(); i++)
        {
            answer[s[i]]++;
        }
    }

    return answer;
}


{
    char answer;
    //Write your code here
    int maxFre = -1;
    for(auto i : occurrences){
        if(i.second > maxFre && selectedChars.count(i.first) == 0){
            answer = i.first;
            maxFre = i.second;
        }
    }
    return answer;
}


{
    char answer;
    //Write your code here
    map<char, int> occurrences;
    occurrences = countOccurrences(candidateWords);
    answer = findMostFrequentChar(occurrences, selectedChars);
    return answer;
}



bool isCorrectChar(char ch, const string& mask)
{
    bool answer = false;
    //Write your code here
    for (char c : mask)
    {
        if (ch == c)
        {
            answer = true;
            break;
        }
    }
    return answer;
}


***/
bool isWholeWord(const string& mask)
{
    bool answer = true;
    //Write your code here
    for (char c : mask)
    {
        if (c == '_')
        {
            answer = false;
            break;
        }
    }
    return answer;
}


***/
bool wordConformToMask(const string& word, const string& mask, char ch) 
{
    bool answer = true;
    //Write your code here
    for (int i=0; i<mask.length(); i++)
    {
        if (mask[i] != '_' && mask[i] != word[i])
        {
            answer = false;
            break;
        }
    }
    return answer;
}


{
    vector<string> answer;
    //Write your code here
    for (string c : words)
    {
        if (wordConformToMask(c,mask,ch)) 
        {
            answer.push_back(c);
        }
    }
    return answer;
}
