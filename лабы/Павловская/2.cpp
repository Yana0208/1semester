#include <iostream> 
using namespace std; 

int arr[64]; 

int min_el() 
{ 
int min = arr[0]; 
for( int i = 1; i < 64; i++ ) 
{ 
if( min > arr[i] ) 
{ 
min = arr[i]; 
} 
} 
return min; 
} 

int sum() 
{ 
int sum = 0; 
int last; 
int first; 
for( int i = 0; i < 64; i++ ) 
{ 
if(arr[i] >= 0) 
first = i; 
break; 
} 
for( int i = 63; i >= 0; i— ) 
{ 
if(arr[i] >= 0) 
last = i; 
break; 
} 
for( int i = first; i <= last; i++ ) 
{ 
sum += arr[i]; 
} 
return sum; 
} 

void sort() 
{ 
int buffer = 0; 
for( int i = 0; i < 64; i++ ) 
{ 
if( arr[i] > arr[i+1] ) 
{ 
buffer = arr[i]; 
arr[i] = arr[i+1]; 
arr[i+1] = buffer; 
} 
} 
} 

int main() 
{ 
for( int i = 63; i >= 0; i— ) 
{ 
arr[i] = i*5; 
} 
cout « "Ñóììà:" « sum() « endl; 
cout « "Ìèíèìàëüíîå:" « min_el() « endl; 
for( int i = 0; i < 64; i++ ) 
{ 
cout « "İëåìåíò ïîä íîìåğîì " « i « " ğàâåí " « arr[i] « endl; 
} 
return 0; 
}