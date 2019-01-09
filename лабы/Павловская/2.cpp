#include <iostream> 
using namespace std; 

int random(int min, int max) 
{ 
static bool first = true; 
if (first) 
{ 
srand(time(NULL)); 
first = false; 
} 
return min + rand() % (max - min); 
} 

int minIndex(int array[],int len) 
{ 
int res = array[0]; 
int indexOF; 
for(int i=0;i<len;i++) 
if(res > array[i]) 
{ 
res = array[i]; 
indexOF = i; 
} 
return indexOF; 
} 

int maxIndex(int array[],int len) 
{ 
int res = array[0]; 
int indexOF; 
for(int i=0;i<len;i++) 
if(res < array[i]) 
{ 
res = array[i]; 
indexOF = i; 
} 
return indexOF; 
} 

void sort(int arr[], int len) 
{ 
bool flag = true; 
int temp; 
int numLength = len; 
for(int i = 1;(i<=numLength)&&flag;i++) 
{ 
flag = false; 
for(int j=0; j<(numLength-1);j++) 
{ 
if (arr[j+1]>arr[j]) 
{ 
temp = arr[j]; 
arr[j] = arr[j+1]; 
arr[j+1] = temp; 
flag = true; 
} 
} 
} 
} 

int main () 
{ 
int size; 
int sum_negative=0; 
int mul_between=1; 
cout « "Enter array size: "; 
cin » size; 
int arr[size]; 
cout « "array = "; 
for(int i=0;i<size;i++) 
{ 
arr[i]=random(-100,100); 
cout « arr[i] « " "; 
if(arr[i]<0) 
sum_negative+=arr[i]; 
} 
cout « endl; 
cout « "sum of negative digits = " « sum_negative; 
if(minIndex(arr,size)<maxIndex(arr,size)) 
for(int j=minIndex(arr,size)+1;j<maxIndex(arr,size);j++) 
mul_between*=arr[j]; 
else if(minIndex(arr,size)==maxIndex(arr,size)) 
mul_between=0; 
else 
for(int j=maxIndex(arr,size)+1;j<minIndex(arr,size);j++) 
mul_between*=arr[j]; 
cout « endl; 
cout « "pr between indexes " « minIndex(arr,size) « " and " 
« maxIndex(arr,size) « " = " « mul_between « endl; 
sort(arr,size); 
cout « "sorted array = "; 
for(int k=0;k<size;k++) 
cout « arr[k] « " "; 
cout « endl; 
return 0; 
}