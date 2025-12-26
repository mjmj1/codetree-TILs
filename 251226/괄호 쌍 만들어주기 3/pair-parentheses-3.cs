using System;
using System.IO;
using System.Text;
using System.Linq;
using System.Collections.Generic;

public class Codetree
{
    public static void Main()
    {
        var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        var sb = new StringBuilder();

        var str = sr.ReadLine();
        int cnt = 0;

        for(var i = 0; i < str.Length; i++)
        {
            if(str[i] != '(') continue;

            for(var j = i + 1; j < str.Length; j++)
            {
                if(str[j] != ')') continue;

                cnt++; 
            }   
        }
        
        sb.Append($"{cnt}");
        sw.Write(sb);

        sr.Close();
        sw.Close();
    }
}