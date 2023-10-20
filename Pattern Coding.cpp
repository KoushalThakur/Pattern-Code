1- Prime Number
#include <iostream>
using namespace std;
int main() 
{
int n;                            
cin>>n;

  int i=2;
  while(i<n){
    if(n%i==0){
      cout<<"Not prime"<<" "<<i<<endl;
    }
    else{
      cout<<"prime"<<" "<<i<<endl;
    }
    i=i+1;
  }
}*/

//output:primenumber 

2.
/*#include <iostream>
using namespace std;
int main() 
{
int n,i,j;
  cout<<"enter value of n"<<" ";
cin>>n;
  for(i=1;i<=n;i++){      output:12345
  for(j=i;j<=n;j++) {                 1234
    cout<<(j-i+1);                      123   
  }                                             12
    cout<<endl;                         1
  }
  }*/

3.
/*#include<iostream>
using namespace std;
 int main(){
   int n,i,j;
   cout<<"enter the value of n"<<" ";
   cin>>n;
  
   for(i=1;i<=n;--i){
     for(j=1;j<=i;j++){
       cout<<"j+i-1";
       }
     cout<<endl;     
   }
   
 }*/

4.
/*#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cout<<"enter the value of n";
  cin>>n;
  
  int sum=0;           
    for(int i=1;i<=n;i++){
    sum=sum+i;
    
  }
  cout<<sum<<endl;
  }*/

//output:sum of n               
//value 5 = 25

5.
/*#include<iostream>
using namespace std;
int main(){
  int n,a=0,b=1;
  cout<<"enter the value of n"<<" "<<a<<" "<<b<<" ";
  cin>>n;
  for(int i=1;i<=n; i++){
    int nextnumber = a+b;       
    cout<<nextnumber<<" ";

    a=b;
    b= nextnumber;
  }
}*/

//output : fibonacci series

6.
/*#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;              output:  *****
  int row =1;                      *****
                                          *****
  while(row<=n){              *****
                                          *****
    int col =1;
    
    while(col<=n){
      cout<<"*";
      col=col+1;
    }
    cout<<endl;
    row=row+1;
  }
}*/

7.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;               output:11111
  int i=1;                           2222
                                         333
  while(i<=n){                  44
                                         5
    int j=i;
    while(j<=n){
      cout<<i;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  
}*/

8.
/*#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;                   output:1
                                             22
  int i=1;                               333
                                             4444
  while(i<=n){                      55555
   int j=1;
    while(j<=i){
      cout<<i;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

9.
/*#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;                              output:11111
  int i=1;                                          22222
  while(i<=n){                                 33333
    int j=1;                                        44444
    while(j<=n){                               55555
      cout<<i;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

10.
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;                       output:12345
int i=1;                                   12345
while(i<=n){                          12345
  int j=1;                                 12345
  while(j<=n){                        12345
    cout<<j;
    j=j+1;
  }
  cout<<endl;
  i=i+1;
}
}*/

11.
/*#include<iostream>
using namespace std;
int main(){
  int n;                            output:54321
  cin>>n;                                   54321
  int i=1;                                    54321
  while(i<=n){                           54321
    int j=1;                                  54321
    while(j<=n){
      cout<<n-j+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

12.
/*#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;                         output:123
  int count =1;                          456
while(i<=n){                            789
  int j=1;
    while(j<=n){
    cout<<count<<" ";
    count=count+1;
    j=j+1;
    }
  cout<<endl;
  i=i+1;
}
}*/

13.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;                 output: *****
  int i=1;                              ****
  while(i<=n){                     ***
    int j=i;                             **
    while(j<=n){                   *
      cout<<"*";
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

14.
/*#include <iostream>
using namespace std;
int main(){
int n;
  cin>>n;                      output: *
  int i=1;                                   **
  while(i<=n){                          ***
    int j=1;                                 ****
    while(j<=i){                         *****
      cout<<"*";
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/


15.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;                 output:123
  int count=1;                     45
  while(i<=n){                    6
    int j=i;
    while(j<=n){
      cout<<count<<" ";
      count = count+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

16.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;                   output:1
  int i=1;                               23
  int count=1;                       456
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<count<<" ";
      count=count+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

17.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i= 1 ;
  
  while( i<=n){
    int j=1;                output:1
    int value =1;                   12
    while( j<=i){                  123
      cout<<value<<" ";      1234
      value = value+1;          12345
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

18.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<i-j+1<<" ";
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
}*/

19.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;            output: AAAAA
  int i=1;                         BBBBB
  while(i<=n){                CCCCC
                                      DDDDD
    int j=1;                       EEEEE
    while(j<=n){
      char ch='A'+i-1;
      cout<<ch;
      j=j+1;
    }                 
    cout<<endl;
    i=i+1;
  }
  }*/

20.
/*#include<iostream>
using namespace std;
int main(){
  int n ;
  cin>>n;
  for(int i =0 ;i<n;i++){
    for(int j=0 ; j<n;j++){
      char chater;
      chater = 'A'+ j;
      cout<<chater;
    }
    cout<<endl;
  }
  
  
}*/

21.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
 char value ='A';          output: ABC
  while(i<=n){                         DEF
                                                GHI
    int j=1;
    while(j<=n){
      cout<<value<<" ";
      value=value+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
    
  }
}*/

22.
/*#include<iostream>
using namespace std;
int main(){
  int n;              output: ABCDE
  cin>>n;                      BCDEF
  int i=1;                       CDEFG
  while(i<=n){              DEFGH
    int j=1;                     EFGHI
    while(j<=n){
      char ch = ('A'+i+j-2);
      cout<<ch<<" ";
      j=j+1;
      }
    cout<<endl;
    i=i+1;
  }
  
}*/

23.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;            output: A
  int i=1;                         BB
  while(i<=n){                CCC
    int j=1;                       DDDD
    while(j<=i){               EEEEE
      char ch = ('A'+i-1);  for reverse('A'+n-1)
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}*/

24.
/*#include<iostream>
using namespace std;
int main(){        output: A
  int n;                           BC
  cin>>n;                       CDE 
  int i=1;                        DEFG
  while(i<=n){               EFGHI
    int j=1;
    while(j<=i){
      char ch = ('A'+i+j-2);
      cout<<ch<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
}*/

25.
/*#include<iostream>
using namespace std;
int main()
{
  int n;       output: A
  cin>>n;               BC
  int i=1;                DEF
  char ch ='A';        GHIJ
  while(i<=n){       KLMNO
    int j=1;
    while(j<=i){
      cout<<ch<<" ";
      ch=ch+1;
      j++;
    }
    cout<<endl;
    i++;
  }
}*/

26.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;               output:      E
  int i=1;                               DE
  while(i<=n){                   CDE
    int j=1;                       BCDE
    char ch='A'+n-i;       ABCDE
    while(j<=i){
      cout<<ch<<" ";
      ch++;
      j++;
    }
    cout<<endl;
    i++;
  }
}*/

27.
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int space=n-i;           output: 1
    while(space){                      121
      cout<<" ";                      12321      
      space = space-1;           1234321
    }                                   123454321
    int j=1;
    while(j<=i){
      cout<<j;
      j=j+1;
    }
    int start=i-1;
    while(start){
      cout<<start;
      start=start-1;
      
    }
    cout<<endl;
    i=i+1;
  }
}*/


