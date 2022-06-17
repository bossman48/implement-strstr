

#include <iostream>
#include <vector>

using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 // A simple C++ program for traversal of a linked list

int strStr(string haystack, string needle) {
    int mainStringSize=haystack.size();
    int otherStringSize = needle.size();
    for(int i =0;i<mainStringSize;i++){
        if(mainStringSize>=i+otherStringSize){
            if(haystack.substr(i,otherStringSize)==needle){
                return i;
            }
        }
    }
    return -1;
}

 void printList(ListNode* n)
 {
   cout<<endl;
     while (n != NULL) {
         cout << n->val << " ";
         n = n->next;
     }
 }

 // Driver code
 int main()
 {
        string haystack ="hello";
        string needle = "ll";
/*
        cout<<endl<<strStr(haystack,needle);

        haystack="aaaaa";
        needle="bba";
        cout<<endl<<strStr(haystack,needle);
*/
         haystack="a";
         needle="a";
         cout<<endl<<strStr(haystack,needle);
     return 0;
 }

 // This is code is contributed by rathbhupendra

