vector<string> split(string &s)
{
    vector<string> spl;
    stringstream str(s);
    string w;

    while(str>>w)
        spl.push_back(w);

    return spl; 
}