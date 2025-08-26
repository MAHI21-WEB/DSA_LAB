import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		HashMap<Character, Integer> map=new HashMap<>();
		for(int i=0;i<str.length();i++)
		{
		    map.put(str1.charAt(i),map.getOrDefault(str.charAt(i),0)+1);
		}
		for(int i=0;i<str2.length;i++)
		{
		    map.put(str2.charAt(i),map.getOrDefault(str.charAt(i),0)-1);
		}
		int flag=0;
		for(int i:map.keySet())
		{
		    if(map.get(i)!=0)
		    {
		        flag=1;
		        break;
		    }
		    
		}
		if(flag==0) System.out.print("Anagram");
		else System.out.print("Not Anagram");

	}
}
