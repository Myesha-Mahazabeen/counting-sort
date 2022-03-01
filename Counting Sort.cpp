#include <iostream>
using namespace std;

int main()
{
     int input[] = {8,3,2,7,9,1,4};
     int counts[11]= {0};
     int op[sizeof(input)/sizeof(input[0])];


     for(int i=0; i<sizeof(input)/sizeof(input[0]); i++)
        counts[input[i]]++;

    /* 
    storing the index of the number i in counts[i]
    beginning iteration from the end of count[] so that the bigger number has the lower index, 
    so the array will be sorted in descending order.
    */
    for(int i=sizeof(counts)/sizeof(counts[0])-2 ; i>=0 ; i--)
        counts[i] += counts[i+1];

    for(int i=0; i<sizeof(op)/sizeof(op[0]); i++)
    {
        op[counts[input[i]]-1]=input[i];
        counts[input[i]]--;
    }
    
    for(int i=0; i<sizeof(op)/sizeof(op[0]); i++)
        cout<< op[i]<<" ";

    cout<< '\n';
}