#include <iostream>
#include <string>
using namespace std;
bool match(const char* pattern,  const char* str)
{ 
	if(*pattern=='\0' && *str=='\0')
		return true; 
	else if(*pattern=='\0' || *str=='\0')
		return false;  
    if(*pattern=='?') 
	{  
		return match(pattern+1, str+1);
	} 
	else if(*pattern=='*') 
	{        
		return match(pattern+1, str) || match(pattern+1, str+1)|| match(pattern+1, str+1);
	}    
	else if(*pattern==*str)  
	{        
		return match(pattern+1, str+1); 
	}
	return false;
}
int main()
{   string s1; 
	string s2;  
	while(cin>>s1>>s2)
	{        //s1��ͨ������ʽ��s2��һ���ַ���
		if(match(s1.c_str(), s2.c_str())) 
		{	cout<<"true"<<endl;
		 }          
		else          
		{	
			cout<<"false"<<endl;          
		}
	}      
	return 0;
}

