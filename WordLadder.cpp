/* WordLadder.cpp
 * CS10C
 * WordLadder
 */
#include "WordLadder.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <string>

using namespace std;

 
 WordLadder::WordLadder(const string& listFile){
  ifstream inFS;
  inFS.open(listFile);
  
  if(!inFS.is_open()){
   cout << "Could not open file " << listFile << "." << endl;
   return;
  }
  
  string dictWord;
  
  while(!inFS.eof()){
   inFS >> dictWord;
   dict.push_back(dictWord);
  }
  
  inFS.close();
  
 }
 
 WordLadder::~WordLadder(){
  while(!dict.empty()){
   dict.pop_front();
  }
 }
 
 void WordLadder::outputLadder(const string& start, const string& end){
    stack<string> s;
    s.push(start);
    queue<stack<string> > q;
    q.push(s);
    
    if (start == end){
     cout << s.top() << endl;
     return;
    }
    
    while(!q.empty()){
     for(list<string>::iterator it = dict.begin(); it != dict.end(); ++it){
      if (offByOne(*it, q.front().top())){
       if (*it == end){
        outputLadder(q.front(), end);
        return;
       }
       else{
        stack<string> s1 = q.front();
        s1.push(*it);
        q.push(s1);
        it = dict.erase(it);
        --it;
       }
      }
     }
     q.pop();
    }
    
    cout << "Not Found" << endl;
 }
 
 void WordLadder::outputLadder(stack<string>& s, const string& start){
  cout << start << endl;
  
  while(!s.empty()){
   cout << s.top() << endl;
   s.pop();
  }
 }
 
 void WordLadder::printDictionary(){
  for (list<string>::iterator it = dict.begin(); it != dict.end(); ++it){
   cout << *it << ",";
  }
 }
 
 bool WordLadder::offByOne(const string& s1, const string& s2){
  int count = 0;
  for(unsigned int i = 0; i < s2.size(); ++i){
   if (s1.at(i) != s2.at(i)){
    ++count;
   }
  }
  
  if (count == 1){
   return true;
  }
  
  return false;
 }