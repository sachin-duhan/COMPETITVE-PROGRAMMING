#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string get_domain_name(string str){
    string ans = "";
    int i = 0;
    while(i < str.length() && str[i] != '.'){
        ans += str[i++];
    }
    return ans;
}

void swaps(string str,int i, vector<string> &asf, string ssf){
    if(i >= str.length()) {
        asf.push_back(ssf);
        return;
    }
    
    if(i > 0){
        string swapped = ssf;
        char c = swapped[swapped.length()-1];
        swapped[swapped.length()-1] = str[i];
        swapped += to_string(c);
        swaps(str, i+1, asf, swapped);
    }
    swaps(str, i+1, asf, ssf+str[i]);
}

void update_possible_domains(const string str, int i, vector<string> &asf, string ssf){
    if(i >= str.length()) {
        asf.push_back(ssf);
        return;
    }
    if(str[i] == '1' || str[i] == 'i' || str[i]=='l' || str[i] == '!' || str[i] == '|'){
        update_possible_domains(str,i+1,asf,ssf+'1');
        update_possible_domains(str,i+1,asf,ssf+'i');
        update_possible_domains(str,i+1,asf,ssf+'l');
        update_possible_domains(str,i+1,asf,ssf+'!');
        update_possible_domains(str,i+1,asf,ssf+'|');
    }
    else if(str[i] == 's' || str[i] == '5' || str[i] == '$' ){
        update_possible_domains(str,i+1,asf,ssf+'s');
        update_possible_domains(str,i+1,asf,ssf+'5');
        update_possible_domains(str,i+1,asf,ssf+'$');
    }
    else if(str[i] == 'o' || str[i] == '0' ){
        update_possible_domains(str,i+1,asf,ssf+'o');
        update_possible_domains(str,i+1,asf,ssf+'0');
    }
    else if(str[i] == 'a' || str[i] == '@' ){
        update_possible_domains(str,i+1,asf,ssf+'a');
        update_possible_domains(str,i+1,asf,ssf+'@');
    }
    else if(str[i] == 'e' || str[i] == '3' ){
        update_possible_domains(str,i+1,asf,ssf+'e');
        update_possible_domains(str,i+1,asf,ssf+'3');        
    }
    else 
        update_possible_domains(str,i+1,asf,ssf+str[i]);
}

vector<string> typosquats(vector<string> companyDomains, vector<string> newDomains) {
    map<string,int> m;
    vector<string> domains(newDomains.size());
    
    string invalid = "_|_";
    int ans = 0;
    
    for(string domain : companyDomains) m[domain]++;
    for(int i =0;i<newDomains.size();i++){
        string str = newDomains[i];
        if(m.find(str) != m.end()){
            domains[i] = invalid;
        }else{
            domains[i] = get_domain_name(newDomains[i]);
        }
    }
    
    m.clear();
    
    for(auto domain : companyDomains){
        string d = get_domain_name(domain);
        vector<string> possible_domain;
        update_possible_domains(d,0,possible_domain,"");
        vector<string> bakwas;
        for(auto p : possible_domain) {
            vector<string> temp;
            swaps(p, 0, temp, "");
            for(auto d : temp) bakwas.push_back(d);
        }
        for(auto p : bakwas) m[p]++;
    }
    
    vector<string> f_ans;
    for(int i =0;i<domains.size();i++){
        auto str = domains[i];
        if(m.find(str)!=m.end())
            f_ans.push_back(newDomains[i]);
    }
    return f_ans;
}

int main(){}