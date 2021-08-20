
string reverseWord(string str){
    
  //Your code here
  int i=0;
  int j = str.length()-1;
char temp;
for(;i<=j;i++,j--){
  temp=str[i];
  str[i] = str[j];
  str[j] = temp;
  }
  return str;
}
